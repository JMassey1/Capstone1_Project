// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpwardsGame/UpwardsGamePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpwardsGamePawn() {}
// Cross Module References
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGamePawn_NoRegister();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGamePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UpwardsGame();
	UPWARDSGAME_API UClass* Z_Construct_UClass_AUpwardsGameBlock_NoRegister();
// End Cross Module References
	void AUpwardsGamePawn::StaticRegisterNativesAUpwardsGamePawn()
	{
	}
	UClass* Z_Construct_UClass_AUpwardsGamePawn_NoRegister()
	{
		return AUpwardsGamePawn::StaticClass();
	}
	struct Z_Construct_UClass_AUpwardsGamePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpwardsGamePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UpwardsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGamePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UpwardsGamePawn.h" },
		{ "ModuleRelativePath", "UpwardsGamePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpwardsGamePawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "UpwardsGamePawn" },
		{ "ModuleRelativePath", "UpwardsGamePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpwardsGamePawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpwardsGamePawn, CurrentBlockFocus), Z_Construct_UClass_AUpwardsGameBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUpwardsGamePawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGamePawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUpwardsGamePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpwardsGamePawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpwardsGamePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpwardsGamePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpwardsGamePawn_Statics::ClassParams = {
		&AUpwardsGamePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUpwardsGamePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGamePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpwardsGamePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpwardsGamePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpwardsGamePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpwardsGamePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpwardsGamePawn, 2949026483);
	template<> UPWARDSGAME_API UClass* StaticClass<AUpwardsGamePawn>()
	{
		return AUpwardsGamePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpwardsGamePawn(Z_Construct_UClass_AUpwardsGamePawn, &AUpwardsGamePawn::StaticClass, TEXT("/Script/UpwardsGame"), TEXT("AUpwardsGamePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpwardsGamePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
