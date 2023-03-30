// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FroggerClone/FroggerCloneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFroggerCloneGameMode() {}
// Cross Module References
	FROGGERCLONE_API UClass* Z_Construct_UClass_AFroggerCloneGameMode_NoRegister();
	FROGGERCLONE_API UClass* Z_Construct_UClass_AFroggerCloneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FroggerClone();
// End Cross Module References
	void AFroggerCloneGameMode::StaticRegisterNativesAFroggerCloneGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFroggerCloneGameMode_NoRegister()
	{
		return AFroggerCloneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFroggerCloneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFroggerCloneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FroggerClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFroggerCloneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FroggerCloneGameMode.h" },
		{ "ModuleRelativePath", "FroggerCloneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFroggerCloneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFroggerCloneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFroggerCloneGameMode_Statics::ClassParams = {
		&AFroggerCloneGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFroggerCloneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFroggerCloneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFroggerCloneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFroggerCloneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFroggerCloneGameMode, 435644781);
	template<> FROGGERCLONE_API UClass* StaticClass<AFroggerCloneGameMode>()
	{
		return AFroggerCloneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFroggerCloneGameMode(Z_Construct_UClass_AFroggerCloneGameMode, &AFroggerCloneGameMode::StaticClass, TEXT("/Script/FroggerClone"), TEXT("AFroggerCloneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFroggerCloneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
