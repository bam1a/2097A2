// Fill out your copyright notice in the Description page of Project Settings.

#include "BreakableWall.h"
#include "MyProject.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ABreakableWall::ABreakableWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	//moveable and physics enabled
	bReplicateMovement = true;//replicate the movement

}

// Called when the game starts or when spawned
void ABreakableWall::BeginPlay()
{
	Super::BeginPlay();
	topHP = 100.f;
	
}

// Called every frame
void ABreakableWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABreakableWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(ABreakableWall, COND_SimulatedOnly);
	DOREPLIFETIME(ABreakableWall, bIsActive);
	DOREPLIFETIME(ABreakableWall, wHP);
	DOREPLIFETIME(ABreakableWall, topHP);
	DOREPLIFETIME(ABreakableWall, wText);


}

bool ABreakableWall::isActive()
{
	return bIsActive;
}

void ABreakableWall::setActive(bool inState)
{
	if (Role == ROLE_Authority) {
		bIsActive = inState;
	}
}

void ABreakableWall::UpdateWallRender_Implementation()
{
	UpdateWallRenderBP();
}

void ABreakableWall::WallBreak_Implementation()
{
	WallBreakBP();
}

void ABreakableWall::onHit()
{
	onHitBP();
}



void ABreakableWall::OnRep_IsActive()
{
	//bla bla bla code

}
void ABreakableWall::OnRep_wHP()
{
}

void ABreakableWall::OnRep_topHP()
{
}

void ABreakableWall::OnRep_wText()
{
}


