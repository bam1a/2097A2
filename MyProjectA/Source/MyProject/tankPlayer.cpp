// Fill out your copyright notice in the Description page of Project Settings.

#include "tankPlayer.h"
#include "DrawDebugHelpers.h"

// Sets default values
AtankPlayer::AtankPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//receive input to do move actions
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//Connect components again
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	VisableComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisableComponent"));
	VisableComponent->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->SetRelativeLocation(FVector(-0, 0.f, 1000.f));
	Camera->SetRelativeRotation(FRotator(-0.f, 180.f, 0.f));

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
		MovementInput.Normalize();
		FVector NewLocation = GetActorLocation() + (MovementInput*speed*DeltaTime);
		SetActorLocation(NewLocation);
	}

}

// Called to bind functionality to input
void AtankPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("turnRhs", this, &AtankPlayer::TurnRight);
	PlayerInputComponent->BindAxis("moveFwd", this, &AtankPlayer::MoveForward);

}

void AtankPlayer::MoveForward(float Value)
{
}

void AtankPlayer::MoveBack(float Value)
{
}

void AtankPlayer::TurnRight(float Value)
{
}

void AtankPlayer::TurnLeft(float Value)
{
}

