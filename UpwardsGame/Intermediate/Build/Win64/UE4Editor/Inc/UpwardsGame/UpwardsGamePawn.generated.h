// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UPWARDSGAME_UpwardsGamePawn_generated_h
#error "UpwardsGamePawn.generated.h already included, missing '#pragma once' in UpwardsGamePawn.h"
#endif
#define UPWARDSGAME_UpwardsGamePawn_generated_h

#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_SPARSE_DATA
#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_RPC_WRAPPERS
#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUpwardsGamePawn(); \
	friend struct Z_Construct_UClass_AUpwardsGamePawn_Statics; \
public: \
	DECLARE_CLASS(AUpwardsGamePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(AUpwardsGamePawn)


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUpwardsGamePawn(); \
	friend struct Z_Construct_UClass_AUpwardsGamePawn_Statics; \
public: \
	DECLARE_CLASS(AUpwardsGamePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(AUpwardsGamePawn)


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUpwardsGamePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUpwardsGamePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpwardsGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpwardsGamePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpwardsGamePawn(AUpwardsGamePawn&&); \
	NO_API AUpwardsGamePawn(const AUpwardsGamePawn&); \
public:


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUpwardsGamePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpwardsGamePawn(AUpwardsGamePawn&&); \
	NO_API AUpwardsGamePawn(const AUpwardsGamePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpwardsGamePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpwardsGamePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUpwardsGamePawn)


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentBlockFocus() { return STRUCT_OFFSET(AUpwardsGamePawn, CurrentBlockFocus); }


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_9_PROLOG
#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_RPC_WRAPPERS \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_INCLASS \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_INCLASS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UpwardsGamePawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPWARDSGAME_API UClass* StaticClass<class AUpwardsGamePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UpwardsGame_Source_UpwardsGame_UpwardsGamePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
