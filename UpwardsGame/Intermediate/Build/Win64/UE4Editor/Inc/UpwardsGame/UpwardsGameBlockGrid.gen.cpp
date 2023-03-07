// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/UpwardsGameBlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpwardsGameBlockGrid() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameBlockGrid_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameBlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AUpwardsGameBlockGrid::StaticRegisterNativesAUpwardsGameBlockGrid()
	{
	}
	UClass* Z_Construct_UClass_AUpwardsGameBlockGrid_NoRegister()
	{
		return AUpwardsGameBlockGrid::StaticClass();
	}
	struct Z_Construct_UClass_AUpwardsGameBlockGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Class used to spawn blocks and manage score */" },
		{ "IncludePath", "UpwardsGameBlockGrid.h" },
		{ "ModuleRelativePath", "UpwardsGameBlockGrid.h" },
		{ "ToolTip", "Class used to spawn blocks and manage score" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_DummyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Dummy root component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpwardsGameBlockGrid.h" },
		{ "ToolTip", "Dummy root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_DummyRoot = { "DummyRoot", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_DummyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_DummyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_ScoreText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "Comment", "/** Text component for the score */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UpwardsGameBlockGrid.h" },
		{ "ToolTip", "Text component for the score" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_ScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Number of blocks along each side of grid */" },
		{ "ModuleRelativePath", "UpwardsGameBlockGrid.h" },
		{ "ToolTip", "Number of blocks along each side of grid" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBlockGrid, Size), METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_BlockSpacing_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Spacing of blocks */" },
		{ "ModuleRelativePath", "UpwardsGameBlockGrid.h" },
		{ "ToolTip", "Spacing of blocks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_BlockSpacing = { "BlockSpacing", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBlockGrid, BlockSpacing), METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_BlockSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_BlockSpacing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_DummyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_ScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::NewProp_BlockSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGameBlockGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::ClassParams = {
		&AUpwardsGameBlockGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpwardsGameBlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpwardsGameBlockGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpwardsGameBlockGrid, 3321127305);
	template<> UPWARDSGAME_API UClass* StaticClass<AUpwardsGameBlockGrid>()
	{
		return AUpwardsGameBlockGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpwardsGameBlockGrid(Z_Construct_UClass_AUpwardsGameBlockGrid, &AUpwardsGameBlockGrid::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AUpwardsGameBlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpwardsGameBlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
