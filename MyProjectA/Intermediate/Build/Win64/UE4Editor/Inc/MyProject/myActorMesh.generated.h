// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_myActorMesh_generated_h
#error "myActorMesh.generated.h already included, missing '#pragma once' in myActorMesh.h"
#endif
#define MYPROJECT_myActorMesh_generated_h

#define MyProjectA_Source_MyProject_myActorMesh_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
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


#define MyProjectA_Source_MyProject_myActorMesh_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
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


#define MyProjectA_Source_MyProject_myActorMesh_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmyActorMesh(); \
	friend struct Z_Construct_UClass_AmyActorMesh_Statics; \
public: \
	DECLARE_CLASS(AmyActorMesh, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyActorMesh)


#define MyProjectA_Source_MyProject_myActorMesh_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAmyActorMesh(); \
	friend struct Z_Construct_UClass_AmyActorMesh_Statics; \
public: \
	DECLARE_CLASS(AmyActorMesh, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AmyActorMesh)


#define MyProjectA_Source_MyProject_myActorMesh_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmyActorMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmyActorMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyActorMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyActorMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyActorMesh(AmyActorMesh&&); \
	NO_API AmyActorMesh(const AmyActorMesh&); \
public:


#define MyProjectA_Source_MyProject_myActorMesh_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmyActorMesh(AmyActorMesh&&); \
	NO_API AmyActorMesh(const AmyActorMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmyActorMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmyActorMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmyActorMesh)


#define MyProjectA_Source_MyProject_myActorMesh_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(AmyActorMesh, bIsActive); }


#define MyProjectA_Source_MyProject_myActorMesh_h_12_PROLOG
#define MyProjectA_Source_MyProject_myActorMesh_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_myActorMesh_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_myActorMesh_h_15_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_myActorMesh_h_15_INCLASS \
	MyProjectA_Source_MyProject_myActorMesh_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_myActorMesh_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_myActorMesh_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_myActorMesh_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_myActorMesh_h_15_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_myActorMesh_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_myActorMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
