// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "MyProject.h"
#include "Net/UnrealNetwork.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	//moveable and physics enabled
	bReplicateMovement = true;
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString APickup::GetPickupName()
{
	return pickupName;
}

FString APickup::GetPickupDisplayText()
{
	return pickupDisplayText;
}


void APickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);
}

bool APickup::isActive()
{
	return bIsActive;
}

void APickup::setActive(bool inState)
{
	if (Role == ROLE_Authority) {
		bIsActive = inState;
	}

}

void APickup::OnRep_IsActive()
{
	//bla bla bla code
}
