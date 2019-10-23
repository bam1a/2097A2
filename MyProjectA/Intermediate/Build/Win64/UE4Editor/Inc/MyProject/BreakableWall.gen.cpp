// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BreakableWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableWall() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ABreakableWall_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABreakableWall();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ABreakableWall::StaticRegisterNativesABreakableWall()
	{
	}
	UClass* Z_Construct_UClass_ABreakableWall_NoRegister()
	{
		return ABreakableWall::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "BreakableWall.h" },
		{ "ModuleRelativePath", "BreakableWall.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableWall_Statics::ClassParams = {
		&ABreakableWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakableWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakableWall, 1748268416);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableWall(Z_Construct_UClass_ABreakableWall, &ABreakableWall::StaticClass, TEXT("/Script/MyProject"), TEXT("ABreakableWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
