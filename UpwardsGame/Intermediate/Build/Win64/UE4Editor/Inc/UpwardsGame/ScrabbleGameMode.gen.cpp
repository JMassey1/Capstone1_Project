// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/ScrabbleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrabbleGameMode() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AScrabbleGameMode_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AScrabbleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
// End Cross Module References
	void AScrabbleGameMode::StaticRegisterNativesAScrabbleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScrabbleGameMode_NoRegister()
	{
		return AScrabbleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScrabbleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScrabbleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScrabbleGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScrabbleGameMode.h" },
		{ "ModuleRelativePath", "ScrabbleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScrabbleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScrabbleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScrabbleGameMode_Statics::ClassParams = {
		&AScrabbleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScrabbleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScrabbleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScrabbleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScrabbleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScrabbleGameMode, 2639786502);
	template<> UPWARDSGAME_API UClass* StaticClass<AScrabbleGameMode>()
	{
		return AScrabbleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScrabbleGameMode(Z_Construct_UClass_AScrabbleGameMode, &AScrabbleGameMode::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AScrabbleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScrabbleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
