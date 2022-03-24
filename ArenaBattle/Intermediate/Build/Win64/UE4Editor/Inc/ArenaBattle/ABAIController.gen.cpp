// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAIController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABAIController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AABAIController::StaticRegisterNativesAABAIController()
	{
	}
	UClass* Z_Construct_UClass_AABAIController_NoRegister()
	{
		return AABAIController::StaticClass();
	}
	struct Z_Construct_UClass_AABAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ABAIController.h" },
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABAIController, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset = { "BBAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABAIController, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABAIController_Statics::NewProp_BTAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABAIController_Statics::NewProp_BBAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABAIController_Statics::ClassParams = {
		&AABAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABAIController, 2183803867);
	template<> ARENABATTLE_API UClass* StaticClass<AABAIController>()
	{
		return AABAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABAIController(Z_Construct_UClass_AABAIController, &AABAIController::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
