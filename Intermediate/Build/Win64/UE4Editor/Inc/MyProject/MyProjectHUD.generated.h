// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectHUD_generated_h
#error "MyProjectHUD.generated.h already included, missing '#pragma once' in MyProjectHUD.h"
#endif
#define MYPROJECT_MyProjectHUD_generated_h

#define MyProject_Source_MyProject_MyProjectHUD_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_MyProjectHUD_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWaveNum); \
	DECLARE_FUNCTION(execUpdateScore);


#define MyProject_Source_MyProject_MyProjectHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWaveNum); \
	DECLARE_FUNCTION(execUpdateScore);


#define MyProject_Source_MyProject_MyProjectHUD_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectHUD(); \
	friend struct Z_Construct_UClass_AMyProjectHUD_Statics; \
public: \
	DECLARE_CLASS(AMyProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectHUD)


#define MyProject_Source_MyProject_MyProjectHUD_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectHUD(); \
	friend struct Z_Construct_UClass_AMyProjectHUD_Statics; \
public: \
	DECLARE_CLASS(AMyProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectHUD)


#define MyProject_Source_MyProject_MyProjectHUD_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectHUD(AMyProjectHUD&&); \
	NO_API AMyProjectHUD(const AMyProjectHUD&); \
public:


#define MyProject_Source_MyProject_MyProjectHUD_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectHUD(AMyProjectHUD&&); \
	NO_API AMyProjectHUD(const AMyProjectHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectHUD)


#define MyProject_Source_MyProject_MyProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyProjectHUD_h_10_PROLOG
#define MyProject_Source_MyProject_MyProjectHUD_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectHUD_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectHUD_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectHUD_h_13_INCLASS \
	MyProject_Source_MyProject_MyProjectHUD_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectHUD_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectHUD_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectHUD_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_MyProjectHUD_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectHUD_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectHUD_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
