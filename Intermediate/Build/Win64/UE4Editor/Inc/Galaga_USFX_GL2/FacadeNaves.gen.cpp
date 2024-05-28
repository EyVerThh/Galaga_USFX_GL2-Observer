// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_GL2/FacadeNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeNaves() {}
// Cross Module References
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFacadeNaves_NoRegister();
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFacadeNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_GL2();
// End Cross Module References
	void AFacadeNaves::StaticRegisterNativesAFacadeNaves()
	{
	}
	UClass* Z_Construct_UClass_AFacadeNaves_NoRegister()
	{
		return AFacadeNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_GL2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeNaves.h" },
		{ "ModuleRelativePath", "FacadeNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeNaves_Statics::ClassParams = {
		&AFacadeNaves::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeNaves, 1207897565);
	template<> GALAGA_USFX_GL2_API UClass* StaticClass<AFacadeNaves>()
	{
		return AFacadeNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeNaves(Z_Construct_UClass_AFacadeNaves, &AFacadeNaves::StaticClass, TEXT("/Script/Galaga_USFX_GL2"), TEXT("AFacadeNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
