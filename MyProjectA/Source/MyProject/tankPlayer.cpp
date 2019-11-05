// Fill out your copyright notice in the Description page of Project Settings.

#include "tankPlayer.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
//#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
AtankPlayer::AtankPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//receive input to do move actions
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisableComponent"));

	// Set size for collision capsule
	//GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//Connect components again
	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//VisableComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	VisableComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisableComponent"));
	//VisableComponent->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//Camera->SetupAttachment(CapsuleComponent);
	Camera->SetRelativeLocation(FVector(-0, 0.f, 1000.f));
	Camera->SetRelativeRotation(FRotator(-0.f, 0.f, 0.f));

	// Set size for collision capsule
	//GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
}

// Called when the game starts or when spawned
void AtankPlayer::BeginPlay()
{
	Super::BeginPlay();


	
}

// Called every frame
void AtankPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (!MovementInput.IsZero()) {

		// get forward vector
		MovementInput.Normalize();

		FVector NewLocation = GetActorLocation() + (MovementInput*speed*DeltaTime) ;
		SetActorLocation(NewLocation);

		AddMovementInput(MovementInput, speed,true);
		//RootComponent->add
		//AddActorLocalOffset(MovementInput, true);

	}
	if (turningInput != 0.f) {
		float newYaw = GetActorRotation().Yaw + (turningInput*DeltaTime);
		//AddActorLocalRotation(FRotator(0, turningInput*DeltaTime, 0));
		AddControllerYawInput(turningInput*DeltaTime);

		//SetActorRotation(FRotator(0, newYaw, 0));
	}
}

// Called to bind functionality to input
void AtankPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("TurnRight", this, &AtankPlayer::TurnRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AtankPlayer::MoveForward);

}

void AtankPlayer::MoveForward(float Value)
{
	MovementInput = GetActorForwardVector()*Value;
}
void AtankPlayer::TurnRight(float Value)
{
	turningInput = Value * 30.f;
}


