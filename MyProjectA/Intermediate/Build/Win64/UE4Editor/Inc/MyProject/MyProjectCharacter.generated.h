// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyPickupWall;
class ABreakableWall;
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPickupWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyPickupWall**)Z_Param__Result=P_THIS->GetPickupWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABreakableWall**)Z_Param__Result=P_THIS->GetCurrentWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->getIsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHP) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHP(Z_Param_inHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHitPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHitPower(Z_Param_inHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHitPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSpeed(Z_Param_inSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execmyRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->myRole(); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPickupWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMyPickupWall**)Z_Param__Result=P_THIS->GetPickupWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ABreakableWall**)Z_Param__Result=P_THIS->GetCurrentWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->getIsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHP) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inHP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHP(Z_Param_inHP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddHitPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddHitPower(Z_Param_inHit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHitPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHitPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSpeed(Z_Param_inSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execmyRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->myRole(); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public:


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__pSpeed() { return STRUCT_OFFSET(AMyProjectCharacter, pSpeed); } \
	FORCEINLINE static uint32 __PPO__pHitPower() { return STRUCT_OFFSET(AMyProjectCharacter, pHitPower); } \
	FORCEINLINE static uint32 __PPO__pHP() { return STRUCT_OFFSET(AMyProjectCharacter, pHP); } \
	FORCEINLINE static uint32 __PPO__pRole() { return STRUCT_OFFSET(AMyProjectCharacter, pRole); }


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_12_PROLOG
#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_INCLASS \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_MyProjectCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_MyProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_MyProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
