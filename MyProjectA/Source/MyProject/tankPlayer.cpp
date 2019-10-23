// Fill out your copyright notice in the Description page of Project Settings.

#include "tankPlayer.h"

// Sets default values
AtankPlayer::AtankPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

// Called to bind functionality to input
void AtankPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

