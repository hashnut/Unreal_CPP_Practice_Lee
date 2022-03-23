// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ArenaBattle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattle() {}
// Cross Module References
	ARENABATTLE_API UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	static UEnum* ECharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle_ECharacterState, Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ECharacterState"));
		}
		return Singleton;
	}
	template<> ARENABATTLE_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterState(ECharacterState_StaticEnum, TEXT("/Script/ArenaBattle"), TEXT("ECharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArenaBattle_ECharacterState_Hash() { return 2270518608U; }
	UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArenaBattle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterState"), 0, Get_Z_Construct_UEnum_ArenaBattle_ECharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterState::PREINIT", (int64)ECharacterState::PREINIT },
				{ "ECharacterState::LOADING", (int64)ECharacterState::LOADING },
				{ "ECharacterState::READY", (int64)ECharacterState::READY },
				{ "ECharacterState::DEAD", (int64)ECharacterState::DEAD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEAD.Name", "ECharacterState::DEAD" },
				{ "LOADING.Name", "ECharacterState::LOADING" },
				{ "ModuleRelativePath", "Public/ArenaBattle.h" },
				{ "PREINIT.Name", "ECharacterState::PREINIT" },
				{ "READY.Name", "ECharacterState::READY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle,
				nullptr,
				"ECharacterState",
				"ECharacterState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
