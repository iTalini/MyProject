// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMySaveGame;
struct FVector;
class ADisintegrationSphere;
class AGameSphere;
#ifdef MYPROJECT_MyProjectGameMode_generated_h
#error "MyProjectGameMode.generated.h already included, missing '#pragma once' in MyProjectGameMode.h"
#endif
#define MYPROJECT_MyProjectGameMode_generated_h

#define MyProject_Source_MyProject_MyProjectGameMode_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_MyProjectGameMode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMode); \
	DECLARE_FUNCTION(execSaveMode); \
	DECLARE_FUNCTION(execGet_currentR); \
	DECLARE_FUNCTION(execPointDist); \
	DECLARE_FUNCTION(execChange_necessarily_destroy_r); \
	DECLARE_FUNCTION(execCheckPreviousSpheres); \
	DECLARE_FUNCTION(execRandFVector); \
	DECLARE_FUNCTION(execLookNewSpawnPont); \
	DECLARE_FUNCTION(execSpawnNewSphere); \
	DECLARE_FUNCTION(execOnSphereDisintegration); \
	DECLARE_FUNCTION(execOnGameSphereDestroyed); \
	DECLARE_FUNCTION(execDestrAllDisinSphere);


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMode); \
	DECLARE_FUNCTION(execSaveMode); \
	DECLARE_FUNCTION(execGet_currentR); \
	DECLARE_FUNCTION(execPointDist); \
	DECLARE_FUNCTION(execChange_necessarily_destroy_r); \
	DECLARE_FUNCTION(execCheckPreviousSpheres); \
	DECLARE_FUNCTION(execRandFVector); \
	DECLARE_FUNCTION(execLookNewSpawnPont); \
	DECLARE_FUNCTION(execSpawnNewSphere); \
	DECLARE_FUNCTION(execOnSphereDisintegration); \
	DECLARE_FUNCTION(execOnGameSphereDestroyed); \
	DECLARE_FUNCTION(execDestrAllDisinSphere);


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend struct Z_Construct_UClass_AMyProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode)


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend struct Z_Construct_UClass_AMyProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode)


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API AMyProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(AMyProjectGameMode&&); \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode&); \
public:


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(AMyProjectGameMode&&); \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectGameMode)


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyProjectGameMode_h_13_PROLOG
#define MyProject_Source_MyProject_MyProjectGameMode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_INCLASS \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
