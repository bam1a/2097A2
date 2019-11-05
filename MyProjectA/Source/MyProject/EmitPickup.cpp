// Fill out your copyright notice in the Description page of Project Settings.

#include "EmitPickup.h"
#include "MyProject.h"
#include "Net/UnrealNetwork.h"

AEmitPickup::AEmitPickup() {
//	//Super::APickup();
	pickupName = "default emit pickup";
	pickupDisplayText = "default pickup display text";
}

void AEmitPickup::BeginPlay()
{
	Super::BeginPlay();
	//pickupName = "default emit pickup";
	//pickupDisplayText = "default pickup display text";
}

void AEmitPickup::EmitExplosion_Implementation()
{
	emitExplosionBP();
}





