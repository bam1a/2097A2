// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BreakableWall.h"
#include "MyPickupWall.h"
#include "Pickup.h"
#include "MyProjectCharacter.generated.h"

UCLASS(config=Game)
class AMyProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	AMyProjectCharacter();

	//do when begin play
	void BeginPlay();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	virtual void Tick(float DeltaSeconds);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintPure)
	FString myRole();

	//***************************************************************************************************
	//** Trace functions - used to detect items we are looking at in the world
	//** Adapted from code found on the unreal wiki https://wiki.unrealengine.com/Trace_Functions
	//***************************************************************************************************

	bool Trace(
		UWorld* World,
		TArray<AActor*>& ActorsToIgnore,
		const FVector& Start,
		const FVector& End,
		FHitResult& HitOut,
		ECollisionChannel CollisionChannel,
		bool ReturnPhysMat
	);

	void CallMyTrace();

	void ProcessTraceHit(FHitResult& HitOut);

	void ClearPickupInfo();
	//functional variables
	ABreakableWall* CurrentWall = nullptr;
	APickup* CurrentPickup = nullptr;
	AMyPickupWall* CurrentPickupWall = nullptr;


	UPROPERTY(BlueprintReadOnly)
	FString PickupName;
	UPROPERTY(BlueprintReadOnly)
	FString PickupDisplayText;
	bool PickupFound;

	//accessor and mutator
	UFUNCTION(BlueprintPure)
		float GetSpeed() { return pSpeed; }
	UFUNCTION(BlueprintCallable)
		void AddSpeed(float inSpeed) { pSpeed += inSpeed; }
	UFUNCTION(BlueprintPure)
		float GetHitPower() { return pHitPower; }
	UFUNCTION(BlueprintCallable)
		void AddHitPower(float inHit) { pHitPower += inHit; }
	UFUNCTION(BlueprintPure)
		float GetHP() { return pHP; }
	UFUNCTION(BlueprintCallable)
		void AddHP(float inHP);
	UFUNCTION(BlueprintPure)
		bool getIsDead(){ return pIsDead; }
	UFUNCTION(BlueprintPure)
		ABreakableWall* GetCurrentWall() { return CurrentWall; }
	UFUNCTION(BlueprintPure)
		AMyPickupWall* GetPickupWall() { return CurrentPickupWall; }

	//parameters
	//speed:move speed
	//hit power: power for hitting the wall
	//HP: health of the player(decrease by time)
protected:
	bool pIsDead = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parameters")
	float pSpeed = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parameters")
	float pHitPower = 10.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parameters")
	float pHP = 100.f;

	FString role="client";
};

