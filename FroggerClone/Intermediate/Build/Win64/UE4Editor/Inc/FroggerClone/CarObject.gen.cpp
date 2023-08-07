// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FroggerClone/CarObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarObject() {}
// Cross Module References
	FROGGERCLONE_API UClass* Z_Construct_UClass_ACarObject_NoRegister();
	FROGGERCLONE_API UClass* Z_Construct_UClass_ACarObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FroggerClone();
// End Cross Module References
	void ACarObject::StaticRegisterNativesACarObject()
	{
	}
	UClass* Z_Construct_UClass_ACarObject_NoRegister()
	{
		return ACarObject::StaticClass();
	}
	struct Z_Construct_UClass_ACarObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FroggerClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarObject.h" },
		{ "ModuleRelativePath", "CarObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarObject_Statics::ClassParams = {
		&ACarObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACarObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarObject, 4217253376);
	template<> FROGGERCLONE_API UClass* StaticClass<ACarObject>()
	{
		return ACarObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarObject(Z_Construct_UClass_ACarObject, &ACarObject::StaticClass, TEXT("/Script/FroggerClone"), TEXT("ACarObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
