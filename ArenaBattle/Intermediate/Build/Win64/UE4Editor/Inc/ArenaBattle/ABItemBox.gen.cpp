// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABItemBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABItemBox() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABItemBox_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABItemBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AABItemBox::execOnEffectFinished)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_PSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffectFinished(Z_Param_PSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AABItemBox::execOnCharacterOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AABItemBox::StaticRegisterNativesAABItemBox()
	{
		UClass* Class = AABItemBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterOverlap", &AABItemBox::execOnCharacterOverlap },
			{ "OnEffectFinished", &AABItemBox::execOnEffectFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics
	{
		struct ABItemBox_eventOnCharacterOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnCharacterOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnCharacterOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnCharacterOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnCharacterOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ABItemBox_eventOnCharacterOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABItemBox_eventOnCharacterOverlap_Parms), &Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnCharacterOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABItemBox, nullptr, "OnCharacterOverlap", nullptr, nullptr, sizeof(ABItemBox_eventOnCharacterOverlap_Parms), Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AABItemBox_OnCharacterOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AABItemBox_OnCharacterOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics
	{
		struct ABItemBox_eventOnEffectFinished_Parms
		{
			UParticleSystemComponent* PSystem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABItemBox_eventOnEffectFinished_Parms, PSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::NewProp_PSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::NewProp_PSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::NewProp_PSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABItemBox, nullptr, "OnEffectFinished", nullptr, nullptr, sizeof(ABItemBox_eventOnEffectFinished_Parms), Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AABItemBox_OnEffectFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AABItemBox_OnEffectFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AABItemBox_NoRegister()
	{
		return AABItemBox::StaticClass();
	}
	struct Z_Construct_UClass_AABItemBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABItemBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AABItemBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AABItemBox_OnCharacterOverlap, "OnCharacterOverlap" }, // 3890768676
		{ &Z_Construct_UFunction_AABItemBox_OnEffectFinished, "OnEffectFinished" }, // 3269519273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABItemBox.h" },
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABItemBox_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABItemBox, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABItemBox_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABItemBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABItemBox, Box), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABItemBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "Effect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABItemBox_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABItemBox, Effect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABItemBox_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::NewProp_WeaponItemClass_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "Public/ABItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABItemBox_Statics::NewProp_WeaponItemClass = { "WeaponItemClass", nullptr, (EPropertyFlags)0x0014000000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABItemBox, WeaponItemClass), Z_Construct_UClass_AABWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AABItemBox_Statics::NewProp_WeaponItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::NewProp_WeaponItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABItemBox_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABItemBox_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABItemBox_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABItemBox_Statics::NewProp_WeaponItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABItemBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABItemBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABItemBox_Statics::ClassParams = {
		&AABItemBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AABItemBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABItemBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABItemBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABItemBox, 1634843194);
	template<> ARENABATTLE_API UClass* StaticClass<AABItemBox>()
	{
		return AABItemBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABItemBox(Z_Construct_UClass_AABItemBox, &AABItemBox::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AABItemBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABItemBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
