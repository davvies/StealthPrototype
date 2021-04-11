// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/Agent_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgent_Controller() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AAgent_Controller_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AAgent_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAgent_Controller::StaticRegisterNativesAAgent_Controller()
	{
	}
	UClass* Z_Construct_UClass_AAgent_Controller_NoRegister()
	{
		return AAgent_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAgent_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_behaviour_tree_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_behaviour_tree_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_behaviour_tree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_behaviour_tree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgent_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Agent_Controller.h" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Agent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component = { "p_behaviour_tree_component", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree_component), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Agent" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree = { "p_behaviour_tree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgent_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgent_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgent_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgent_Controller_Statics::ClassParams = {
		&AAgent_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgent_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgent_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgent_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgent_Controller, 1171817286);
	template<> STEALTH_API UClass* StaticClass<AAgent_Controller>()
	{
		return AAgent_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgent_Controller(Z_Construct_UClass_AAgent_Controller, &AAgent_Controller::StaticClass, TEXT("/Script/Stealth"), TEXT("AAgent_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgent_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
