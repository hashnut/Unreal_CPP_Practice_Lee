// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleSetting/Public/ABCharacterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSetting() {}
// Cross Module References
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister();
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UABCharacterSetting::StaticRegisterNativesUABCharacterSetting()
	{
	}
	UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister()
	{
		return UABCharacterSetting::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABCharacterSetting.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_Inner = { "CharacterAssets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets = { "CharacterAssets", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABCharacterSetting, CharacterAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterSetting_Statics::NewProp_CharacterAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams = {
		&UABCharacterSetting::StaticClass,
		"ArenaBattle",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCharacterSetting, 618382656);
	template<> ARENABATTLESETTING_API UClass* StaticClass<UABCharacterSetting>()
	{
		return UABCharacterSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCharacterSetting(Z_Construct_UClass_UABCharacterSetting, &UABCharacterSetting::StaticClass, TEXT("/Script/ArenaBattleSetting"), TEXT("UABCharacterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
