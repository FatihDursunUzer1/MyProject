// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_GameCharacter_generated_h
#error "GameCharacter.generated.h already included, missing '#pragma once' in GameCharacter.h"
#endif
#define MYPROJECT_GameCharacter_generated_h

#define MyProject_Source_MyProject_GameCharacter_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_GameCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define MyProject_Source_MyProject_GameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define MyProject_Source_MyProject_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define MyProject_Source_MyProject_GameCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define MyProject_Source_MyProject_GameCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public:


#define MyProject_Source_MyProject_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCharacter(AGameCharacter&&); \
	NO_API AGameCharacter(const AGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter)


#define MyProject_Source_MyProject_GameCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_GameCharacter_h_12_PROLOG
#define MyProject_Source_MyProject_GameCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameCharacter_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_GameCharacter_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_GameCharacter_h_15_INCLASS \
	MyProject_Source_MyProject_GameCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_GameCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_GameCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_GameCharacter_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_GameCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_GameCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
