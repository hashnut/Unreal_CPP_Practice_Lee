// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHUDWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UABHUDWidget::StaticRegisterNativesUABHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UABHUDWidget_NoRegister()
	{
		return UABHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABHUDWidget.h" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar = { "ExpBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, ExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, PlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, CurrentScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, HighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HPBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_ExpBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_PlayerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_CurrentScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_HighScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABHUDWidget_Statics::ClassParams = {
		&UABHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABHUDWidget, 1575685793);
	template<> ARENABATTLE_API UClass* StaticClass<UABHUDWidget>()
	{
		return UABHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABHUDWidget(Z_Construct_UClass_UABHUDWidget, &UABHUDWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
