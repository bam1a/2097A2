// Fill out your copyright notice in the Description page of Project Settings.

#include "myTankCharacter.h"

// Sets default values
AmyTankCharacter::AmyTankCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AmyTankCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmyTankCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AmyTankCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

