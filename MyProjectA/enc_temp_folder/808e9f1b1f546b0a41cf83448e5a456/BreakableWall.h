// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "BreakableWall.generated.h"

UCLASS()
class MYPROJECT_API ABreakableWall : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//networking stuff
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool isActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool inState);

	//mutator and assessors
	UFUNCTION(BlueprintPure)
	FString GetName() { return wName; };

	UFUNCTION(BlueprintPure)
	FString GetText() { return wText; };

	UFUNCTION(BlueprintPure)
		float GetHP() { return wHP; }

	UFUNCTION(BlueprintCallable)
		void onHit();

	UFUNCTION(BlueprintImplementableEvent)
		void onHitBP();

	UFUNCTION(BlueprintCallable, NetMulticast, reliable)
		void UpdateWallRender();

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateWallRenderBP();

	UFUNCTION(BlueprintCallable, NetMulticast, reliable)
		void WallBreak();

	UFUNCTION(BlueprintImplementableEvent)
		void WallBreakBP();

	UFUNCTION(BlueprintCallable)
		void addHitCount() {
		if (Role == ROLE_Authority) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "server");
			wHP++;
			wName = FString::SanitizeFloat(wHP);
			//UpdateWallRender();
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "client");
		}
	}


protected:
	UPROPERTY(EditAnyWhere,Category="Parameters", ReplicatedUsing = OnRep_wHP, BlueprintReadWrite)
		float wHP = 100.f;
	UPROPERTY(EditAnyWhere, Category = "Parameters", ReplicatedUsing = OnRep_topHP, BlueprintReadWrite)
		float topHP = 0.f;

	UPROPERTY(EditAnyWhere, Category = "Parameters", BlueprintReadWrite)
	FString wName = "wall";
	UPROPERTY(EditAnyWhere, Category = "Parameters", ReplicatedUsing = OnRep_wText, BlueprintReadWrite)
	FString wText = "press space to break";

	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	UFUNCTION()
		virtual void OnRep_IsActive();
	UFUNCTION()
		virtual void OnRep_wHP();
	UFUNCTION()
		virtual void OnRep_topHP();
	UFUNCTION()
		virtual void OnRep_wText();
	//multicast=>func.
	//doRep RPC=> var.
};
