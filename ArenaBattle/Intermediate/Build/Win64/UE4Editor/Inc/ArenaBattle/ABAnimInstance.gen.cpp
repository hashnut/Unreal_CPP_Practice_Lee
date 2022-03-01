// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ABAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAnimInstance() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimInstance_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABAnimInstance::StaticRegisterNativesUABAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UABAnimInstance_NoRegister()
	{
		return UABAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UABAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ABAnimInstance.h" },
		{ "ModuleRelativePath", "ABAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed = { "CurrentPawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABAnimInstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "ABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UABAnimInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABAnimInstance), &Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABAnimInstance_Statics::ClassParams = {
		&UABAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABAnimInstance, 4158799732);
	template<> ARENABATTLE_API UClass* StaticClass<UABAnimInstance>()
	{
		return UABAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABAnimInstance(Z_Construct_UClass_UABAnimInstance, &UABAnimInstance::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
