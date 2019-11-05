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

	DOREPLIFETIME(ABreakableWall, COND_SimulatedOnly);
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


void ABreakableWall::BeingHit_Implementation(float inAtk)
{
	//if server, call execute it directly and make changes both server and client
	//otherwise call a server RPC function to execute this function(client->server->multicast to other)
	if (Role == ROLE_Authority) { 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "server");
		wHP -= inAtk;

		UpdateWallRender();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "client");
		BeingHitClient(inAtk);
	}
}


bool  ABreakableWall::BeingHitClient_Validate(float inAtk) {
	//this action must be executed 
	return true;
}
void ABreakableWall::BeingHitClient_Implementation(float inAtk)
{
	//dunno why it can't be executed by client, even it's validated or in BP, and the debug msg can't executed, it that the ownership issue?
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "client to server broadcast to client");
	//call server to execute the being hit function.
	BeingHit(inAtk);
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


