// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPickupWall.h"

AMyPickupWall::AMyPickupWall() {
	pickupName = "default wall";
	pickupDisplayText = "default pickup display text";
}

void AMyPickupWall::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPickupWall::BreakWall_Implementation()
{
	BreakWallBP();
}


