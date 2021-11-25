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
#ifdef MYPROJECT_DisintegrationSphere_generated_h
#error "DisintegrationSphere.generated.h already included, missing '#pragma once' in DisintegrationSphere.h"
#endif
#define MYPROJECT_DisintegrationSphere_generated_h

#define MyProject_Source_MyProject_DisintegrationSphere_h_13_SPARSE_DATA
#define MyProject_Source_MyProject_DisintegrationSphere_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execOnComponentHit);


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execOnComponentHit);


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADisintegrationSphere(); \
	friend struct Z_Construct_UClass_ADisintegrationSphere_Statics; \
public: \
	DECLARE_CLASS(ADisintegrationSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ADisintegrationSphere)


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADisintegrationSphere(); \
	friend struct Z_Construct_UClass_ADisintegrationSphere_Statics; \
public: \
	DECLARE_CLASS(ADisintegrationSphere, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ADisintegrationSphere)


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADisintegrationSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADisintegrationSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisintegrationSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisintegrationSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisintegrationSphere(ADisintegrationSphere&&); \
	NO_API ADisintegrationSphere(const ADisintegrationSphere&); \
public:


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisintegrationSphere(ADisintegrationSphere&&); \
	NO_API ADisintegrationSphere(const ADisintegrationSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisintegrationSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisintegrationSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADisintegrationSphere)


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_DisintegrationSphere_h_10_PROLOG
#define MyProject_Source_MyProject_DisintegrationSphere_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_INCLASS \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_DisintegrationSphere_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_SPARSE_DATA \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_DisintegrationSphere_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ADisintegrationSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_DisintegrationSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
