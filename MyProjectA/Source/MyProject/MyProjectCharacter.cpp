// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProjectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "Pickup.h"
#include "BreakableWall.h"


//////////////////////////////////////////////////////////////////////////
// AMyProjectCharacter

AMyProjectCharacter::AMyProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 0.f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	//Camera->SetupAttachment(CapsuleComponent);
	FollowCamera->SetRelativeLocation(FVector(0.f, 0.f, 500.f));
	FollowCamera->SetRelativeRotation(FRotator(180.f, -90.f, 0.f));
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void AMyProjectCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (Role == ROLE_Authority) {
		pRole="server";
	}
	else {
		pRole = "client";
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyProjectCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyProjectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AMyProjectCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMyProjectCharacter::OnResetVR);
}

FString AMyProjectCharacter::myRole()
{
	if (Role == ROLE_Authority) {
		return TEXT("Server");
		pRole = "server";
	}
	else {
		return TEXT("Client");
		pRole = "client";
	}

	
}


void AMyProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); // Call parent class tick function  

	CallMyTrace();
}

void AMyProjectCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMyProjectCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AMyProjectCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AMyProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyProjectCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, (Value*pSpeed));
	}
}

void AMyProjectCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, (Value*pSpeed));
	}
}

//***************************************************************************************************
//** Trace functions - used to detect items we are looking at in the world
//***************************************************************************************************
//***************************************************************************************************

//***************************************************************************************************
//** Trace() - called by our CallMyTrace() function which sets up our parameters and passes them through
//***************************************************************************************************

bool AMyProjectCharacter::Trace(
	UWorld* World,
	TArray<AActor*>& ActorsToIgnore,
	const FVector& Start,
	const FVector& End,
	FHitResult& HitOut,
	ECollisionChannel CollisionChannel = ECC_Pawn,
	bool ReturnPhysMat = false
) {

	// The World parameter refers to our game world (map/level) 
	// If there is no World, abort
	if (!World)
	{
		return false;
	}

	// Set up our TraceParams object
	FCollisionQueryParams TraceParams(FName(TEXT("My Trace")), true, ActorsToIgnore[0]);

	// Should we simple or complex collision?
	TraceParams.bTraceComplex = true;

	// We don't need Physics materials 
	TraceParams.bReturnPhysicalMaterial = ReturnPhysMat;

	// Add our ActorsToIgnore
	TraceParams.AddIgnoredActors(ActorsToIgnore);

	// When we're debugging it is really useful to see where our trace is in the world
	// We can use World->DebugDrawTraceTag to tell Unreal to draw debug lines for our trace
	// (remove these lines to remove the debug - or better create a debug switch!)
	const FName TraceTag("MyTraceTag");
	World->DebugDrawTraceTag = TraceTag;
	TraceParams.TraceTag = TraceTag;


	// Force clear the HitData which contains our results
	HitOut = FHitResult(ForceInit);

	// Perform our trace
	World->LineTraceSingleByChannel
	(
		HitOut,		//result
		Start,	//start
		End, //end
		CollisionChannel, //collision channel
		TraceParams
	);

	// If we hit an actor, return true
	return (HitOut.GetActor() != NULL);
}

//***************************************************************************************************
//** CallMyTrace() - sets up our parameters and then calls our Trace() function
//***************************************************************************************************

void AMyProjectCharacter::CallMyTrace()
{
	// Get the location of the camera (where we are looking from) and the direction we are looking in
	const FVector Start = GetActorLocation();
	//const FVector ForwardVector = GetActorRotation().Vector();

	// How for in front of our character do we want our trace to extend?
	// ForwardVector is a unit vector, so we multiply by the desired distance
	//const FVector End = Start + ForwardVector * 256;
	const FVector End = Start + GetActorForwardVector()*256;


	// Force clear the HitData which contains our results
	FHitResult HitData(ForceInit);

	// What Actors do we want our trace to Ignore?
	TArray<AActor*> ActorsToIgnore;

	//Ignore the player character - so you don't hit yourself!
	ActorsToIgnore.Add(this);

	// Call our Trace() function with the paramaters we have set up
	// If it Hits anything
	if (Trace(GetWorld(), ActorsToIgnore, Start, End, HitData, ECC_Visibility, false))
	{
		// Process our HitData
		if (HitData.GetActor())
		{

			//UE_LOG(LogClass, Warning, TEXT("This a testing statement. %s"), *HitData.GetActor()->GetName());
			ProcessTraceHit(HitData);

		}
		else
		{
			// The trace did not return an Actor
			// An error has occurred
			// Record a message in the error log
		}
	}
	else
	{
		// We did not hit an Actor
		ClearPickupInfo();

	}

}

//***************************************************************************************************
//** ProcessTraceHit() - process our Trace Hit result
//***************************************************************************************************

void AMyProjectCharacter::ProcessTraceHit(FHitResult& HitOut)
{

	// Cast the actor to APickup
	APickup* const TestPickup = Cast<APickup>(HitOut.GetActor());
	ABreakableWall* const targetWall = Cast <ABreakableWall>(HitOut.GetActor());
	//AMyPickupWall* const pickupWall= Cast <AMyPickupWall>(HitOut.GetActor());

	if (TestPickup)
	{
		// Keep a pointer to the Pickup
		CurrentPickup = TestPickup;

		//assign the pickup name for HUD use/other function.
		PickupName = TestPickup->GetPickupName();
		PickupDisplayText = TestPickup->GetPickupDisplayText();
		// Set a local variable of the PickupName for the HUD
		//UE_LOG(LogClass, Warning, TEXT("PickupName: %s"), *TestPickup->GetPickupName());
		if (Role == ROLE_Authority) {
			FString inText = "PickupName: " + TestPickup->GetPickupName();
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, inText );
		}

		// Set a local variable of the PickupDisplayText for the HUD
		//UE_LOG(LogClass, Warning, TEXT("PickupDisplayText: %s"), *TestPickup->GetPickupDisplayText());
		PickupFound = true;
	}
	else if (targetWall) {


		// Keep a pointer to the wall
		CurrentWall = targetWall;
		//display the name of the wall
		//PickupName = targetWall->GetName();
		PickupName = targetWall->GetName();
		PickupDisplayText = targetWall->GetText();
		// Set a local variable of the PickupName for the HUD
		//UE_LOG(LogClass, Warning, TEXT("PickupName: %s"), *TestPickup->GetPickupName());
		if (Role == ROLE_Authority) {
			FString inText = "PickupName: " + targetWall->GetName();
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, inText );
		}

		// Set a local variable of the PickupDisplayText for the HUD
		//UE_LOG(LogClass, Warning, TEXT("PickupDisplayText: %s"), *TestPickup->GetPickupDisplayText());
		PickupFound = true;


	}
	else
	{
		//UE_LOG(LogClass, Warning, TEXT("TestPickup is NOT a Pickup!"));
		ClearPickupInfo();
	}
}

void AMyProjectCharacter::ClearPickupInfo()
{
	PickupName = "";
	PickupDisplayText = "";
	CurrentWall = nullptr;
	CurrentPickup = nullptr;
	PickupFound = false;
}

void AMyProjectCharacter::AddHP(float inHP)
{
	pHP += inHP;
	if (pHP <= 0) {
		pIsDead = true;
		pHP = 0;
	}
}
