// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/UpwardsGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpwardsGamePlayerController() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGamePlayerController_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
// End Cross Module References
	void AUpwardsGamePlayerController::StaticRegisterNativesAUpwardsGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUpwardsGamePlayerController_NoRegister()
	{
		return AUpwardsGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUpwardsGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpwardsGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UpwardsGamePlayerController.h" },
		{ "ModuleRelativePath", "UpwardsGamePlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGamePlayerController_Statics::ClassParams = {
		&AUpwardsGamePlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpwardsGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpwardsGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpwardsGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpwardsGamePlayerController, 1974068005);
	template<> UPWARDSGAME_API UClass* StaticClass<AUpwardsGamePlayerController>()
	{
		return AUpwardsGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpwardsGamePlayerController(Z_Construct_UClass_AUpwardsGamePlayerController, &AUpwardsGamePlayerController::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AUpwardsGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpwardsGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
