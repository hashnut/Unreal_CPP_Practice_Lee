// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ArenaBattleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattleGameMode() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AArenaBattleGameMode_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AArenaBattleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AArenaBattleGameMode::StaticRegisterNativesAArenaBattleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AArenaBattleGameMode_NoRegister()
	{
		return AArenaBattleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArenaBattleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaBattleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaBattleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArenaBattleGameMode.h" },
		{ "ModuleRelativePath", "ArenaBattleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaBattleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaBattleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArenaBattleGameMode_Statics::ClassParams = {
		&AArenaBattleGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArenaBattleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaBattleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArenaBattleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArenaBattleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArenaBattleGameMode, 53277319);
	template<> ARENABATTLE_API UClass* StaticClass<AArenaBattleGameMode>()
	{
		return AArenaBattleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArenaBattleGameMode(Z_Construct_UClass_AArenaBattleGameMode, &AArenaBattleGameMode::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AArenaBattleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaBattleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
