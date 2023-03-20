// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/UpwardsGameBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpwardsGameBoard() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameBoard_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AGridSpace_NoRegister();
// End Cross Module References
	void AUpwardsGameBoard::StaticRegisterNativesAUpwardsGameBoard()
	{
	}
	UClass* Z_Construct_UClass_AUpwardsGameBoard_NoRegister()
	{
		return AUpwardsGameBoard::StaticClass();
	}
	struct Z_Construct_UClass_AUpwardsGameBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSpaceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GridSpaceClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridSpaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSpaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridSpaces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpwardsGameBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpwardsGameBoard.h" },
		{ "ModuleRelativePath", "UpwardsGameBoard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaceClass_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "UpwardsGameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaceClass = { "GridSpaceClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBoard, GridSpaceClass), Z_Construct_UClass_AGridSpace_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaceClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces_Inner = { "GridSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGridSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces_MetaData[] = {
		{ "ModuleRelativePath", "UpwardsGameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces = { "GridSpaces", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGameBoard, GridSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUpwardsGameBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGameBoard_Statics::NewProp_GridSpaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGameBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGameBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGameBoard_Statics::ClassParams = {
		&AUpwardsGameBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUpwardsGameBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpwardsGameBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpwardsGameBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpwardsGameBoard, 3678712988);
	template<> UPWARDSGAME_API UClass* StaticClass<AUpwardsGameBoard>()
	{
		return AUpwardsGameBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpwardsGameBoard(Z_Construct_UClass_AUpwardsGameBoard, &AUpwardsGameBoard::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AUpwardsGameBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpwardsGameBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
