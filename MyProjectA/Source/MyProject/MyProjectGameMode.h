// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProjectGameMode.generated.h"

UCLASS(minimalapi)
class AMyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyProjectGameMode();

	virtual void Tick(float DeltaSeconds);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//player id s(unused due to time limit, otherwise might implement the 2 bar HPs)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> PlayerIDArr;
	//gHP health for both player could last in the game(like a timer)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gHP = 100.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float maxHP = 0.f;

	FString gWinnerName = "";

	UFUNCTION(BlueprintCallable)
		void timeDecrease();
	UPROPERTY(BlueprintReadWrite)
		bool isInGasRm=false;


	UFUNCTION(BlueprintCallable)
		void SetWinner(FString inName);
	UFUNCTION(BlueprintPure)
		FString GetWinner() { return gWinnerName; }

	UFUNCTION(BlueprintCallable, NetMulticast, reliable)
		void AllLoser();
	UFUNCTION(BlueprintImplementableEvent)
		void AllLoserBP();

	UFUNCTION(BlueprintCallable, NetMulticast, reliable)
		void HasWinner();
	UFUNCTION(BlueprintImplementableEvent)
		void HasWinnerBP();
};



