// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/mesh001.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemesh001() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_Amesh001_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_Amesh001();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void Amesh001::StaticRegisterNativesAmesh001()
	{
	}
	UClass* Z_Construct_UClass_Amesh001_NoRegister()
	{
		return Amesh001::StaticClass();
	}
	struct Z_Construct_UClass_Amesh001_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Amesh001_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Amesh001_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "mesh001.h" },
		{ "ModuleRelativePath", "mesh001.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Amesh001_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amesh001>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Amesh001_Statics::ClassParams = {
		&Amesh001::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_Amesh001_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Amesh001_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Amesh001()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Amesh001_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amesh001, 677999597);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amesh001(Z_Construct_UClass_Amesh001, &Amesh001::StaticClass, TEXT("/Script/MyProject"), TEXT("Amesh001"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amesh001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
