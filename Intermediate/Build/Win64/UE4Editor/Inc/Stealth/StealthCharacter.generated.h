// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_StealthCharacter_generated_h
#error "StealthCharacter.generated.h already included, missing '#pragma once' in StealthCharacter.h"
#endif
#define STEALTH_StealthCharacter_generated_h

#define Stealth_Source_Stealth_StealthCharacter_h_20_SPARSE_DATA
#define Stealth_Source_Stealth_StealthCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHUDTextState);


#define Stealth_Source_Stealth_StealthCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHUDTextState);


#define Stealth_Source_Stealth_StealthCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend struct Z_Construct_UClass_AStealthCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter)


#define Stealth_Source_Stealth_StealthCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend struct Z_Construct_UClass_AStealthCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter)


#define Stealth_Source_Stealth_StealthCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public:


#define Stealth_Source_Stealth_StealthCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthCharacter)


#define Stealth_Source_Stealth_StealthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AStealthCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AStealthCharacter, FollowCamera); }


#define Stealth_Source_Stealth_StealthCharacter_h_17_PROLOG
#define Stealth_Source_Stealth_StealthCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_20_SPARSE_DATA \
	Stealth_Source_Stealth_StealthCharacter_h_20_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthCharacter_h_20_INCLASS \
	Stealth_Source_Stealth_StealthCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_20_SPARSE_DATA \
	Stealth_Source_Stealth_StealthCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthCharacter_h


#define FOREACH_ENUM_SNEAKSTATE(op) \
	op(SneakState::Visble) \
	op(SneakState::Hiding) 

enum class SneakState : uint8;
template<> STEALTH_API UEnum* StaticEnum<SneakState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
