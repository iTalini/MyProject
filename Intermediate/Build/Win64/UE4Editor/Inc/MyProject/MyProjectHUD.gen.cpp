// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectHUD() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectHUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyProjectHUD::execUpdateWaveNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_waveNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWaveNum(Z_Param_waveNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectHUD::execUpdateScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScore(Z_Param_score);
		P_NATIVE_END;
	}
	void AMyProjectHUD::StaticRegisterNativesAMyProjectHUD()
	{
		UClass* Class = AMyProjectHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateScore", &AMyProjectHUD::execUpdateScore },
			{ "UpdateWaveNum", &AMyProjectHUD::execUpdateWaveNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics
	{
		struct MyProjectHUD_eventUpdateScore_Parms
		{
			int32 score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectHUD_eventUpdateScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::NewProp_score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//The function in which we pass new information to the Widget \n" },
		{ "ModuleRelativePath", "MyProjectHUD.h" },
		{ "ToolTip", "The function in which we pass new information to the Widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectHUD, nullptr, "UpdateScore", nullptr, nullptr, sizeof(MyProjectHUD_eventUpdateScore_Parms), Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectHUD_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectHUD_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics
	{
		struct MyProjectHUD_eventUpdateWaveNum_Parms
		{
			int32 waveNum;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_waveNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::NewProp_waveNum = { "waveNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectHUD_eventUpdateWaveNum_Parms, waveNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::NewProp_waveNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectHUD, nullptr, "UpdateWaveNum", nullptr, nullptr, sizeof(MyProjectHUD_eventUpdateWaveNum_Parms), Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectHUD_NoRegister()
	{
		return AMyProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTamplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetTamplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProjectHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProjectHUD_UpdateScore, "UpdateScore" }, // 1331176450
		{ &Z_Construct_UFunction_AMyProjectHUD_UpdateWaveNum, "UpdateWaveNum" }, // 2450789823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyProjectHUD.h" },
		{ "ModuleRelativePath", "MyProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetTamplate_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//The parameter we set in the blueprint, here should be a Widget class whose parent class is == UUserWidget. \n// And which we will use in the future to display information \n" },
		{ "ModuleRelativePath", "MyProjectHUD.h" },
		{ "ToolTip", "The parameter we set in the blueprint, here should be a Widget class whose parent class is == UUserWidget.\n And which we will use in the future to display information" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetTamplate = { "WidgetTamplate", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectHUD, WidgetTamplate), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetTamplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetTamplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetInstance_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//the widget we display \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectHUD.h" },
		{ "ToolTip", "the widget we display" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectHUD, WidgetInstance), Z_Construct_UClass_UMyUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetTamplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectHUD_Statics::NewProp_WidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectHUD_Statics::ClassParams = {
		&AMyProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyProjectHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectHUD, 3760586082);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectHUD>()
	{
		return AMyProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectHUD(Z_Construct_UClass_AMyProjectHUD, &AMyProjectHUD::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
