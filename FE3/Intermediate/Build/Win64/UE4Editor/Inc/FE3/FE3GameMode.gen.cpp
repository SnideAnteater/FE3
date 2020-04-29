// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FE3/FE3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFE3GameMode() {}
// Cross Module References
	FE3_API UClass* Z_Construct_UClass_AFE3GameMode_NoRegister();
	FE3_API UClass* Z_Construct_UClass_AFE3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FE3();
// End Cross Module References
	void AFE3GameMode::StaticRegisterNativesAFE3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AFE3GameMode_NoRegister()
	{
		return AFE3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFE3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFE3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FE3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFE3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FE3GameMode.h" },
		{ "ModuleRelativePath", "FE3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFE3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFE3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFE3GameMode_Statics::ClassParams = {
		&AFE3GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AFE3GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFE3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFE3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFE3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFE3GameMode, 4108175910);
	template<> FE3_API UClass* StaticClass<AFE3GameMode>()
	{
		return AFE3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFE3GameMode(Z_Construct_UClass_AFE3GameMode, &AFE3GameMode::StaticClass, TEXT("/Script/FE3"), TEXT("AFE3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFE3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
