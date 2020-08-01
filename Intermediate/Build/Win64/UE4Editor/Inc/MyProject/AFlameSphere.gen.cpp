// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/AFlameSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAFlameSphere() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AAFlameSphere_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AAFlameSphere();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAFlameSphere::execParticleToggle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleToggle();
		P_NATIVE_END;
	}
	void AAFlameSphere::StaticRegisterNativesAAFlameSphere()
	{
		UClass* Class = AAFlameSphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParticleToggle", &AAFlameSphere::execParticleToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AFlameSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAFlameSphere, nullptr, "ParticleToggle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAFlameSphere_ParticleToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAFlameSphere_ParticleToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAFlameSphere_NoRegister()
	{
		return AAFlameSphere::StaticClass();
	}
	struct Z_Construct_UClass_AAFlameSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAFlameSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAFlameSphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAFlameSphere_ParticleToggle, "ParticleToggle" }, // 291707506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFlameSphere_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AFlameSphere.h" },
		{ "ModuleRelativePath", "AFlameSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAFlameSphere_Statics::NewProp_SphereParticle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AFlameSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAFlameSphere_Statics::NewProp_SphereParticle = { "SphereParticle", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAFlameSphere, SphereParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAFlameSphere_Statics::NewProp_SphereParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAFlameSphere_Statics::NewProp_SphereParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAFlameSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAFlameSphere_Statics::NewProp_SphereParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAFlameSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAFlameSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAFlameSphere_Statics::ClassParams = {
		&AAFlameSphere::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAFlameSphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAFlameSphere_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAFlameSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAFlameSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAFlameSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAFlameSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAFlameSphere, 3221089665);
	template<> MYPROJECT_API UClass* StaticClass<AAFlameSphere>()
	{
		return AAFlameSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAFlameSphere(Z_Construct_UClass_AAFlameSphere, &AAFlameSphere::StaticClass, TEXT("/Script/MyProject"), TEXT("AAFlameSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAFlameSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
