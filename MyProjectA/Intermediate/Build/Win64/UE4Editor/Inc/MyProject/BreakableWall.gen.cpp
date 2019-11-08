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
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_addHitCount();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_GetHP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_GetName();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_GetText();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_isActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_onHit();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_onHitBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_IsActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_topHP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_wHP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_wText();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_setActive();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_UpdateWallRender();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_WallBreak();
	MYPROJECT_API UFunction* Z_Construct_UFunction_ABreakableWall_WallBreakBP();
// End Cross Module References
	static FName NAME_ABreakableWall_onHitBP = FName(TEXT("onHitBP"));
	void ABreakableWall::onHitBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABreakableWall_onHitBP),NULL);
	}
	static FName NAME_ABreakableWall_UpdateWallRender = FName(TEXT("UpdateWallRender"));
	void ABreakableWall::UpdateWallRender()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABreakableWall_UpdateWallRender),NULL);
	}
	static FName NAME_ABreakableWall_UpdateWallRenderBP = FName(TEXT("UpdateWallRenderBP"));
	void ABreakableWall::UpdateWallRenderBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABreakableWall_UpdateWallRenderBP),NULL);
	}
	static FName NAME_ABreakableWall_WallBreak = FName(TEXT("WallBreak"));
	void ABreakableWall::WallBreak()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABreakableWall_WallBreak),NULL);
	}
	static FName NAME_ABreakableWall_WallBreakBP = FName(TEXT("WallBreakBP"));
	void ABreakableWall::WallBreakBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABreakableWall_WallBreakBP),NULL);
	}
	void ABreakableWall::StaticRegisterNativesABreakableWall()
	{
		UClass* Class = ABreakableWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addHitCount", &ABreakableWall::execaddHitCount },
			{ "GetHP", &ABreakableWall::execGetHP },
			{ "GetName", &ABreakableWall::execGetName },
			{ "GetText", &ABreakableWall::execGetText },
			{ "isActive", &ABreakableWall::execisActive },
			{ "onHit", &ABreakableWall::execonHit },
			{ "OnRep_IsActive", &ABreakableWall::execOnRep_IsActive },
			{ "OnRep_topHP", &ABreakableWall::execOnRep_topHP },
			{ "OnRep_wHP", &ABreakableWall::execOnRep_wHP },
			{ "OnRep_wText", &ABreakableWall::execOnRep_wText },
			{ "setActive", &ABreakableWall::execsetActive },
			{ "UpdateWallRender", &ABreakableWall::execUpdateWallRender },
			{ "WallBreak", &ABreakableWall::execWallBreak },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABreakableWall_addHitCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_addHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_addHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "addHitCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_addHitCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_addHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_addHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_addHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_GetHP_Statics
	{
		struct BreakableWall_eventGetHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABreakableWall_GetHP_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BreakableWall_eventGetHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableWall_GetHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableWall_GetHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_GetHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_GetHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "GetHP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BreakableWall_eventGetHP_Parms), Z_Construct_UFunction_ABreakableWall_GetHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetHP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_GetHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_GetHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_GetHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_GetName_Statics
	{
		struct BreakableWall_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABreakableWall_GetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BreakableWall_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableWall_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableWall_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
		{ "ToolTip", "mutator and assessors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "GetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BreakableWall_eventGetName_Parms), Z_Construct_UFunction_ABreakableWall_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_GetText_Statics
	{
		struct BreakableWall_eventGetText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABreakableWall_GetText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BreakableWall_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableWall_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableWall_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_GetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BreakableWall_eventGetText_Parms), Z_Construct_UFunction_ABreakableWall_GetText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_GetText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_isActive_Statics
	{
		struct BreakableWall_eventisActive_Parms
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
	void Z_Construct_UFunction_ABreakableWall_isActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BreakableWall_eventisActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABreakableWall_isActive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BreakableWall_eventisActive_Parms), &Z_Construct_UFunction_ABreakableWall_isActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableWall_isActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableWall_isActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_isActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_isActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "isActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BreakableWall_eventisActive_Parms), Z_Construct_UFunction_ABreakableWall_isActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_isActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_isActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_isActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_isActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_isActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_onHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_onHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_onHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "onHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_onHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_onHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_onHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_onHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_onHitBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_onHitBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_onHitBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "onHitBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_onHitBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_onHitBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_onHitBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_onHitBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "OnRep_topHP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_topHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_OnRep_topHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "OnRep_wHP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_wHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_OnRep_wHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "OnRep_wText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_OnRep_wText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_OnRep_wText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_setActive_Statics
	{
		struct BreakableWall_eventsetActive_Parms
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
	void Z_Construct_UFunction_ABreakableWall_setActive_Statics::NewProp_inState_SetBit(void* Obj)
	{
		((BreakableWall_eventsetActive_Parms*)Obj)->inState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABreakableWall_setActive_Statics::NewProp_inState = { UE4CodeGen_Private::EPropertyClass::Bool, "inState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BreakableWall_eventsetActive_Parms), &Z_Construct_UFunction_ABreakableWall_setActive_Statics::NewProp_inState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableWall_setActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableWall_setActive_Statics::NewProp_inState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_setActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_setActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "setActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BreakableWall_eventsetActive_Parms), Z_Construct_UFunction_ABreakableWall_setActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_setActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_setActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_setActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_setActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_setActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "UpdateWallRender", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_UpdateWallRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_UpdateWallRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "UpdateWallRenderBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_WallBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_WallBreak_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_WallBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "WallBreak", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_WallBreak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_WallBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_WallBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_WallBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableWall, "WallBreakBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableWall_WallBreakBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableWall_WallBreakBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABreakableWall_NoRegister()
	{
		return ABreakableWall::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableWall_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_wText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_wName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_topHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABreakableWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABreakableWall_addHitCount, "addHitCount" }, // 2457664385
		{ &Z_Construct_UFunction_ABreakableWall_GetHP, "GetHP" }, // 118450162
		{ &Z_Construct_UFunction_ABreakableWall_GetName, "GetName" }, // 3442979011
		{ &Z_Construct_UFunction_ABreakableWall_GetText, "GetText" }, // 2613210442
		{ &Z_Construct_UFunction_ABreakableWall_isActive, "isActive" }, // 3124656815
		{ &Z_Construct_UFunction_ABreakableWall_onHit, "onHit" }, // 3006323160
		{ &Z_Construct_UFunction_ABreakableWall_onHitBP, "onHitBP" }, // 800662368
		{ &Z_Construct_UFunction_ABreakableWall_OnRep_IsActive, "OnRep_IsActive" }, // 1926351265
		{ &Z_Construct_UFunction_ABreakableWall_OnRep_topHP, "OnRep_topHP" }, // 2066182992
		{ &Z_Construct_UFunction_ABreakableWall_OnRep_wHP, "OnRep_wHP" }, // 2666262721
		{ &Z_Construct_UFunction_ABreakableWall_OnRep_wText, "OnRep_wText" }, // 2415350064
		{ &Z_Construct_UFunction_ABreakableWall_setActive, "setActive" }, // 2348119559
		{ &Z_Construct_UFunction_ABreakableWall_UpdateWallRender, "UpdateWallRender" }, // 1373700508
		{ &Z_Construct_UFunction_ABreakableWall_UpdateWallRenderBP, "UpdateWallRenderBP" }, // 3921674942
		{ &Z_Construct_UFunction_ABreakableWall_WallBreak, "WallBreak" }, // 326674323
		{ &Z_Construct_UFunction_ABreakableWall_WallBreakBP, "WallBreakBP" }, // 1906502638
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "BreakableWall.h" },
		{ "ModuleRelativePath", "BreakableWall.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	void Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ABreakableWall*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_IsActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABreakableWall), &Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::NewProp_wText_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABreakableWall_Statics::NewProp_wText = { UE4CodeGen_Private::EPropertyClass::Str, "wText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_wText", STRUCT_OFFSET(ABreakableWall, wText), METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wText_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::NewProp_wName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABreakableWall_Statics::NewProp_wName = { UE4CodeGen_Private::EPropertyClass::Str, "wName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABreakableWall, wName), METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::NewProp_topHP_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABreakableWall_Statics::NewProp_topHP = { UE4CodeGen_Private::EPropertyClass::Float, "topHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_topHP", STRUCT_OFFSET(ABreakableWall, topHP), METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::NewProp_topHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::NewProp_topHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableWall_Statics::NewProp_wHP_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "BreakableWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABreakableWall_Statics::NewProp_wHP = { UE4CodeGen_Private::EPropertyClass::Float, "wHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000025, 1, "OnRep_wHP", STRUCT_OFFSET(ABreakableWall, wHP), METADATA_PARAMS(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::NewProp_wHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableWall_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableWall_Statics::NewProp_wText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableWall_Statics::NewProp_wName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableWall_Statics::NewProp_topHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableWall_Statics::NewProp_wHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableWall_Statics::ClassParams = {
		&ABreakableWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ABreakableWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABreakableWall_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ABreakableWall, 47414391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableWall(Z_Construct_UClass_ABreakableWall, &ABreakableWall::StaticClass, TEXT("/Script/MyProject"), TEXT("ABreakableWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
