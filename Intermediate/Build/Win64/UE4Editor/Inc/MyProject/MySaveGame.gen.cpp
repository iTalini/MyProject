// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MySaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMySaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMySaveGame::StaticRegisterNativesUMySaveGame()
	{
	}
	UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
	{
		return UMySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SG_V_SpheresLocation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_V_SpheresLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SG_V_SpheresLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_SpheresColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SG_SpheresColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_chars_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_chars_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_start_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_start_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_percent_next_r_less_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_percent_next_r_less;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_min_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_min_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_current_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_current_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_min_loc_z_forSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_min_loc_z_forSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_wasDestroySphereInArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_wasDestroySphereInArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_wasDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_wasDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_waveNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_waveNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_necessarily_destroy_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_necessarily_destroy_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_max_spawn_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_max_spawn_r;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SG_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_min_sphere_dist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_min_sphere_dist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_number_of_spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_number_of_spheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_spheres_in_game_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_spheres_in_game;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_numberOfSpheresToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_numberOfSpheresToDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_perc_more_NumberOfSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_perc_more_NumberOfSpheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SG_perc_more_RSpawnSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SG_perc_more_RSpawnSpheres;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation_Inner = { "SG_V_SpheresLocation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation_MetaData[] = {
		{ "Category", "Spheres" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation = { "SG_V_SpheresLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_V_SpheresLocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpheresColor_MetaData[] = {
		{ "Category", "Spheres" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpheresColor = { "SG_SpheresColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_SpheresColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpheresColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpheresColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_score_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//points for destroying a sphere \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "points for destroying a sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_score = { "SG_score", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_score), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_chars_score_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//points received by the character \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "points received by the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_chars_score = { "SG_chars_score", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_chars_score), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_chars_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_chars_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_start_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//initial sphere radius \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "initial sphere radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_start_r = { "SG_start_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_start_r), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_start_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_start_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_percent_next_r_less_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the percentage by which the spheres are reduced in size when destroyed \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "the percentage by which the spheres are reduced in size when destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_percent_next_r_less = { "SG_percent_next_r_less", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_percent_next_r_less), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_percent_next_r_less_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_percent_next_r_less_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//minimum sphere size \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "minimum sphere size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_r = { "SG_min_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_min_r), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_current_r_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//current sphere size \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "current sphere size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_current_r = { "SG_current_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_current_r), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_current_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_current_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_loc_z_forSphere_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the smallest location of the sphere in Z \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "the smallest location of the sphere in Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_loc_z_forSphere = { "SG_min_loc_z_forSphere", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_min_loc_z_forSphere), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_loc_z_forSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_loc_z_forSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroySphereInArray_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the number of destroyed spheres in the required radius \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "the number of destroyed spheres in the required radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroySphereInArray = { "SG_wasDestroySphereInArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_wasDestroySphereInArray), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroySphereInArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroySphereInArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroy_MetaData[] = {
		{ "Category", "SphereParam" },
		{ "Comment", "//the number of destroyed spheres in the current wave\n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "the number of destroyed spheres in the current wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroy = { "SG_wasDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_wasDestroy), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_waveNum_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//current wave number \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "current wave number" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_waveNum = { "SG_waveNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_waveNum), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_waveNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_waveNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_necessarily_destroy_r_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//radius from the spawn point where we need to destroy the spheres \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "radius from the spawn point where we need to destroy the spheres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_necessarily_destroy_r = { "SG_necessarily_destroy_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_necessarily_destroy_r), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_necessarily_destroy_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_necessarily_destroy_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_max_spawn_r_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//maximum spawn radius during a wave \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "maximum spawn radius during a wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_max_spawn_r = { "SG_max_spawn_r", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_max_spawn_r), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_max_spawn_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_max_spawn_r_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpawnPoint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//spawn center point \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "spawn center point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpawnPoint = { "SG_SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_sphere_dist_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//minimum distance between spheres \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "minimum distance between spheres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_sphere_dist = { "SG_min_sphere_dist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_min_sphere_dist), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_sphere_dist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_sphere_dist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_number_of_spheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//number of spheres on the current wave \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "number of spheres on the current wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_number_of_spheres = { "SG_number_of_spheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_number_of_spheres), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_number_of_spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_number_of_spheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_spheres_in_game_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "MySaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_spheres_in_game = { "SG_spheres_in_game", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_spheres_in_game), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_spheres_in_game_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_spheres_in_game_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_numberOfSpheresToDestroy_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//the number of spheres that need to be destroyed during the current wave in the required radius \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "the number of spheres that need to be destroyed during the current wave in the required radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_numberOfSpheresToDestroy = { "SG_numberOfSpheresToDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_numberOfSpheresToDestroy), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_numberOfSpheresToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_numberOfSpheresToDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_NumberOfSpheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//by what percentage the number of spheres increases after each wave \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "by what percentage the number of spheres increases after each wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_NumberOfSpheres = { "SG_perc_more_NumberOfSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_perc_more_NumberOfSpheres), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_NumberOfSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_NumberOfSpheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_RSpawnSpheres_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//by what percentage the spawn radius increases \n" },
		{ "ModuleRelativePath", "MySaveGame.h" },
		{ "ToolTip", "by what percentage the spawn radius increases" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_RSpawnSpheres = { "SG_perc_more_RSpawnSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySaveGame, SG_perc_more_RSpawnSpheres), METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_RSpawnSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_RSpawnSpheres_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_V_SpheresLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpheresColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_chars_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_start_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_percent_next_r_less,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_current_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_loc_z_forSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroySphereInArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_wasDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_waveNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_necessarily_destroy_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_max_spawn_r,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_min_sphere_dist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_number_of_spheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_spheres_in_game,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_numberOfSpheresToDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_NumberOfSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SG_perc_more_RSpawnSpheres,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
		&UMySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySaveGame, 2835557153);
	template<> MYPROJECT_API UClass* StaticClass<UMySaveGame>()
	{
		return UMySaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySaveGame(Z_Construct_UClass_UMySaveGame, &UMySaveGame::StaticClass, TEXT("/Script/MyProject"), TEXT("UMySaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
