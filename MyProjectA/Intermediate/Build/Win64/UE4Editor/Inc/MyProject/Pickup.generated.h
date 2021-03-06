// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define MYPROJECT_Pickup_generated_h

#define MyProjectA_Source_MyProject_Pickup_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcheckIsPlayerHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkIsPlayerHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_pickupDisplayText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_pickupDisplayText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitCountA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitCountA(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddHitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addHitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getHitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_inState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_inState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isActive(); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcheckIsPlayerHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkIsPlayerHit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_pickupDisplayText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_pickupDisplayText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitCountA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitCountA(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddHitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addHitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetHitCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getHitCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_inState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_inState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isActive(); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_Pickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define MyProjectA_Source_MyProject_Pickup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define MyProjectA_Source_MyProject_Pickup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define MyProjectA_Source_MyProject_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define MyProjectA_Source_MyProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pickupName() { return STRUCT_OFFSET(APickup, pickupName); } \
	FORCEINLINE static uint32 __PPO__pickupDisplayText() { return STRUCT_OFFSET(APickup, pickupDisplayText); } \
	FORCEINLINE static uint32 __PPO__HitCount() { return STRUCT_OFFSET(APickup, HitCount); } \
	FORCEINLINE static uint32 __PPO__HitCountA() { return STRUCT_OFFSET(APickup, HitCountA); } \
	FORCEINLINE static uint32 __PPO__name() { return STRUCT_OFFSET(APickup, name); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(APickup, bIsActive); }


#define MyProjectA_Source_MyProject_Pickup_h_10_PROLOG
#define MyProjectA_Source_MyProject_Pickup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_Pickup_h_13_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_Pickup_h_13_INCLASS \
	MyProjectA_Source_MyProject_Pickup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_Pickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_Pickup_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_Pickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_Pickup_h_13_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_Pickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
