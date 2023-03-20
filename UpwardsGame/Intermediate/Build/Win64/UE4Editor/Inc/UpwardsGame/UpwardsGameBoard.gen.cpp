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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGameBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGameBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGameBoard_Statics::ClassParams = {
		&AUpwardsGameBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AUpwardsGameBoard, 3282035635);
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
