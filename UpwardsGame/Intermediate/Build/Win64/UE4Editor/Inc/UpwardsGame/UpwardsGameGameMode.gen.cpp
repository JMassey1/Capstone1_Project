// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/UpwardsGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpwardsGameGameMode() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameGameMode_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
// End Cross Module References
	void AUpwardsGameGameMode::StaticRegisterNativesAUpwardsGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUpwardsGameGameMode_NoRegister()
	{
		return AUpwardsGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUpwardsGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpwardsGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UpwardsGameGameMode.h" },
		{ "ModuleRelativePath", "UpwardsGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGameGameMode_Statics::ClassParams = {
		&AUpwardsGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUpwardsGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpwardsGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpwardsGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpwardsGameGameMode, 3368528049);
	template<> UPWARDSGAME_API UClass* StaticClass<AUpwardsGameGameMode>()
	{
		return AUpwardsGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpwardsGameGameMode(Z_Construct_UClass_AUpwardsGameGameMode, &AUpwardsGameGameMode::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AUpwardsGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpwardsGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
