// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "myActorMesh.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AmyActorMesh : public AStaticMeshActor
{
	GENERATED_BODY()
 public:
	AmyActorMesh();

	//networking stuff
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool isActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool inState);

protected:
	UPROPERTY(ReplicatedUsing=OnRep_IsActive)
	bool bIsActive;

	UFUNCTION()
	virtual void OnRep_IsActive();
};
