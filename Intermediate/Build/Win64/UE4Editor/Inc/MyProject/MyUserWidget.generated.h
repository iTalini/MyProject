// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyUserWidget_generated_h
#error "MyUserWidget.generated.h already included, missing '#pragma once' in MyUserWidget.h"
#endif
#define MYPROJECT_MyUserWidget_generated_h

#define MyProject_Source_MyProject_MyUserWidget_h_16_SPARSE_DATA
#define MyProject_Source_MyProject_MyUserWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWaveNumInWidget); \
	DECLARE_FUNCTION(execUpdateScoreInWidget);


#define MyProject_Source_MyProject_MyUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWaveNumInWidget); \
	DECLARE_FUNCTION(execUpdateScoreInWidget);


#define MyProject_Source_MyProject_MyUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define MyProject_Source_MyProject_MyUserWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMyUserWidget(); \
	friend struct Z_Construct_UClass_UMyUserWidget_Statics; \
public: \
	DECLARE_CLASS(UMyUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyUserWidget)


#define MyProject_Source_MyProject_MyUserWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public:


#define MyProject_Source_MyProject_MyUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyUserWidget(UMyUserWidget&&); \
	NO_API UMyUserWidget(const UMyUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyUserWidget)


#define MyProject_Source_MyProject_MyUserWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyUserWidget_h_13_PROLOG
#define MyProject_Source_MyProject_MyUserWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyUserWidget_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyUserWidget_h_16_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyUserWidget_h_16_INCLASS \
	MyProject_Source_MyProject_MyUserWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyUserWidget_h_16_SPARSE_DATA \
	MyProject_Source_MyProject_MyUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UMyUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
