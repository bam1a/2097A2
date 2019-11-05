// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_APickup_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_addHitCount();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_checkIsPlayerHit();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_getHitCount();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_isActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_OnRep_HitCount();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_OnRep_HitCountA();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_OnRep_pickupDisplayText();
	MYPROJECT_API UFunction* Z_Construct_UFunction_APickup_setActive();
// End Cross Module References
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addHitCount", &APickup::execaddHitCount },
			{ "checkIsPlayerHit", &APickup::execcheckIsPlayerHit },
			{ "getHitCount", &APickup::execgetHitCount },
			{ "isActive", &APickup::execisActive },
			{ "OnRep_HitCount", &APickup::execOnRep_HitCount },
			{ "OnRep_HitCountA", &APickup::execOnRep_HitCountA },
			{ "OnRep_IsActive", &APickup::execOnRep_IsActive },
			{ "OnRep_pickupDisplayText", &APickup::execOnRep_pickupDisplayText },
			{ "setActive", &APickup::execsetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_addHitCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_addHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_addHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "addHitCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_addHitCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_addHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_addHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_addHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics
	{
		struct Pickup_eventcheckIsPlayerHit_Parms
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
	void Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pickup_eventcheckIsPlayerHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pickup_eventcheckIsPlayerHit_Parms), &Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "checkIsPlayerHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Pickup_eventcheckIsPlayerHit_Parms), Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_checkIsPlayerHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_checkIsPlayerHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_getHitCount_Statics
	{
		struct Pickup_eventgetHitCount_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickup_getHitCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pickup_eventgetHitCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_getHitCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_getHitCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_getHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_getHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "getHitCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Pickup_eventgetHitCount_Parms), Z_Construct_UFunction_APickup_getHitCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_getHitCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_getHitCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_getHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_getHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_getHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_isActive_Statics
	{
		struct Pickup_eventisActive_Parms
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
	void Z_Construct_UFunction_APickup_isActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pickup_eventisActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_isActive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pickup_eventisActive_Parms), &Z_Construct_UFunction_APickup_isActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_isActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_isActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_isActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_isActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "isActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Pickup_eventisActive_Parms), Z_Construct_UFunction_APickup_isActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_isActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_isActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_isActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_isActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_isActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnRep_HitCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnRep_HitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnRep_HitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "OnRep_HitCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnRep_HitCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_OnRep_HitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnRep_HitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnRep_HitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "OnRep_HitCountA", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnRep_HitCountA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnRep_HitCountA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "OnRep_pickupDisplayText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnRep_pickupDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnRep_pickupDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_setActive_Statics
	{
		struct Pickup_eventsetActive_Parms
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
	void Z_Construct_UFunction_APickup_setActive_Statics::NewProp_inState_SetBit(void* Obj)
	{
		((Pickup_eventsetActive_Parms*)Obj)->inState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_setActive_Statics::NewProp_inState = { UE4CodeGen_Private::EPropertyClass::Bool, "inState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pickup_eventsetActive_Parms), &Z_Construct_UFunction_APickup_setActive_Statics::NewProp_inState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_setActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_setActive_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_setActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_setActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, "setActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Pickup_eventsetActive_Parms), Z_Construct_UFunction_APickup_setActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APickup_setActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_setActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickup_setActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_setActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_setActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCountA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCountA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pickupDisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pickupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_addHitCount, "addHitCount" }, // 2991156564
		{ &Z_Construct_UFunction_APickup_checkIsPlayerHit, "checkIsPlayerHit" }, // 2411925270
		{ &Z_Construct_UFunction_APickup_getHitCount, "getHitCount" }, // 3175219966
		{ &Z_Construct_UFunction_APickup_isActive, "isActive" }, // 269850264
		{ &Z_Construct_UFunction_APickup_OnRep_HitCount, "OnRep_HitCount" }, // 3053454041
		{ &Z_Construct_UFunction_APickup_OnRep_HitCountA, "OnRep_HitCountA" }, // 2917935224
		{ &Z_Construct_UFunction_APickup_OnRep_IsActive, "OnRep_IsActive" }, // 1050222429
		{ &Z_Construct_UFunction_APickup_OnRep_pickupDisplayText, "OnRep_pickupDisplayText" }, // 3802865813
		{ &Z_Construct_UFunction_APickup_setActive, "setActive" }, // 612066414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((APickup*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_IsActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_name_MetaData[] = {
		{ "Category", "basic property" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APickup, name), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_HitCountA_MetaData[] = {
		{ "Category", "basic property" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_HitCountA = { UE4CodeGen_Private::EPropertyClass::Float, "HitCountA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_HitCountA", STRUCT_OFFSET(APickup, HitCountA), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_HitCountA_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_HitCountA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_HitCount_MetaData[] = {
		{ "Category", "basic property" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_HitCount = { UE4CodeGen_Private::EPropertyClass::Float, "HitCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_HitCount", STRUCT_OFFSET(APickup, HitCount), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_HitCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_HitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_pickupDisplayText_MetaData[] = {
		{ "Category", "basic property" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_pickupDisplayText = { UE4CodeGen_Private::EPropertyClass::Str, "pickupDisplayText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_pickupDisplayText", STRUCT_OFFSET(APickup, pickupDisplayText), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_pickupDisplayText_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_pickupDisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_pickupName_MetaData[] = {
		{ "Category", "basic property" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "properties" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_pickupName = { UE4CodeGen_Private::EPropertyClass::Str, "pickupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APickup, pickupName), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_pickupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_pickupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_HitCountA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_HitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_pickupDisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_pickupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 1841856936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/MyProject"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
