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

	//only things to concern is the time, stamina and joy
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addSpeed = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addPower = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addHP = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addStamina = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		float addJoy = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "parameters")
		bool isEndGame = false;

	UFUNCTION(BlueprintImplementableEvent)
	void emitExplosionBP();

};
