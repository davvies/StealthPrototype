// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef STEALTH_Agent_Controller_generated_h
#error "Agent_Controller.generated.h already included, missing '#pragma once' in Agent_Controller.h"
#endif
#define STEALTH_Agent_Controller_generated_h

#define Stealth_Source_Stealth_Agent_Controller_h_17_SPARSE_DATA
#define Stealth_Source_Stealth_Agent_Controller_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOn_target_spotted);


#define Stealth_Source_Stealth_Agent_Controller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOn_target_spotted);


#define Stealth_Source_Stealth_Agent_Controller_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgent_Controller(); \
	friend struct Z_Construct_UClass_AAgent_Controller_Statics; \
public: \
	DECLARE_CLASS(AAgent_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAgent_Controller)


#define Stealth_Source_Stealth_Agent_Controller_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAgent_Controller(); \
	friend struct Z_Construct_UClass_AAgent_Controller_Statics; \
public: \
	DECLARE_CLASS(AAgent_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AAgent_Controller)


#define Stealth_Source_Stealth_Agent_Controller_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgent_Controller(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgent_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent_Controller(AAgent_Controller&&); \
	NO_API AAgent_Controller(const AAgent_Controller&); \
public:


#define Stealth_Source_Stealth_Agent_Controller_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgent_Controller(AAgent_Controller&&); \
	NO_API AAgent_Controller(const AAgent_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgent_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgent_Controller); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgent_Controller)


#define Stealth_Source_Stealth_Agent_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__p_behaviour_tree_component() { return STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree_component); } \
	FORCEINLINE static uint32 __PPO__p_behaviour_tree() { return STRUCT_OFFSET(AAgent_Controller, p_behaviour_tree); }


#define Stealth_Source_Stealth_Agent_Controller_h_14_PROLOG
#define Stealth_Source_Stealth_Agent_Controller_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Agent_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Agent_Controller_h_17_SPARSE_DATA \
	Stealth_Source_Stealth_Agent_Controller_h_17_RPC_WRAPPERS \
	Stealth_Source_Stealth_Agent_Controller_h_17_INCLASS \
	Stealth_Source_Stealth_Agent_Controller_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_Agent_Controller_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Agent_Controller_h_17_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Agent_Controller_h_17_SPARSE_DATA \
	Stealth_Source_Stealth_Agent_Controller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Agent_Controller_h_17_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Agent_Controller_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AAgent_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_Agent_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
