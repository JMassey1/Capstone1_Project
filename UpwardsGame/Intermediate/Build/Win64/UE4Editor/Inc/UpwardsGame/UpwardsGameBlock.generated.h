// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef UPWARDSGAME_UpwardsGameBlock_generated_h
#error "UpwardsGameBlock.generated.h already included, missing '#pragma once' in UpwardsGameBlock.h"
#endif
#define UPWARDSGAME_UpwardsGameBlock_generated_h

#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_SPARSE_DATA
#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUpwardsGameBlock(); \
	friend struct Z_Construct_UClass_AUpwardsGameBlock_Statics; \
public: \
	DECLARE_CLASS(AUpwardsGameBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), UPWARDSGAME_API) \
	DECLARE_SERIALIZER(AUpwardsGameBlock)


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAUpwardsGameBlock(); \
	friend struct Z_Construct_UClass_AUpwardsGameBlock_Statics; \
public: \
	DECLARE_CLASS(AUpwardsGameBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), UPWARDSGAME_API) \
	DECLARE_SERIALIZER(AUpwardsGameBlock)


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UPWARDSGAME_API AUpwardsGameBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUpwardsGameBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UPWARDSGAME_API, AUpwardsGameBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpwardsGameBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPWARDSGAME_API AUpwardsGameBlock(AUpwardsGameBlock&&); \
	UPWARDSGAME_API AUpwardsGameBlock(const AUpwardsGameBlock&); \
public:


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPWARDSGAME_API AUpwardsGameBlock(AUpwardsGameBlock&&); \
	UPWARDSGAME_API AUpwardsGameBlock(const AUpwardsGameBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UPWARDSGAME_API, AUpwardsGameBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpwardsGameBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUpwardsGameBlock)


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AUpwardsGameBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AUpwardsGameBlock, BlockMesh); }


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_10_PROLOG
#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_RPC_WRAPPERS \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_INCLASS \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_INCLASS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPWARDSGAME_API UClass* StaticClass<class AUpwardsGameBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UpwardsGame_Source_UpwardsGame_UpwardsGameBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
