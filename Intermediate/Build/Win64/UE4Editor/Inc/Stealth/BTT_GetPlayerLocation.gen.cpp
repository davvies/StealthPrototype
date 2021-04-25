// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/BTT_GetPlayerLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_GetPlayerLocation() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UBTT_GetPlayerLocation_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UBTT_GetPlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UBTT_GetPlayerLocation::StaticRegisterNativesUBTT_GetPlayerLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTT_GetPlayerLocation_NoRegister()
	{
		return UBTT_GetPlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_GetPlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_search_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_search_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_base_player_speed_increase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_base_player_speed_increase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTT_GetPlayerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BTT_GetPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_search_radius_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Perception" },
		{ "Comment", "//Loss radius for agent\n" },
		{ "ModuleRelativePath", "BTT_GetPlayerLocation.h" },
		{ "ToolTip", "Loss radius for agent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_search_radius = { "search_radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_GetPlayerLocation, search_radius), METADATA_PARAMS(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_search_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_search_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_base_player_speed_increase_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Agent Motion" },
		{ "Comment", "//Increase of acceleration from player with '0f' being match speed\n" },
		{ "ModuleRelativePath", "BTT_GetPlayerLocation.h" },
		{ "ToolTip", "Increase of acceleration from player with '0f' being match speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_base_player_speed_increase = { "base_player_speed_increase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTT_GetPlayerLocation, base_player_speed_increase), METADATA_PARAMS(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_base_player_speed_increase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_base_player_speed_increase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_search_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::NewProp_base_player_speed_increase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_GetPlayerLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::ClassParams = {
		&UBTT_GetPlayerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_GetPlayerLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTT_GetPlayerLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTT_GetPlayerLocation, 3910956236);
	template<> STEALTH_API UClass* StaticClass<UBTT_GetPlayerLocation>()
	{
		return UBTT_GetPlayerLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTT_GetPlayerLocation(Z_Construct_UClass_UBTT_GetPlayerLocation, &UBTT_GetPlayerLocation::StaticClass, TEXT("/Script/Stealth"), TEXT("UBTT_GetPlayerLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_GetPlayerLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
