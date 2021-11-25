// Copyright Epic Games, Inc. All Rights Reserved.
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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MYPROJECT_API UClass* Z_Construct_UClass_AGameSphere_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ADisintegrationSphere_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyProjectGameMode::execGet_currentR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_currentR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execPointDist)
	{
		P_GET_STRUCT(FVector,Z_Param_one);
		P_GET_STRUCT(FVector,Z_Param_two);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PointDist(Z_Param_one,Z_Param_two);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execChange_necessarily_destroy_r)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Change_necessarily_destroy_r();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execCheckPreviousSpheres)
	{
		P_GET_STRUCT(FVector,Z_Param_for_check);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckPreviousSpheres(Z_Param_for_check);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execRandFVector)
	{
		P_GET_STRUCT(FVector,Z_Param_spawnpoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_array_r);
		P_GET_PROPERTY(FFloatProperty,Z_Param_min_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RandFVector(Z_Param_spawnpoint,Z_Param_array_r,Z_Param_min_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execLookNewSpawnPont)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->LookNewSpawnPont(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execSpawnNewSphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnNewSphere();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execOnSphereDisintegration)
	{
		P_GET_OBJECT(ADisintegrationSphere,Z_Param_A_Sphere);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereDisintegration(Z_Param_A_Sphere);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execOnGameSphereDestroyed)
	{
		P_GET_OBJECT(AGameSphere,Z_Param_A_Sphere);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameSphereDestroyed(Z_Param_A_Sphere);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execDestrAllDisinSphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestrAllDisinSphere();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyProjectGameMode::execDestrAllGameSphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestrAllGameSphere();
		P_NATIVE_END;
	}
	void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
	{
		UClass* Class = AMyProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Change_necessarily_destroy_r", &AMyProjectGameMode::execChange_necessarily_destroy_r },
			{ "CheckPreviousSpheres", &AMyProjectGameMode::execCheckPreviousSpheres },
			{ "DestrAllDisinSphere", &AMyProjectGameMode::execDestrAllDisinSphere },
			{ "DestrAllGameSphere", &AMyProjectGameMode::execDestrAllGameSphere },
			{ "Get_currentR", &AMyProjectGameMode::execGet_currentR },
			{ "LookNewSpawnPont", &AMyProjectGameMode::execLookNewSpawnPont },
			{ "OnGameSphereDestroyed", &AMyProjectGameMode::execOnGameSphereDestroyed },
			{ "OnSphereDisintegration", &AMyProjectGameMode::execOnSphereDisintegration },
			{ "PointDist", &AMyProjectGameMode::execPointDist },
			{ "RandFVector", &AMyProjectGameMode::execRandFVector },
			{ "SpawnNewSphere", &AMyProjectGameMode::execSpawnNewSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//if all the spheres needed to destroy the sphere do not fit in the radius of the sphere => increase the radius \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "if all the spheres needed to destroy the sphere do not fit in the radius of the sphere => increase the radius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "Change_necessarily_destroy_r", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics
	{
		struct MyProjectGameMode_eventCheckPreviousSpheres_Parms
		{
			FVector for_check;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_for_check;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_for_check = { "for_check", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventCheckPreviousSpheres_Parms, for_check), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyProjectGameMode_eventCheckPreviousSpheres_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyProjectGameMode_eventCheckPreviousSpheres_Parms), &Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_for_check,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//check the distance between the new sphere and everyone before it \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "check the distance between the new sphere and everyone before it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "CheckPreviousSpheres", nullptr, nullptr, sizeof(MyProjectGameMode_eventCheckPreviousSpheres_Parms), Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "DestrAllDisinSphere", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "DestrAllGameSphere", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics
	{
		struct MyProjectGameMode_eventGet_currentR_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventGet_currentR_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "Get_currentR", nullptr, nullptr, sizeof(MyProjectGameMode_eventGet_currentR_Parms), Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_Get_currentR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_Get_currentR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics
	{
		struct MyProjectGameMode_eventLookNewSpawnPont_Parms
		{
			int32 i;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventLookNewSpawnPont_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventLookNewSpawnPont_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function for selecting a new spawn point \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "Function for selecting a new spawn point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "LookNewSpawnPont", nullptr, nullptr, sizeof(MyProjectGameMode_eventLookNewSpawnPont_Parms), Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics
	{
		struct MyProjectGameMode_eventOnGameSphereDestroyed_Parms
		{
			AGameSphere* A_Sphere;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A_Sphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::NewProp_A_Sphere = { "A_Sphere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventOnGameSphereDestroyed_Parms, A_Sphere), Z_Construct_UClass_AGameSphere_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::NewProp_A_Sphere,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*the function that is called from GameSphere when the sphere was hit.\n\x09We calculate the number of points scored by the player, see how many spheres were destroyed and\n\x09""at what distance he is at the current spawn point. If necessary, we start a new wave */" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the function that is called from GameSphere when the sphere was hit.\n       We calculate the number of points scored by the player, see how many spheres were destroyed and\n       at what distance he is at the current spawn point. If necessary, we start a new wave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "OnGameSphereDestroyed", nullptr, nullptr, sizeof(MyProjectGameMode_eventOnGameSphereDestroyed_Parms), Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics
	{
		struct MyProjectGameMode_eventOnSphereDisintegration_Parms
		{
			ADisintegrationSphere* A_Sphere;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A_Sphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::NewProp_A_Sphere = { "A_Sphere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventOnSphereDisintegration_Parms, A_Sphere), Z_Construct_UClass_ADisintegrationSphere_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::NewProp_A_Sphere,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "OnSphereDisintegration", nullptr, nullptr, sizeof(MyProjectGameMode_eventOnSphereDisintegration_Parms), Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics
	{
		struct MyProjectGameMode_eventPointDist_Parms
		{
			FVector one;
			FVector two;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_one;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_two;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_one = { "one", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventPointDist_Parms, one), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_two = { "two", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventPointDist_Parms, two), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventPointDist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_one,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_two,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//distance between two points \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "distance between two points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "PointDist", nullptr, nullptr, sizeof(MyProjectGameMode_eventPointDist_Parms), Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_PointDist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_PointDist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics
	{
		struct MyProjectGameMode_eventRandFVector_Parms
		{
			FVector spawnpoint;
			float array_r;
			float min_z;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnpoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_array_r;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min_z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_spawnpoint = { "spawnpoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventRandFVector_Parms, spawnpoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_array_r = { "array_r", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventRandFVector_Parms, array_r), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_min_z = { "min_z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventRandFVector_Parms, min_z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectGameMode_eventRandFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_spawnpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_array_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_min_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Creating a random vector for spawning a sphere \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "Creating a random vector for spawning a sphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "RandFVector", nullptr, nullptr, sizeof(MyProjectGameMode_eventRandFVector_Parms), Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_RandFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_RandFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectGameMode, nullptr, "SpawnNewSphere", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_useHiagaraSphere_MetaData[];
#endif
		static void NewProp_useHiagaraSphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useHiagaraSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chars_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chars_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_start_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percent_next_r_less_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent_next_r_less;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_min_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_current_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_min_loc_z_forSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min_loc_z_forSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasDestroySphereInArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wasDestroySphereInArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_wasDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waveNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_waveNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_necessarily_destroy_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_necessarily_destroy_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_spawn_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_spawn_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_min_sphere_dist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min_sphere_dist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number_of_spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_number_of_spheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfSpheresToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numberOfSpheresToDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perc_more_NumberOfSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_perc_more_NumberOfSpheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perc_more_RSpawnSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_perc_more_RSpawnSpheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_AGameSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn_AGameSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_ADisintegrationSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn_ADisintegrationSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProjectGameMode_Change_necessarily_destroy_r, "Change_necessarily_destroy_r" }, // 3303394272
		{ &Z_Construct_UFunction_AMyProjectGameMode_CheckPreviousSpheres, "CheckPreviousSpheres" }, // 528326477
		{ &Z_Construct_UFunction_AMyProjectGameMode_DestrAllDisinSphere, "DestrAllDisinSphere" }, // 676214663
		{ &Z_Construct_UFunction_AMyProjectGameMode_DestrAllGameSphere, "DestrAllGameSphere" }, // 3408177184
		{ &Z_Construct_UFunction_AMyProjectGameMode_Get_currentR, "Get_currentR" }, // 4120870322
		{ &Z_Construct_UFunction_AMyProjectGameMode_LookNewSpawnPont, "LookNewSpawnPont" }, // 2976651675
		{ &Z_Construct_UFunction_AMyProjectGameMode_OnGameSphereDestroyed, "OnGameSphereDestroyed" }, // 3661215447
		{ &Z_Construct_UFunction_AMyProjectGameMode_OnSphereDisintegration, "OnSphereDisintegration" }, // 2244540526
		{ &Z_Construct_UFunction_AMyProjectGameMode_PointDist, "PointDist" }, // 1311238577
		{ &Z_Construct_UFunction_AMyProjectGameMode_RandFVector, "RandFVector" }, // 1783250895
		{ &Z_Construct_UFunction_AMyProjectGameMode_SpawnNewSphere, "SpawnNewSphere" }, // 947188346
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere_MetaData[] = {
		{ "Category", "GameSphere" },
		{ "Comment", "//What kinde of sphere we are useing for?\n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "What kinde of sphere we are useing for?" },
	};
#endif
	void Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere_SetBit(void* Obj)
	{
		((AMyProjectGameMode*)Obj)->useHiagaraSphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere = { "useHiagaraSphere", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyProjectGameMode), &Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_score_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//points for destroying a sphere \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "points for destroying a sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, score), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_chars_score_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//points received by the character \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "points received by the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_chars_score = { "chars_score", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, chars_score), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_chars_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_chars_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_start_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//initial sphere radius \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "initial sphere radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_start_r = { "start_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, start_r), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_start_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_start_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_percent_next_r_less_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the percentage by which the spheres are reduced in size when destroyed \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the percentage by which the spheres are reduced in size when destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_percent_next_r_less = { "percent_next_r_less", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, percent_next_r_less), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_percent_next_r_less_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_percent_next_r_less_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//minimum sphere size \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "minimum sphere size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_r = { "min_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, min_r), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_current_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//current sphere size \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "current sphere size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_current_r = { "current_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, current_r), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_current_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_current_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_loc_z_forSphere_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the smallest location of the sphere in Z \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the smallest location of the sphere in Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_loc_z_forSphere = { "min_loc_z_forSphere", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, min_loc_z_forSphere), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_loc_z_forSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_loc_z_forSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroySphereInArray_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the number of destroyed spheres in the required radius \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the number of destroyed spheres in the required radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroySphereInArray = { "wasDestroySphereInArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, wasDestroySphereInArray), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroySphereInArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroySphereInArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroy_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the number of destroyed spheres in the current wave\n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the number of destroyed spheres in the current wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroy = { "wasDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, wasDestroy), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_waveNum_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//current wave number \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "current wave number" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_waveNum = { "waveNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, waveNum), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_waveNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_waveNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_necessarily_destroy_r_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//radius from the spawn point where we need to destroy the spheres \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "radius from the spawn point where we need to destroy the spheres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_necessarily_destroy_r = { "necessarily_destroy_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, necessarily_destroy_r), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_necessarily_destroy_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_necessarily_destroy_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_max_spawn_r_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//maximum spawn radius during a wave \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "maximum spawn radius during a wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_max_spawn_r = { "max_spawn_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, max_spawn_r), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_max_spawn_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_max_spawn_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//spawn center point \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "spawn center point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_sphere_dist_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//minimum distance between spheres \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "minimum distance between spheres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_sphere_dist = { "min_sphere_dist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, min_sphere_dist), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_sphere_dist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_sphere_dist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_number_of_spheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//number of spheres on the current wave \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "number of spheres on the current wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_number_of_spheres = { "number_of_spheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, number_of_spheres), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_number_of_spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_number_of_spheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_numberOfSpheresToDestroy_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//the number of spheres that need to be destroyed during the current wave in the required radius \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "the number of spheres that need to be destroyed during the current wave in the required radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_numberOfSpheresToDestroy = { "numberOfSpheresToDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, numberOfSpheresToDestroy), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_numberOfSpheresToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_numberOfSpheresToDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_NumberOfSpheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//by what percentage the number of spheres increases after each wave \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "by what percentage the number of spheres increases after each wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_NumberOfSpheres = { "perc_more_NumberOfSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, perc_more_NumberOfSpheres), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_NumberOfSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_NumberOfSpheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_RSpawnSpheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//by what percentage the spawn radius increases \n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "by what percentage the spawn radius increases" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_RSpawnSpheres = { "perc_more_RSpawnSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, perc_more_RSpawnSpheres), METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_RSpawnSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_RSpawnSpheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_AGameSphere_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_AGameSphere = { "ToSpawn_AGameSphere", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, ToSpawn_AGameSphere), Z_Construct_UClass_AGameSphere_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_AGameSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_AGameSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_ADisintegrationSphere_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_ADisintegrationSphere = { "ToSpawn_ADisintegrationSphere", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, ToSpawn_ADisintegrationSphere), Z_Construct_UClass_ADisintegrationSphere_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_ADisintegrationSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_ADisintegrationSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_Player_MetaData[] = {
		{ "Comment", "//player\n" },
		{ "ModuleRelativePath", "MyProjectGameMode.h" },
		{ "ToolTip", "player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectGameMode, Player), Z_Construct_UClass_AMyProjectCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_useHiagaraSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_chars_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_start_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_percent_next_r_less,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_current_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_loc_z_forSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroySphereInArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_wasDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_waveNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_necessarily_destroy_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_max_spawn_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_min_sphere_dist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_number_of_spheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_numberOfSpheresToDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_NumberOfSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_perc_more_RSpawnSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_AGameSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_ToSpawn_ADisintegrationSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectGameMode_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectGameMode_Statics::ClassParams = {
		&AMyProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectGameMode_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(AMyProjectGameMode, 2749188050);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectGameMode>()
	{
		return AMyProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameMode(Z_Construct_UClass_AMyProjectGameMode, &AMyProjectGameMode::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
