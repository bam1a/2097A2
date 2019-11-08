// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "MyPickupWall.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyPickupWall : public APickup
{
	GENERATED_BODY()

	AMyPickupWall();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, reliable)
		void BreakWall();

	UFUNCTION(BlueprintImplementableEvent)
		void BreakWallBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
