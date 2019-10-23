// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_tankPlayer_generated_h
#error "tankPlayer.generated.h already included, missing '#pragma once' in tankPlayer.h"
#endif
#define MYPROJECT_tankPlayer_generated_h

#define MyProjectA_Source_MyProject_tankPlayer_h_13_RPC_WRAPPERS
#define MyProjectA_Source_MyProject_tankPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProjectA_Source_MyProject_tankPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtankPlayer(); \
	friend struct Z_Construct_UClass_AtankPlayer_Statics; \
public: \
	DECLARE_CLASS(AtankPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AtankPlayer)


#define MyProjectA_Source_MyProject_tankPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAtankPlayer(); \
	friend struct Z_Construct_UClass_AtankPlayer_Statics; \
public: \
	DECLARE_CLASS(AtankPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AtankPlayer)


#define MyProjectA_Source_MyProject_tankPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtankPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtankPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtankPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtankPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtankPlayer(AtankPlayer&&); \
	NO_API AtankPlayer(const AtankPlayer&); \
public:


#define MyProjectA_Source_MyProject_tankPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtankPlayer(AtankPlayer&&); \
	NO_API AtankPlayer(const AtankPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtankPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtankPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtankPlayer)


#define MyProjectA_Source_MyProject_tankPlayer_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProjectA_Source_MyProject_tankPlayer_h_10_PROLOG
#define MyProjectA_Source_MyProject_tankPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_tankPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_tankPlayer_h_13_RPC_WRAPPERS \
	MyProjectA_Source_MyProject_tankPlayer_h_13_INCLASS \
	MyProjectA_Source_MyProject_tankPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectA_Source_MyProject_tankPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectA_Source_MyProject_tankPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProjectA_Source_MyProject_tankPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_tankPlayer_h_13_INCLASS_NO_PURE_DECLS \
	MyProjectA_Source_MyProject_tankPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectA_Source_MyProject_tankPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
