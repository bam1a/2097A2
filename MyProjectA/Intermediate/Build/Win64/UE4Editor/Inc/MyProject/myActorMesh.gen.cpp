// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/myActorMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyActorMesh() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AmyActorMesh_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AmyActorMesh();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyActorMesh_isActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AmyActorMesh_setActive();
// End Cross Module References
	void AmyActorMesh::StaticRegisterNativesAmyActorMesh()
	{
		UClass* Class = AmyActorMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isActive", &AmyActorMesh::execisActive },
			{ "OnRep_IsActive", &AmyActorMesh::execOnRep_IsActive },
			{ "setActive", &AmyActorMesh::execsetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AmyActorMesh_isActive_Statics
	{
		struct myActorMesh_eventisActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AmyActorMesh_isActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((myActorMesh_eventisActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AmyActorMesh_isActive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(myActorMesh_eventisActive_Parms), &Z_Construct_UFunction_AmyActorMesh_isActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmyActorMesh_isActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmyActorMesh_isActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyActorMesh_isActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myActorMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyActorMesh_isActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyActorMesh, "isActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(myActorMesh_eventisActive_Parms), Z_Construct_UFunction_AmyActorMesh_isActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AmyActorMesh_isActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyActorMesh_isActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AmyActorMesh_isActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyActorMesh_isActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyActorMesh_isActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myActorMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyActorMesh, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AmyActorMesh_setActive_Statics
	{
		struct myActorMesh_eventsetActive_Parms
		{
			bool inState;
		};
		static void NewProp_inState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AmyActorMesh_setActive_Statics::NewProp_inState_SetBit(void* Obj)
	{
		((myActorMesh_eventsetActive_Parms*)Obj)->inState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AmyActorMesh_setActive_Statics::NewProp_inState = { UE4CodeGen_Private::EPropertyClass::Bool, "inState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(myActorMesh_eventsetActive_Parms), &Z_Construct_UFunction_AmyActorMesh_setActive_Statics::NewProp_inState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmyActorMesh_setActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmyActorMesh_setActive_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AmyActorMesh_setActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "myActorMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AmyActorMesh_setActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmyActorMesh, "setActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(myActorMesh_eventsetActive_Parms), Z_Construct_UFunction_AmyActorMesh_setActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AmyActorMesh_setActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AmyActorMesh_setActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AmyActorMesh_setActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AmyActorMesh_setActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AmyActorMesh_setActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AmyActorMesh_NoRegister()
	{
		return AmyActorMesh::StaticClass();
	}
	struct Z_Construct_UClass_AmyActorMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmyActorMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AmyActorMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AmyActorMesh_isActive, "isActive" }, // 1428542466
		{ &Z_Construct_UFunction_AmyActorMesh_OnRep_IsActive, "OnRep_IsActive" }, // 3972750567
		{ &Z_Construct_UFunction_AmyActorMesh_setActive, "setActive" }, // 870011770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyActorMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "myActorMesh.h" },
		{ "ModuleRelativePath", "myActorMesh.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "myActorMesh.h" },
	};
#endif
	void Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((AmyActorMesh*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_IsActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AmyActorMesh), &Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmyActorMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmyActorMesh_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmyActorMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyActorMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmyActorMesh_Statics::ClassParams = {
		&AmyActorMesh::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AmyActorMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AmyActorMesh_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AmyActorMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AmyActorMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmyActorMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmyActorMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmyActorMesh, 238566882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmyActorMesh(Z_Construct_UClass_AmyActorMesh, &AmyActorMesh::StaticClass, TEXT("/Script/MyProject"), TEXT("AmyActorMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmyActorMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
