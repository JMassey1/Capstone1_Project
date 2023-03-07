// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridSpace;
#ifdef UPWARDSGAME_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define UPWARDSGAME_Tile_generated_h

#define UpwardsGame_Source_UpwardsGame_Tile_h_14_SPARSE_DATA
#define UpwardsGame_Source_UpwardsGame_Tile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaceOnGridSpace); \
	DECLARE_FUNCTION(execPickUp);


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaceOnGridSpace); \
	DECLARE_FUNCTION(execPickUp);


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UpwardsGame"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneRoot() { return STRUCT_OFFSET(ATile, SceneRoot); } \
	FORCEINLINE static uint32 __PPO__TileMesh() { return STRUCT_OFFSET(ATile, TileMesh); } \
	FORCEINLINE static uint32 __PPO__TileSize() { return STRUCT_OFFSET(ATile, TileSize); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(ATile, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__LaunchAngle() { return STRUCT_OFFSET(ATile, LaunchAngle); } \
	FORCEINLINE static uint32 __PPO__CurrentGridSpace() { return STRUCT_OFFSET(ATile, CurrentGridSpace); }


#define UpwardsGame_Source_UpwardsGame_Tile_h_11_PROLOG
#define UpwardsGame_Source_UpwardsGame_Tile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_RPC_WRAPPERS \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_INCLASS \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UpwardsGame_Source_UpwardsGame_Tile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_PRIVATE_PROPERTY_OFFSET \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_SPARSE_DATA \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_INCLASS_NO_PURE_DECLS \
	UpwardsGame_Source_UpwardsGame_Tile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPWARDSGAME_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UpwardsGame_Source_UpwardsGame_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
