// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
// End Cross Module References
	void AABPlayerController::StaticRegisterNativesAABPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
	{
		return AABPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AABPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ABPlayerController.h" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, HUDWidgetClass), Z_Construct_UClass_UABHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, HUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState = { "ABPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, ABPlayerState), Z_Construct_UClass_AABPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerController_Statics::ClassParams = {
		&AABPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABPlayerController, 426640141);
	template<> ARENABATTLE_API UClass* StaticClass<AABPlayerController>()
	{
		return AABPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABPlayerController(Z_Construct_UClass_AABPlayerController, &AABPlayerController::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
