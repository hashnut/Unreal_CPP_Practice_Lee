// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerState() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABPlayerState::StaticRegisterNativesAABPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AABPlayerState_NoRegister()
	{
		return AABPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AABPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ABPlayerState.h" },
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore = { "GameScore", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, GameScore), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_GameScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_CharacterLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerState_Statics::ClassParams = {
		&AABPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABPlayerState, 2044502188);
	template<> ARENABATTLE_API UClass* StaticClass<AABPlayerState>()
	{
		return AABPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABPlayerState(Z_Construct_UClass_AABPlayerState, &AABPlayerState::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
