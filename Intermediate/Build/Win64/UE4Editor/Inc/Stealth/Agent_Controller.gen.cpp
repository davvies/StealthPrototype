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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAgent_Controller::execOn_target_spotted)
	{
		P_GET_OBJECT(AActor,Z_Param_actorInstance);
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->On_target_spotted(Z_Param_actorInstance,Z_Param_stimulus);
		P_NATIVE_END;
	}
	void AAgent_Controller::StaticRegisterNativesAAgent_Controller()
	{
		UClass* Class = AAgent_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "On_target_spotted", &AAgent_Controller::execOn_target_spotted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics
	{
		struct Agent_Controller_eventOn_target_spotted_Parms
		{
			AActor* actorInstance;
			FAIStimulus stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_actorInstance = { "actorInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agent_Controller_eventOn_target_spotted_Parms, actorInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agent_Controller_eventOn_target_spotted_Parms, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_stimulus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_actorInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::NewProp_stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Used when agent visual stimuli detects player\n" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ToolTip", "Used when agent visual stimuli detects player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAgent_Controller, nullptr, "On_target_spotted", nullptr, nullptr, sizeof(Agent_Controller_eventOn_target_spotted_Parms), Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAgent_Controller_On_target_spotted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAgent_Controller_On_target_spotted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAgent_Controller_NoRegister()
	{
		return AAgent_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAgent_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usePerception_MetaData[];
#endif
		static void NewProp_usePerception_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_usePerception;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAgent_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAgent_Controller_On_target_spotted, "On_target_spotted" }, // 2623832407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Agent_Controller.h" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception_MetaData[] = {
		{ "Category", "AI Agent" },
		{ "Comment", "//Used for debugging purposes\n" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ToolTip", "Used for debugging purposes" },
	};
#endif
	void Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception_SetBit(void* Obj)
	{
		((AAgent_Controller*)Obj)->usePerception = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception = { "usePerception", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAgent_Controller), &Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Agent" },
		{ "Comment", "//Local behaviour tree component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ToolTip", "Local behaviour tree component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component = { "p_behaviour_tree_component", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree_component), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Agent" },
		{ "Comment", "//Instance of the agents behaviourtree\n" },
		{ "ModuleRelativePath", "Agent_Controller.h" },
		{ "ToolTip", "Instance of the agents behaviourtree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree = { "p_behaviour_tree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgent_Controller_Statics::NewProp_p_behaviour_tree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgent_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgent_Controller_Statics::NewProp_usePerception,
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
		FuncInfo,
		Z_Construct_UClass_AAgent_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAgent_Controller, 3002267549);
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
