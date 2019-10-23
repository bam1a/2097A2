// Fill out your copyright notice in the Description page of Project Settings.
#include "myActorMesh.h"
#include "MyProject.h"
#include "Net/UnrealNetwork.h"

AmyActorMesh::AmyActorMesh() 
{
	bReplicates = true;
	PrimaryActorTick.bCanEverTick = true;


	//moveable and physics enabled
	bReplicateMovement = true;
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}

void AmyActorMesh::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AmyActorMesh, bIsActive);
}

bool AmyActorMesh::isActive()
{
	return bIsActive;
}

void AmyActorMesh::setActive(bool inState)
{
	if (Role == ROLE_Authority) {
		bIsActive = inState;
	}

}

void AmyActorMesh::OnRep_IsActive()
{
	//bla bla bla code
}
