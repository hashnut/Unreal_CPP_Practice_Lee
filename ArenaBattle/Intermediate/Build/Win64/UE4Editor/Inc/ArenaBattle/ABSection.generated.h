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
#ifdef ARENABATTLE_ABSection_generated_h
#error "ABSection.generated.h already included, missing '#pragma once' in ABSection.h"
#endif
#define ARENABATTLE_ABSection_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap);


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap);


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABSection(); \
	friend struct Z_Construct_UClass_AABSection_Statics; \
public: \
	DECLARE_CLASS(AABSection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABSection)


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABSection(); \
	friend struct Z_Construct_UClass_AABSection_Statics; \
public: \
	DECLARE_CLASS(AABSection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABSection)


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABSection(AABSection&&); \
	NO_API AABSection(const AABSection&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABSection(AABSection&&); \
	NO_API AABSection(const AABSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABSection)


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GateMeshes() { return STRUCT_OFFSET(AABSection, GateMeshes); } \
	FORCEINLINE static uint32 __PPO__GateTriggers() { return STRUCT_OFFSET(AABSection, GateTriggers); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AABSection, Mesh); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(AABSection, Trigger); } \
	FORCEINLINE static uint32 __PPO__bNoBattle() { return STRUCT_OFFSET(AABSection, bNoBattle); }


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_9_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
