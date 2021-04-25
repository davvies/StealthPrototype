// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/BTTObtainLocalPos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTObtainLocalPos() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UBTTObtainLocalPos_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UBTTObtainLocalPos();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UBTTObtainLocalPos::StaticRegisterNativesUBTTObtainLocalPos()
	{
	}
	UClass* Z_Construct_UClass_UBTTObtainLocalPos_NoRegister()
	{
		return UBTTObtainLocalPos::StaticClass();
	}
	struct Z_Construct_UClass_UBTTObtainLocalPos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_agent_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_agent_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTObtainLocalPos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTObtainLocalPos_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTObtainLocalPos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BTTObtainLocalPos.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTObtainLocalPos_Statics::NewProp_max_agent_radius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Radius Search" },
		{ "ModuleRelativePath", "BTTObtainLocalPos.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTObtainLocalPos_Statics::NewProp_max_agent_radius = { "max_agent_radius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTObtainLocalPos, max_agent_radius), METADATA_PARAMS(Z_Construct_UClass_UBTTObtainLocalPos_Statics::NewProp_max_agent_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTObtainLocalPos_Statics::NewProp_max_agent_radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTObtainLocalPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTObtainLocalPos_Statics::NewProp_max_agent_radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTObtainLocalPos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTObtainLocalPos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTObtainLocalPos_Statics::ClassParams = {
		&UBTTObtainLocalPos::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTObtainLocalPos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTObtainLocalPos_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTObtainLocalPos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTObtainLocalPos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTObtainLocalPos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTObtainLocalPos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTObtainLocalPos, 808491173);
	template<> STEALTH_API UClass* StaticClass<UBTTObtainLocalPos>()
	{
		return UBTTObtainLocalPos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTObtainLocalPos(Z_Construct_UClass_UBTTObtainLocalPos, &UBTTObtainLocalPos::StaticClass, TEXT("/Script/Stealth"), TEXT("UBTTObtainLocalPos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTObtainLocalPos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
