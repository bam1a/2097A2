// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Components/ArrowComponent.h"
#include "Pickup.generated.h"

UCLASS()
class MYPROJECT_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	//	class UStaticMeshComponent* pickupBaseMesh;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	//	class UArrowComponent* pickupArrow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//properties
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "basic property")
		FString pickupName = "default pickup";
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "basic property",ReplicatedUsing = OnRep_pickupDisplayText)
		FString pickupDisplayText = "default pickup display text";
	UPROPERTY(ReplicatedUsing = OnRep_HitCount, BlueprintReadWrite, EditAnywhere, Category = "basic property")
		float HitCount;
	UPROPERTY(ReplicatedUsing = OnRep_HitCountA, BlueprintReadWrite, EditAnywhere, Category = "basic property")
		float HitCountA;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "basic property")
		FString name;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//acessor for pickup name and display text
	FString GetPickupName();
	FString GetPickupDisplayText();

	//networking stuff
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool isActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool inState);

	UFUNCTION(BlueprintPure)
		float getHitCount() { return HitCount; }
	UFUNCTION(BlueprintCallable)
		void addHitCount() {
		if (Role == ROLE_Authority) { 
			HitCountA++;
			pickupDisplayText =FString::SanitizeFloat(HitCountA);
		}
		else {
		}
	}



protected:
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
		bool bIsActive;
	UFUNCTION()
		virtual void OnRep_IsActive();
	UFUNCTION()
		virtual void OnRep_HitCount();
	UFUNCTION()
		virtual void OnRep_HitCountA();
	UFUNCTION()
		virtual void OnRep_pickupDisplayText();

	UFUNCTION(BlueprintCallable)
		bool checkIsPlayerHit();
};
