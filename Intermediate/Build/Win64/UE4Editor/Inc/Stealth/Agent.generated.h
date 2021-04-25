// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_Agent_generated_h
#error "Agent.generated.h already included, missing '#pragma once' in Agent.h"
#endif
#define STEALTH_Agent_generated_h

#define Stealth_Source_Stealth_Agent_h_23_SPARSE_DATA
#define Stealth_Source_Stealth_Agent_h_23_RPC_WRAPPERS
#define Stealth_Source_Stealth_Agent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_Agent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define Stealth_Source_Stealth_Agent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAAgent(); \
	friend struct Z_Construct_UClass_AAgent_Statics; \
public: \
	DECLARE_CLASS(AAgent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAgent)


#define Stealth_Source_Stealth_Agent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public:


#define Stealth_Source_Stealth_Agent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent(AAgent&&); \
	NO_API AAgent(const AAgent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgent)


#define Stealth_Source_Stealth_Agent_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__max_patrolSpeed() { return STRUCT_OFFSET(AAgent, max_patrolSpeed); }


#define Stealth_Source_Stealth_Agent_h_20_PROLOG
#define Stealth_Source_Stealth_Agent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Agent_h_23_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Agent_h_23_SPARSE_DATA \
	Stealth_Source_Stealth_Agent_h_23_RPC_WRAPPERS \
	Stealth_Source_Stealth_Agent_h_23_INCLASS \
	Stealth_Source_Stealth_Agent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_Agent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Agent_h_23_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Agent_h_23_SPARSE_DATA \
	Stealth_Source_Stealth_Agent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Agent_h_23_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Agent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_Agent_h


#define FOREACH_ENUM_TRAILFOLLOW(op) \
	op(TrailFollow::Never) \
	op(TrailFollow::Rarely) \
	op(TrailFollow::MostTimes) 

enum class TrailFollow : uint8;
template<> STEALTH_API UEnum* StaticEnum<TrailFollow>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
