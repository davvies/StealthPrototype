// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthCharacter() {}
// Cross Module References
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_SneakState();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UClass* Z_Construct_UClass_AStealthCharacter_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* SneakState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_SneakState, Z_Construct_UPackage__Script_Stealth(), TEXT("SneakState"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<SneakState>()
	{
		return SneakState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SneakState(SneakState_StaticEnum, TEXT("/Script/Stealth"), TEXT("SneakState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_SneakState_Hash() { return 1682957115U; }
	UEnum* Z_Construct_UEnum_Stealth_SneakState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SneakState"), 0, Get_Z_Construct_UEnum_Stealth_SneakState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SneakState::Visble", (int64)SneakState::Visble },
				{ "SneakState::Hiding", (int64)SneakState::Hiding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "" },
				{ "Hiding.DisplayName", "Hiding" },
				{ "Hiding.Name", "SneakState::Hiding" },
				{ "ModuleRelativePath", "StealthCharacter.h" },
				{ "Visble.DisplayName", "Visible" },
				{ "Visble.Name", "SneakState::Visble" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"SneakState",
				"SneakState",
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
	DEFINE_FUNCTION(AStealthCharacter::execUpdateHUDTextState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHUDTextState();
		P_NATIVE_END;
	}
	void AStealthCharacter::StaticRegisterNativesAStealthCharacter()
	{
		UClass* Class = AStealthCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHUDTextState", &AStealthCharacter::execUpdateHUDTextState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthCharacter, nullptr, "UpdateHUDTextState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthCharacter_NoRegister()
	{
		return AStealthCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AStealthCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SneakingState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SneakingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SneakingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_s_ActiveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_s_ActiveState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasBeenCaught_MetaData[];
#endif
		static void NewProp_hasBeenCaught_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasBeenCaught;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthCharacter_UpdateHUDTextState, "UpdateHUDTextState" }, // 1578582799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StealthCharacter.h" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState = { "SneakingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, SneakingState), Z_Construct_UEnum_Stealth_SneakState, METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_s_ActiveState_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_s_ActiveState = { "s_ActiveState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthCharacter, s_ActiveState), METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_s_ActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_s_ActiveState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught_MetaData[] = {
		{ "Category", "StealthCharacter" },
		{ "ModuleRelativePath", "StealthCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught_SetBit(void* Obj)
	{
		((AStealthCharacter*)Obj)->hasBeenCaught = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught = { "hasBeenCaught", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStealthCharacter), &Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_SneakingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_s_ActiveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthCharacter_Statics::NewProp_hasBeenCaught,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthCharacter_Statics::ClassParams = {
		&AStealthCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthCharacter, 4240918258);
	template<> STEALTH_API UClass* StaticClass<AStealthCharacter>()
	{
		return AStealthCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthCharacter(Z_Construct_UClass_AStealthCharacter, &AStealthCharacter::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
