// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_BTT_GetPlayerLocation_generated_h
#error "BTT_GetPlayerLocation.generated.h already included, missing '#pragma once' in BTT_GetPlayerLocation.h"
#endif
#define STEALTH_BTT_GetPlayerLocation_generated_h

#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_SPARSE_DATA
#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_RPC_WRAPPERS
#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_GetPlayerLocation(); \
	friend struct Z_Construct_UClass_UBTT_GetPlayerLocation_Statics; \
public: \
	DECLARE_CLASS(UBTT_GetPlayerLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UBTT_GetPlayerLocation)


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBTT_GetPlayerLocation(); \
	friend struct Z_Construct_UClass_UBTT_GetPlayerLocation_Statics; \
public: \
	DECLARE_CLASS(UBTT_GetPlayerLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UBTT_GetPlayerLocation)


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTT_GetPlayerLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTT_GetPlayerLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_GetPlayerLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_GetPlayerLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTT_GetPlayerLocation(UBTT_GetPlayerLocation&&); \
	NO_API UBTT_GetPlayerLocation(const UBTT_GetPlayerLocation&); \
public:


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTT_GetPlayerLocation(UBTT_GetPlayerLocation&&); \
	NO_API UBTT_GetPlayerLocation(const UBTT_GetPlayerLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_GetPlayerLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_GetPlayerLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTT_GetPlayerLocation)


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__search_radius() { return STRUCT_OFFSET(UBTT_GetPlayerLocation, search_radius); } \
	FORCEINLINE static uint32 __PPO__base_player_speed_increase() { return STRUCT_OFFSET(UBTT_GetPlayerLocation, base_player_speed_increase); }


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_13_PROLOG
#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_RPC_WRAPPERS \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_INCLASS \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_BTT_GetPlayerLocation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class UBTT_GetPlayerLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_BTT_GetPlayerLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
