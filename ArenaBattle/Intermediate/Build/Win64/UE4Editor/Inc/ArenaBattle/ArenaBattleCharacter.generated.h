// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ArenaBattleCharacter_generated_h
#error "ArenaBattleCharacter.generated.h already included, missing '#pragma once' in ArenaBattleCharacter.h"
#endif
#define ARENABATTLE_ArenaBattleCharacter_generated_h

#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_RPC_WRAPPERS
#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaBattleCharacter(); \
	friend struct Z_Construct_UClass_AArenaBattleCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaBattleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AArenaBattleCharacter)


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArenaBattleCharacter(); \
	friend struct Z_Construct_UClass_AArenaBattleCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaBattleCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AArenaBattleCharacter)


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaBattleCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaBattleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaBattleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaBattleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaBattleCharacter(AArenaBattleCharacter&&); \
	NO_API AArenaBattleCharacter(const AArenaBattleCharacter&); \
public:


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaBattleCharacter(AArenaBattleCharacter&&); \
	NO_API AArenaBattleCharacter(const AArenaBattleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaBattleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaBattleCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaBattleCharacter)


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AArenaBattleCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AArenaBattleCharacter, FollowCamera); }


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_9_PROLOG
#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_INCLASS \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AArenaBattleCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_ArenaBattleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
