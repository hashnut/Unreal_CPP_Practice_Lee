// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameMode() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameMode_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABGameState_NoRegister();
// End Cross Module References
	void AABGameMode::StaticRegisterNativesAABGameMode()
	{
	}
	UClass* Z_Construct_UClass_AABGameMode_NoRegister()
	{
		return AABGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AABGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ABGameMode.h" },
		{ "ModuleRelativePath", "Public/ABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState = { "ABGameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABGameMode, ABGameState), Z_Construct_UClass_AABGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_ABGameState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABGameMode_Statics::ClassParams = {
		&AABGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABGameMode, 3591365905);
	template<> ARENABATTLE_API UClass* StaticClass<AABGameMode>()
	{
		return AABGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABGameMode(Z_Construct_UClass_AABGameMode, &AABGameMode::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
