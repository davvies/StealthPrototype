// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/Agent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgent() {}
// Cross Module References
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_TrailFollow();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UClass* Z_Construct_UClass_AAgent_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAgent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
	static UEnum* TrailFollow_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_TrailFollow, Z_Construct_UPackage__Script_Stealth(), TEXT("TrailFollow"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<TrailFollow>()
	{
		return TrailFollow_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TrailFollow(TrailFollow_StaticEnum, TEXT("/Script/Stealth"), TEXT("TrailFollow"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_TrailFollow_Hash() { return 1033699940U; }
	UEnum* Z_Construct_UEnum_Stealth_TrailFollow()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TrailFollow"), 0, Get_Z_Construct_UEnum_Stealth_TrailFollow_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TrailFollow::Never", (int64)TrailFollow::Never },
				{ "TrailFollow::Rarely", (int64)TrailFollow::Rarely },
				{ "TrailFollow::MostTimes", (int64)TrailFollow::MostTimes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "ModuleRelativePath", "Agent.h" },
				{ "MostTimes.DisplayName", "Most times" },
				{ "MostTimes.Name", "TrailFollow::MostTimes" },
				{ "Never.DisplayName", "Never" },
				{ "Never.Name", "TrailFollow::Never" },
				{ "Rarely.DisplayName", "Rarely" },
				{ "Rarely.Name", "TrailFollow::Rarely" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"TrailFollow",
				"TrailFollow",
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
	void AAgent::StaticRegisterNativesAAgent()
	{
	}
	UClass* Z_Construct_UClass_AAgent_NoRegister()
	{
		return AAgent::StaticClass();
	}
	struct Z_Construct_UClass_AAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isChasingPlayer_MetaData[];
#endif
		static void NewProp_isChasingPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChasingPlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_searchBehaviour_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_searchBehaviour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_patrolSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_patrolSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Agent.h" },
		{ "ModuleRelativePath", "Agent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer_MetaData[] = {
		{ "Category", "AI chase" },
		{ "ModuleRelativePath", "Agent.h" },
	};
#endif
	void Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer_SetBit(void* Obj)
	{
		((AAgent*)Obj)->isChasingPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer = { "isChasingPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAgent), &Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour_MetaData[] = {
		{ "Category", "AI Search behaviour" },
		{ "ModuleRelativePath", "Agent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour = { "searchBehaviour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, searchBehaviour), Z_Construct_UEnum_Stealth_TrailFollow, METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Statics::NewProp_max_patrolSpeed_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ClampMax", "400.000000" },
		{ "ClampMin", "150.000000" },
		{ "Comment", "//There are issues with pre-processor commands here, not even setting pre-processor expressions can stop magic numbers\n" },
		{ "ModuleRelativePath", "Agent.h" },
		{ "ToolTip", "There are issues with pre-processor commands here, not even setting pre-processor expressions can stop magic numbers" },
		{ "UIMax", "400.000000" },
		{ "UIMin", "150.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgent_Statics::NewProp_max_patrolSpeed = { "max_patrolSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent, max_patrolSpeed), METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::NewProp_max_patrolSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::NewProp_max_patrolSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_isChasingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_searchBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Statics::NewProp_max_patrolSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgent_Statics::ClassParams = {
		&AAgent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgent, 2960784654);
	template<> STEALTH_API UClass* StaticClass<AAgent>()
	{
		return AAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgent(Z_Construct_UClass_AAgent, &AAgent::StaticClass, TEXT("/Script/Stealth"), TEXT("AAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
