// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_ATile_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AGridSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATile::execPlaceOnGridSpace)
	{
		P_GET_OBJECT(AGridSpace,Z_Param_GridSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceOnGridSpace(Z_Param_GridSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp();
		P_NATIVE_END;
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickUp", &ATile::execPickUp },
			{ "PlaceOnGridSpace", &ATile::execPlaceOnGridSpace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_PickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics
	{
		struct Tile_eventPlaceOnGridSpace_Parms
		{
			AGridSpace* GridSpace;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::NewProp_GridSpace = { "GridSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventPlaceOnGridSpace_Parms, GridSpace), Z_Construct_UClass_AGridSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::NewProp_GridSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "PlaceOnGridSpace", nullptr, nullptr, sizeof(Tile_eventPlaceOnGridSpace_Parms), Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_PlaceOnGridSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_PlaceOnGridSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGridSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentGridSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_PickUp, "PickUp" }, // 4114392835
		{ &Z_Construct_UFunction_ATile_PlaceOnGridSpace, "PlaceOnGridSpace" }, // 679598425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_TileMesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, TileSize), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_LaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_LaunchAngle_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_LaunchAngle = { "LaunchAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, LaunchAngle), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_LaunchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_LaunchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_CurrentGridSpace_MetaData[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_CurrentGridSpace = { "CurrentGridSpace", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, CurrentGridSpace), Z_Construct_UClass_AGridSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_CurrentGridSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_CurrentGridSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_LaunchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_CurrentGridSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 3795699963);
	template<> UPWARDSGAME_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("ATile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
