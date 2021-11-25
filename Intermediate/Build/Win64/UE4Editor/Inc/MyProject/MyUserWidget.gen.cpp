// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyUserWidget::execUpdateWaveNumInWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newWaveNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWaveNumInWidget(Z_Param_newWaveNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyUserWidget::execUpdateScoreInWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScoreInWidget(Z_Param_newScore);
		P_NATIVE_END;
	}
	void UMyUserWidget::StaticRegisterNativesUMyUserWidget()
	{
		UClass* Class = UMyUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateScoreInWidget", &UMyUserWidget::execUpdateScoreInWidget },
			{ "UpdateWaveNumInWidget", &UMyUserWidget::execUpdateWaveNumInWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics
	{
		struct MyUserWidget_eventUpdateScoreInWidget_Parms
		{
			int32 newScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::NewProp_newScore = { "newScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyUserWidget_eventUpdateScoreInWidget_Parms, newScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::NewProp_newScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "UpdateScoreInWidget", nullptr, nullptr, sizeof(MyUserWidget_eventUpdateScoreInWidget_Parms), Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics
	{
		struct MyUserWidget_eventUpdateWaveNumInWidget_Parms
		{
			int32 newWaveNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newWaveNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::NewProp_newWaveNum = { "newWaveNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyUserWidget_eventUpdateWaveNumInWidget_Parms, newWaveNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::NewProp_newWaveNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget, nullptr, "UpdateWaveNumInWidget", nullptr, nullptr, sizeof(MyUserWidget_eventUpdateWaveNumInWidget_Parms), Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyUserWidget_NoRegister()
	{
		return UMyUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaveBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget_UpdateScoreInWidget, "UpdateScoreInWidget" }, // 985234906
		{ &Z_Construct_UFunction_UMyUserWidget_UpdateWaveNumInWidget, "UpdateWaveNumInWidget" }, // 508595828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyUserWidget.h" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ScoreBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ScoreBlock = { "ScoreBlock", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, ScoreBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ScoreBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ScoreBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyUserWidget_Statics::NewProp_WaveBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget_Statics::NewProp_WaveBlock = { "WaveBlock", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyUserWidget, WaveBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_WaveBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::NewProp_WaveBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_ScoreBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget_Statics::NewProp_WaveBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget_Statics::ClassParams = {
		&UMyUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyUserWidget, 1158973005);
	template<> MYPROJECT_API UClass* StaticClass<UMyUserWidget>()
	{
		return UMyUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyUserWidget(Z_Construct_UClass_UMyUserWidget, &UMyUserWidget::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
