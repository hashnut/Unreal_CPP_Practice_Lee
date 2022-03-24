// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABGameInstance_generated_h
#error "ABGameInstance.generated.h already included, missing '#pragma once' in ABGameInstance.h"
#endif
#define ARENABATTLE_ABGameInstance_generated_h

#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FABCharacterData_Statics; \
	ARENABATTLE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ARENABATTLE_API UScriptStruct* StaticStruct<struct FABCharacterData>();

#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_SPARSE_DATA
#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_RPC_WRAPPERS
#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public:


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABGameInstance)


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ABCharacterTable() { return STRUCT_OFFSET(UABGameInstance, ABCharacterTable); }


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_35_PROLOG
#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_RPC_WRAPPERS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_INCLASS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_SPARSE_DATA \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class UABGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Source_ArenaBattle_Public_ABGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
