// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectGameMode_generated_h
#error "MyProjectGameMode.generated.h already included, missing '#pragma once' in MyProjectGameMode.h"
#endif
#define MYPROJECT_MyProjectGameMode_generated_h

#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_RPC_WRAPPERS \
	virtual void HasWinner_Implementation(); \
	virtual void AllLoser_Implementation(); \
 \
	DECLARE_FUNCTION(execHasWinner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasWinner_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllLoser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllLoser_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWinner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetWinner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWinner) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWinner(Z_Param_inName); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HasWinner_Implementation(); \
	virtual void AllLoser_Implementation(); \
 \
	DECLARE_FUNCTION(execHasWinner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HasWinner_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllLoser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllLoser_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWinner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetWinner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWinner) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWinner(Z_Param_inName); \
		P_NATIVE_END; \
	}


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_EVENT_PARMS
#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_CALLBACK_WRAPPERS
#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend struct Z_Construct_UClass_AMyProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode)


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend struct Z_Construct_UClass_AMyProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode)


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API AMyProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(AMyProjectGameMode&&); \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode&); \
public:


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(AMyProjectGameMode&&); \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectGameMode)


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProjectA_Source_MyProject_MyProjectGameMode_h_9_PROLOG \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_EVENT_PARMS


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_CALLBACK_WRAPPERS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_INCLASS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_MyProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_CALLBACK_WRAPPERS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_MyProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_MyProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
