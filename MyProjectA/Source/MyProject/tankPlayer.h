// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/ArrowComponent.h"
#include"Camera/CameraComponent.h"
#include "tankPlayer.generated.h"

UCLASS()
class MYPROJECT_API AtankPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AtankPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//component to be visible
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* VisableComponent;

	UPROPERTY(EditAnyWhere)
		UCameraComponent* Camera;
protected:
	float speed = 500.0f;
	float shootPower = 10.f;
	float HP = 100.f;
	FVector MovementInput;

	void MoveForward(float Value);
	void MoveBack(float Value);
	void TurnRight(float Value);
	void TurnLeft(float Value);

};
