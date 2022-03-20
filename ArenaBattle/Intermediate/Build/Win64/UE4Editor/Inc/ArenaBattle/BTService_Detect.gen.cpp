// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/BTService_Detect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Detect() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UBTService_Detect_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UBTService_Detect();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UBTService_Detect::StaticRegisterNativesUBTService_Detect()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Detect_NoRegister()
	{
		return UBTService_Detect::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Detect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Detect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_Detect.h" },
		{ "ModuleRelativePath", "BTService_Detect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Detect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Detect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Detect_Statics::ClassParams = {
		&UBTService_Detect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Detect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Detect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Detect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Detect, 2596753570);
	template<> ARENABATTLE_API UClass* StaticClass<UBTService_Detect>()
	{
		return UBTService_Detect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Detect(Z_Construct_UClass_UBTService_Detect, &UBTService_Detect::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UBTService_Detect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Detect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
