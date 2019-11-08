// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectGameMode() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_AllLoser();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_GetWinner();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_HasWinner();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectGameMode_SetWinner();
// End Cross Module References
	static FName NAME_AMyProjectGameMode_AllLoser = FName(TEXT("AllLoser"));
	void AMyProjectGameMode::AllLoser()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyProjectGameMode_AllLoser),NULL);
	}
	static FName NAME_AMyProjectGameMode_AllLoserBP = FName(TEXT("AllLoserBP"));
	void AMyProjectGameMode::AllLoserBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyProjectGameMode_AllLoserBP),NULL);
	}
	static FName NAME_AMyProjectGameMode_HasWinner = FName(TEXT("HasWinner"));
	void AMyProjectGameMode::HasWinner()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyProjectGameMode_HasWinner),NULL);
	}
	static FName NAME_AMyProjectGameMode_HasWinnerBP = FName(TEXT("HasWinnerBP"));
	void AMyProjectGameMode::HasWinnerBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyProjectGameMode_HasWinnerBP),NULL);
	}
	void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
	{
		UClass* Class = AMyProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllLoser", &AMyProjectGameMode::execAllLoser },
			{ "GetWinner", &AMyProjectGameMode::execGetWinner },
			{ "HasWinner", &AMyProjectGameMode::execHasWinner },
			{ "SetWinner", &AMyProjectGameMode::execSetWinner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "AllLoser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_AllLoser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_AllLoser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "AllLoserBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics
	{
		struct MyProjectGameMode_eventGetWinner_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProjectGameMode_eventGetWinner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "GetWinner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(MyProjectGameMode_eventGetWinner_Parms), Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_GetWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_GetWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "HasWinner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_HasWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_HasWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "HasWinnerBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics
	{
		struct MyProjectGameMode_eventSetWinner_Parms
		{
			FString inName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::NewProp_inName = { UE4CodeGen_Private::EPropertyClass::Str, "inName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProjectGameMode_eventSetWinner_Parms, inName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::NewProp_inName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, "SetWinner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProjectGameMode_eventSetWinner_Parms), Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_SetWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_SetWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister()
	{
		return AMyProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIDArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerIDArr;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerIDArr_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProjectGameMode_AllLoser, "AllLoser" }, // 3751734982
		{ &Z_Construct_UFunction_AMyProjectGameMode_AllLoserBP, "AllLoserBP" }, // 942760015
		{ &Z_Construct_UFunction_AMyProjectGameMode_GetWinner, "GetWinner" }, // 1405243400
		{ &Z_Construct_UFunction_AMyProjectGameMode_HasWinner, "HasWinner" }, // 1221432476
		{ &Z_Construct_UFunction_AMyProjectGameMode_HasWinnerBP, "HasWinnerBP" }, // 2307333798
		{ &Z_Construct_UFunction_AMyProjectGameMode_SetWinner, "SetWinner" }, // 234593628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectGameMode.h" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_maxHP_MetaData[] = {
		{ "Category", "MyProjectGameMode" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_maxHP = { UE4CodeGen_Private::EPropertyClass::Float, "maxHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AMyProjectGameMode, maxHP), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_maxHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_maxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_gHP_MetaData[] = {
		{ "Category", "MyProjectGameMode" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "gHP health for both player could last in the game(like a timer)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_gHP = { UE4CodeGen_Private::EPropertyClass::Float, "gHP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyProjectGameMode, gHP), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_gHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_gHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr_MetaData[] = {
		{ "Category", "MyProjectGameMode" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "player id s(unused due to time limit, otherwise might implement the 2 bar HPs)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerIDArr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyProjectGameMode, PlayerIDArr), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIDArr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_maxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_gHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_PlayerIDArr_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectGameMode_Statics::ClassParams = {
		&AMyProjectGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectGameMode, 2309300180);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameMode(Z_Construct_UClass_AMyProjectGameMode, &AMyProjectGameMode::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
