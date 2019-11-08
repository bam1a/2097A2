// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProjectGameMode.h"
#include "MyProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProjectGameMode::AMyProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/mytankPlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Called when the game starts or when spawned
void AMyProjectGameMode::BeginPlay()
{
	Super::BeginPlay();
	maxHP = gHP;

}

void AMyProjectGameMode::Tick(float DeltaSeconds)
{
	if (isInGasRm) {
		timeDecrease();
	}
	//if winner name is obtained, stop the game and tell everyone that guy is win
	if (gWinnerName != "") {
		HasWinner();
	}
	//otherwise, if there no time left, tell both player that they're all lost
	else if (gHP <= 0.f) {
		AllLoser();
	}
	//if there's too much hp, block it back to max hp
	else if (gHP > 30.f) {
		gHP = maxHP;
	}
}

void AMyProjectGameMode::timeDecrease()
{
	//timer action
	//reduces the players health by 1% of its max hp every 5 seconds
	gHP -= (GetWorld()->DeltaTimeSeconds * (maxHP* (0.01f/5.f)));
}

void AMyProjectGameMode::SetWinner(FString inName)
{
	gWinnerName = inName;
}

void AMyProjectGameMode::AllLoser_Implementation()
{
	AllLoserBP();
}

void AMyProjectGameMode::HasWinner_Implementation()
{
	HasWinnerBP();
}
