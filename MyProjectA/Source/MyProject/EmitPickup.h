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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addSpeed = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addPower = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addTime = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		bool isEndGame = false;

	UFUNCTION(BlueprintImplementableEvent)
	void emitExplosionBP();

};
