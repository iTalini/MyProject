// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/GameSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSphere() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AGameSphere_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AGameSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameSphere::execOnComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameSphere::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void AGameSphere::StaticRegisterNativesAGameSphere()
	{
		UClass* Class = AGameSphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AGameSphere::execBeginPlay },
			{ "OnComponentHit", &AGameSphere::execOnComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameSphere_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameSphere_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "ModuleRelativePath", "GameSphere.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameSphere_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameSphere, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameSphere_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameSphere_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameSphere_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics
	{
		struct GameSphere_eventOnComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSphere_eventOnComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSphere_eventOnComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSphere_eventOnComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSphere_eventOnComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSphere_eventOnComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function to be called when colliding with objects \n" },
		{ "ModuleRelativePath", "GameSphere.h" },
		{ "ToolTip", "function to be called when colliding with objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameSphere, nullptr, "OnComponentHit", nullptr, nullptr, sizeof(GameSphere_eventOnComponentHit_Parms), Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameSphere_OnComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameSphere_OnComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameSphere_NoRegister()
	{
		return AGameSphere::StaticClass();
	}
	struct Z_Construct_UClass_AGameSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDestoyed_MetaData[];
#endif
		static void NewProp_isDestoyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDestoyed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameSphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameSphere_BeginPlay, "BeginPlay" }, // 4166974984
		{ &Z_Construct_UFunction_AGameSphere_OnComponentHit, "OnComponentHit" }, // 3035159561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSphere.h" },
		{ "ModuleRelativePath", "GameSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSphere_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//decaying part of an object \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameSphere.h" },
		{ "ToolTip", "decaying part of an object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameSphere_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameSphere, Body), Z_Construct_UClass_UDestructibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameSphere_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSphere_Statics::NewProp_StatMaterial_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "GameSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameSphere_Statics::NewProp_StatMaterial = { "StatMaterial", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameSphere, StatMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameSphere_Statics::NewProp_StatMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::NewProp_StatMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSphere_Statics::NewProp_DynMat_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "GameSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameSphere_Statics::NewProp_DynMat = { "DynMat", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameSphere, DynMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameSphere_Statics::NewProp_DynMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::NewProp_DynMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//parameter that is needed so that the object is not destroyed twice. \n" },
		{ "ModuleRelativePath", "GameSphere.h" },
		{ "ToolTip", "parameter that is needed so that the object is not destroyed twice." },
	};
#endif
	void Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed_SetBit(void* Obj)
	{
		((AGameSphere*)Obj)->isDestoyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed = { "isDestoyed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameSphere), &Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSphere_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSphere_Statics::NewProp_StatMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSphere_Statics::NewProp_DynMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSphere_Statics::NewProp_isDestoyed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameSphere_Statics::ClassParams = {
		&AGameSphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameSphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameSphere, 1977971144);
	template<> MYPROJECT_API UClass* StaticClass<AGameSphere>()
	{
		return AGameSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameSphere(Z_Construct_UClass_AGameSphere, &AGameSphere::StaticClass, TEXT("/Script/MyProject"), TEXT("AGameSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
