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
	//timer action
	gHP -= DeltaSeconds;
	//if winner name is obtained, stop the game and tell that guy is win
	if (gWinnerName != "") {
		HasWinner();
	}
	//otherwise, if there no time left, tell both player that they're all lost
	else if (gHP <= 0.f) {
		AllLoser();
	}
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
