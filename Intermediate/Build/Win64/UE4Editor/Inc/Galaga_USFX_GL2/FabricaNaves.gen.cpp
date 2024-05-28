// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_GL2/FabricaNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNaves() {}
// Cross Module References
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFabricaNaves_NoRegister();
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_AFabricaNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_GL2();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GALAGA_USFX_GL2_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabricaNaves::execFabricarNaves)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TipoNave);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANaveEnemiga**)Z_Param__Result=AFabricaNaves::FabricarNaves(Z_Param_TipoNave,Z_Param_World,Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	void AFabricaNaves::StaticRegisterNativesAFabricaNaves()
	{
		UClass* Class = AFabricaNaves::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FabricarNaves", &AFabricaNaves::execFabricarNaves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics
	{
		struct FabricaNaves_eventFabricarNaves_Parms
		{
			FString TipoNave;
			UWorld* World;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			ANaveEnemiga* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TipoNave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_TipoNave = { "TipoNave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaNaves_eventFabricarNaves_Parms, TipoNave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaNaves_eventFabricarNaves_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaNaves_eventFabricarNaves_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaNaves_eventFabricarNaves_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaNaves_eventFabricarNaves_Parms, ReturnValue), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_TipoNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "FabricaNaves" },
		{ "Comment", "//virtual ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation) PURE_VIRTUAL(AFabricaNaves::FabricarNaves, return nullptr;);//Funcion para fabricar naves\n" },
		{ "ModuleRelativePath", "FabricaNaves.h" },
		{ "ToolTip", "virtual ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation) PURE_VIRTUAL(AFabricaNaves::FabricarNaves, return nullptr;);Funcion para fabricar naves" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabricaNaves, nullptr, "FabricarNaves", nullptr, nullptr, sizeof(FabricaNaves_eventFabricarNaves_Parms), Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabricaNaves_FabricarNaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabricaNaves_FabricarNaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabricaNaves_NoRegister()
	{
		return AFabricaNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_GL2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabricaNaves_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabricaNaves_FabricarNaves, "FabricarNaves" }, // 680508700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaNaves.h" },
		{ "ModuleRelativePath", "FabricaNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNaves_Statics::ClassParams = {
		&AFabricaNaves::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaNaves, 4227718370);
	template<> GALAGA_USFX_GL2_API UClass* StaticClass<AFabricaNaves>()
	{
		return AFabricaNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaNaves(Z_Construct_UClass_AFabricaNaves, &AFabricaNaves::StaticClass, TEXT("/Script/Galaga_USFX_GL2"), TEXT("AFabricaNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
