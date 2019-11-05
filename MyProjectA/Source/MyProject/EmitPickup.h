// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "EmitPickup.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AEmitPickup : public APickup
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AEmitPickup();

	UFUNCTION(BlueprintCallable,NetMulticast,reliable)
		void EmitExplosion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintImplementableEvent)
	void emitExplosionBP();

};
