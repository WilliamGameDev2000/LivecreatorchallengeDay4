// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FroggerClone/TerrainSlices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainSlices() {}
// Cross Module References
	FROGGERCLONE_API UClass* Z_Construct_UClass_ATerrainSlices_NoRegister();
	FROGGERCLONE_API UClass* Z_Construct_UClass_ATerrainSlices();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FroggerClone();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATerrainSlices::StaticRegisterNativesATerrainSlices()
	{
	}
	UClass* Z_Construct_UClass_ATerrainSlices_NoRegister()
	{
		return ATerrainSlices::StaticClass();
	}
	struct Z_Construct_UClass_ATerrainSlices_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawn_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawn_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrainSlices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FroggerClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainSlices_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainSlices.h" },
		{ "ModuleRelativePath", "TerrainSlices.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainSlices_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TerrainSlices.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainSlices_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrainSlices, trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrainSlices_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainSlices_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainSlices_Statics::NewProp_spawn_location_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TerrainSlices.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainSlices_Statics::NewProp_spawn_location = { "spawn_location", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrainSlices, spawn_location), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrainSlices_Statics::NewProp_spawn_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainSlices_Statics::NewProp_spawn_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainSlices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainSlices_Statics::NewProp_trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainSlices_Statics::NewProp_spawn_location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrainSlices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainSlices>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrainSlices_Statics::ClassParams = {
		&ATerrainSlices::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATerrainSlices_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainSlices_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATerrainSlices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainSlices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrainSlices()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrainSlices_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrainSlices, 3841677282);
	template<> FROGGERCLONE_API UClass* StaticClass<ATerrainSlices>()
	{
		return ATerrainSlices::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrainSlices(Z_Construct_UClass_ATerrainSlices, &ATerrainSlices::StaticClass, TEXT("/Script/FroggerClone"), TEXT("ATerrainSlices"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainSlices);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
