// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/tankPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetankPlayer() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AtankPlayer_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AtankPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AtankPlayer::StaticRegisterNativesAtankPlayer()
	{
	}
	UClass* Z_Construct_UClass_AtankPlayer_NoRegister()
	{
		return AtankPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AtankPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtankPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtankPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "tankPlayer.h" },
		{ "ModuleRelativePath", "tankPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtankPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtankPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AtankPlayer_Statics::ClassParams = {
		&AtankPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AtankPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AtankPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtankPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AtankPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AtankPlayer, 3711613357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AtankPlayer(Z_Construct_UClass_AtankPlayer, &AtankPlayer::StaticClass, TEXT("/Script/MyProject"), TEXT("AtankPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtankPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif