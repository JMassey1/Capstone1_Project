// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
#ifdef UPWARDSGAME_GridSpace_generated_h
#error "GridSpace.generated.h already included, missing '#pragma once' in GridSpace.h"
#endif
#define UPWARDSGAME_GridSpace_generated_h

#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_SPARSE_DATA
#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOccupyingTile); \
	DECLARE_FUNCTION(execSetOccupyingTile); \
	DECLARE_FUNCTION(execIsOccupied);


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOccupyingTile); \
	DECLARE_FUNCTION(execSetOccupyingTile); \
	DECLARE_FUNCTION(execIsOccupied);


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridSpace(); \
	friend struct Z_Construct_UClass_AGridSpace_Statics; \
public: \
	DECLARE_CLASS(AGridSpace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(AGridSpace)


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGridSpace(); \
	friend struct Z_Construct_UClass_AGridSpace_Statics; \
public: \
	DECLARE_CLASS(AGridSpace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(AGridSpace)


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridSpace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridSpace(AGridSpace&&); \
	NO_API AGridSpace(const AGridSpace&); \
public:


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridSpace(AGridSpace&&); \
	NO_API AGridSpace(const AGridSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridSpace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridSpace)


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(AGridSpace, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__GridMesh() { return STRUCT_OFFSET(AGridSpace, GridMesh); } \
	FORCEINLINE static uint32 __PPO__GridSize() { return STRUCT_OFFSET(AGridSpace, GridSize); } \
	FORCEINLINE static uint32 __PPO__OccupyingTile() { return STRUCT_OFFSET(AGridSpace, OccupyingTile); }


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_11_PROLOG
#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_RPC_WRAPPERS \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_INCLASS \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UpwardsGame_Source_UpwardsGame_GridSpace_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_INCLASS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_GridSpace_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPWARDSGAME_API UClass* StaticClass<class AGridSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UpwardsGame_Source_UpwardsGame_GridSpace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
