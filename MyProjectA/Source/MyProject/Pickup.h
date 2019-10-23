// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Pickup.generated.h"

UCLASS()
class MYPROJECT_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString pickupName = "default pickup";
	FString pickupDisplayText = "default pickup display text";

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString GetPickupName();
	FString GetPickupDisplayText();

	//networking stuff
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool isActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool inState);

protected:
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
		bool bIsActive;

	UFUNCTION()
		virtual void OnRep_IsActive();


};
