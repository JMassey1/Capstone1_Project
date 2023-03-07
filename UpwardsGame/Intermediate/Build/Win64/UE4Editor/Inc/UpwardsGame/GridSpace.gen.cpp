// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/GridSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpace() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AGridSpace_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AGridSpace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
	UPWARDSGAME_API UClass* Z_Construct_UClass_ATile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGridSpace::execGetOccupyingTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATile**)Z_Param__Result=P_THIS->GetOccupyingTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSpace::execSetOccupyingTile)
	{
		P_GET_OBJECT(ATile,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOccupyingTile(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSpace::execIsOccupied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOccupied();
		P_NATIVE_END;
	}
	void AGridSpace::StaticRegisterNativesAGridSpace()
	{
		UClass* Class = AGridSpace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOccupyingTile", &AGridSpace::execGetOccupyingTile },
			{ "IsOccupied", &AGridSpace::execIsOccupied },
			{ "SetOccupyingTile", &AGridSpace::execSetOccupyingTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics
	{
		struct GridSpace_eventGetOccupyingTile_Parms
		{
			ATile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSpace_eventGetOccupyingTile_Parms, ReturnValue), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSpace, nullptr, "GetOccupyingTile", nullptr, nullptr, sizeof(GridSpace_eventGetOccupyingTile_Parms), Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridSpace_GetOccupyingTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridSpace_GetOccupyingTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSpace_IsOccupied_Statics
	{
		struct GridSpace_eventIsOccupied_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridSpace_eventIsOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridSpace_eventIsOccupied_Parms), &Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSpace, nullptr, "IsOccupied", nullptr, nullptr, sizeof(GridSpace_eventIsOccupied_Parms), Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridSpace_IsOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridSpace_IsOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics
	{
		struct GridSpace_eventSetOccupyingTile_Parms
		{
			ATile* Tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridSpace_eventSetOccupyingTile_Parms, Tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSpace, nullptr, "SetOccupyingTile", nullptr, nullptr, sizeof(GridSpace_eventSetOccupyingTile_Parms), Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridSpace_SetOccupyingTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridSpace_SetOccupyingTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGridSpace_NoRegister()
	{
		return AGridSpace::StaticClass();
	}
	struct Z_Construct_UClass_AGridSpace_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OccupyingTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OccupyingTile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridSpace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridSpace_GetOccupyingTile, "GetOccupyingTile" }, // 98985362
		{ &Z_Construct_UFunction_AGridSpace_IsOccupied, "IsOccupied" }, // 814281151
		{ &Z_Construct_UFunction_AGridSpace_SetOccupyingTile, "SetOccupyingTile" }, // 1470902268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridSpace.h" },
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpace_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "GridSpace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSpace_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSpace, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSpace_Statics::NewProp_SceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::NewProp_SceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpace_Statics::NewProp_GridMesh_MetaData[] = {
		{ "Category", "GridSpace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSpace_Statics::NewProp_GridMesh = { "GridMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSpace, GridMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSpace_Statics::NewProp_GridMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::NewProp_GridMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpace_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "GridSpace" },
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridSpace_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSpace, GridSize), METADATA_PARAMS(Z_Construct_UClass_AGridSpace_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSpace_Statics::NewProp_OccupyingTile_MetaData[] = {
		{ "ModuleRelativePath", "GridSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSpace_Statics::NewProp_OccupyingTile = { "OccupyingTile", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridSpace, OccupyingTile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridSpace_Statics::NewProp_OccupyingTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::NewProp_OccupyingTile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSpace_Statics::NewProp_SceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSpace_Statics::NewProp_GridMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSpace_Statics::NewProp_GridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSpace_Statics::NewProp_OccupyingTile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridSpace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridSpace_Statics::ClassParams = {
		&AGridSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridSpace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridSpace, 2385458306);
	template<> UPWARDSGAME_API UClass* StaticClass<AGridSpace>()
	{
		return AGridSpace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridSpace(Z_Construct_UClass_AGridSpace, &AGridSpace::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AGridSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
