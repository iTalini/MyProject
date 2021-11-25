// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT_GameSphere_generated_h
#error "GameSphere.generated.h already included, missing '#pragma once' in GameSphere.h"
#endif
#define MYPROJECT_GameSphere_generated_h

#define MyProject_Source_MyProject_GameSphere_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_GameSphere_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execBeginPlay);


#define MyProject_Source_MyProject_GameSphere_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execBeginPlay);


#define MyProject_Source_MyProject_GameSphere_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameSphere(); \
	friend struct Z_Construct_UClass_AGameSphere_Statics; \
public: \
	DECLARE_CLASS(AGameSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameSphere)


#define MyProject_Source_MyProject_GameSphere_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGameSphere(); \
	friend struct Z_Construct_UClass_AGameSphere_Statics; \
public: \
	DECLARE_CLASS(AGameSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameSphere)


#define MyProject_Source_MyProject_GameSphere_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameSphere(AGameSphere&&); \
	NO_API AGameSphere(const AGameSphere&); \
public:


#define MyProject_Source_MyProject_GameSphere_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameSphere(AGameSphere&&); \
	NO_API AGameSphere(const AGameSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameSphere)


#define MyProject_Source_MyProject_GameSphere_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_GameSphere_h_13_PROLOG
#define MyProject_Source_MyProject_GameSphere_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameSphere_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameSphere_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_GameSphere_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_GameSphere_h_16_INCLASS \
	MyProject_Source_MyProject_GameSphere_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_GameSphere_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameSphere_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameSphere_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_GameSphere_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameSphere_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameSphere_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AGameSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_GameSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
