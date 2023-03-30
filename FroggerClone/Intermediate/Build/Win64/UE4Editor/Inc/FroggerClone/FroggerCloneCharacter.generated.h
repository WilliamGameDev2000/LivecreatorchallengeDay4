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
struct FHitResult;
#ifdef FROGGERCLONE_FroggerCloneCharacter_generated_h
#error "FroggerCloneCharacter.generated.h already included, missing '#pragma once' in FroggerCloneCharacter.h"
#endif
#define FROGGERCLONE_FroggerCloneCharacter_generated_h

#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_SPARSE_DATA
#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimerEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimerEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFroggerCloneCharacter(); \
	friend struct Z_Construct_UClass_AFroggerCloneCharacter_Statics; \
public: \
	DECLARE_CLASS(AFroggerCloneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FroggerClone"), NO_API) \
	DECLARE_SERIALIZER(AFroggerCloneCharacter)


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFroggerCloneCharacter(); \
	friend struct Z_Construct_UClass_AFroggerCloneCharacter_Statics; \
public: \
	DECLARE_CLASS(AFroggerCloneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FroggerClone"), NO_API) \
	DECLARE_SERIALIZER(AFroggerCloneCharacter)


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFroggerCloneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFroggerCloneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFroggerCloneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFroggerCloneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFroggerCloneCharacter(AFroggerCloneCharacter&&); \
	NO_API AFroggerCloneCharacter(const AFroggerCloneCharacter&); \
public:


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFroggerCloneCharacter(AFroggerCloneCharacter&&); \
	NO_API AFroggerCloneCharacter(const AFroggerCloneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFroggerCloneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFroggerCloneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFroggerCloneCharacter)


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFroggerCloneCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFroggerCloneCharacter, FollowCamera); }


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_9_PROLOG
#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_SPARSE_DATA \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_RPC_WRAPPERS \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_INCLASS \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_SPARSE_DATA \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FROGGERCLONE_API UClass* StaticClass<class AFroggerCloneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FroggerClone_Source_FroggerClone_FroggerCloneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
