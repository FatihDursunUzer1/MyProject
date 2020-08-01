// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_GameProjectile_generated_h
#error "GameProjectile.generated.h already included, missing '#pragma once' in GameProjectile.h"
#endif
#define MYPROJECT_GameProjectile_generated_h

#define MyProject_Source_MyProject_GameProjectile_h_14_SPARSE_DATA
#define MyProject_Source_MyProject_GameProjectile_h_14_RPC_WRAPPERS
#define MyProject_Source_MyProject_GameProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_GameProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameProjectile(); \
	friend struct Z_Construct_UClass_AGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameProjectile)


#define MyProject_Source_MyProject_GameProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameProjectile(); \
	friend struct Z_Construct_UClass_AGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameProjectile)


#define MyProject_Source_MyProject_GameProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameProjectile(AGameProjectile&&); \
	NO_API AGameProjectile(const AGameProjectile&); \
public:


#define MyProject_Source_MyProject_GameProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameProjectile(AGameProjectile&&); \
	NO_API AGameProjectile(const AGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameProjectile)


#define MyProject_Source_MyProject_GameProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_GameProjectile_h_11_PROLOG
#define MyProject_Source_MyProject_GameProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameProjectile_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_GameProjectile_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_GameProjectile_h_14_INCLASS \
	MyProject_Source_MyProject_GameProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_GameProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameProjectile_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_GameProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameProjectile_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
