// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_BreakableWall_generated_h
#error "BreakableWall.generated.h already included, missing '#pragma once' in BreakableWall.h"
#endif
#define MYPROJECT_BreakableWall_generated_h

#define MyProjectA_Source_MyProject_BreakableWall_h_12_RPC_WRAPPERS \
	virtual void WallBreak_Implementation(); \
	virtual void UpdateWallRender_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_wText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_wText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_topHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_topHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_wHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_wHP(); \
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
	DECLARE_FUNCTION(execWallBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WallBreak_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWallRender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWallRender_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHit(); \
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
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
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


#define MyProjectA_Source_MyProject_BreakableWall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WallBreak_Implementation(); \
	virtual void UpdateWallRender_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_wText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_wText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_topHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_topHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_wHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_wHP(); \
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
	DECLARE_FUNCTION(execWallBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WallBreak_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWallRender) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateWallRender_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonHit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHit(); \
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
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetName(); \
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


#define MyProjectA_Source_MyProject_BreakableWall_h_12_EVENT_PARMS
#define MyProjectA_Source_MyProject_BreakableWall_h_12_CALLBACK_WRAPPERS
#define MyProjectA_Source_MyProject_BreakableWall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableWall(); \
	friend struct Z_Construct_UClass_ABreakableWall_Statics; \
public: \
	DECLARE_CLASS(ABreakableWall, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABreakableWall)


#define MyProjectA_Source_MyProject_BreakableWall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABreakableWall(); \
	friend struct Z_Construct_UClass_ABreakableWall_Statics; \
public: \
	DECLARE_CLASS(ABreakableWall, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABreakableWall)


#define MyProjectA_Source_MyProject_BreakableWall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABreakableWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABreakableWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableWall(ABreakableWall&&); \
	NO_API ABreakableWall(const ABreakableWall&); \
public:


#define MyProjectA_Source_MyProject_BreakableWall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableWall(ABreakableWall&&); \
	NO_API ABreakableWall(const ABreakableWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableWall)


#define MyProjectA_Source_MyProject_BreakableWall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__wHP() { return STRUCT_OFFSET(ABreakableWall, wHP); } \
	FORCEINLINE static uint32 __PPO__topHP() { return STRUCT_OFFSET(ABreakableWall, topHP); } \
	FORCEINLINE static uint32 __PPO__wName() { return STRUCT_OFFSET(ABreakableWall, wName); } \
	FORCEINLINE static uint32 __PPO__wText() { return STRUCT_OFFSET(ABreakableWall, wText); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(ABreakableWall, bIsActive); }


#define MyProjectA_Source_MyProject_BreakableWall_h_9_PROLOG \
	MyProjectA_Source_MyProject_BreakableWall_h_12_EVENT_PARMS


#define MyProjectA_Source_MyProject_BreakableWall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_BreakableWall_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_BreakableWall_h_12_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_CALLBACK_WRAPPERS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_INCLASS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_BreakableWall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_BreakableWall_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_BreakableWall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_CALLBACK_WRAPPERS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_BreakableWall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_BreakableWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
