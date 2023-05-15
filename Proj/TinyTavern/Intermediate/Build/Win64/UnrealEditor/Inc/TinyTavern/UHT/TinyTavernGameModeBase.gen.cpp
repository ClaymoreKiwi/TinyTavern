// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinyTavern/TinyTavernGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinyTavernGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TINYTAVERN_API UClass* Z_Construct_UClass_ATinyTavernGameModeBase();
	TINYTAVERN_API UClass* Z_Construct_UClass_ATinyTavernGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TinyTavern();
// End Cross Module References
	void ATinyTavernGameModeBase::StaticRegisterNativesATinyTavernGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATinyTavernGameModeBase);
	UClass* Z_Construct_UClass_ATinyTavernGameModeBase_NoRegister()
	{
		return ATinyTavernGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATinyTavernGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATinyTavernGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TinyTavern,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATinyTavernGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TinyTavernGameModeBase.h" },
		{ "ModuleRelativePath", "TinyTavernGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATinyTavernGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATinyTavernGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATinyTavernGameModeBase_Statics::ClassParams = {
		&ATinyTavernGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATinyTavernGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATinyTavernGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATinyTavernGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATinyTavernGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATinyTavernGameModeBase.OuterSingleton, Z_Construct_UClass_ATinyTavernGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATinyTavernGameModeBase.OuterSingleton;
	}
	template<> TINYTAVERN_API UClass* StaticClass<ATinyTavernGameModeBase>()
	{
		return ATinyTavernGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATinyTavernGameModeBase);
	ATinyTavernGameModeBase::~ATinyTavernGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_TinyTavern_Source_TinyTavern_TinyTavernGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TinyTavern_Source_TinyTavern_TinyTavernGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATinyTavernGameModeBase, ATinyTavernGameModeBase::StaticClass, TEXT("ATinyTavernGameModeBase"), &Z_Registration_Info_UClass_ATinyTavernGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATinyTavernGameModeBase), 2897470754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TinyTavern_Source_TinyTavern_TinyTavernGameModeBase_h_1131358796(TEXT("/Script/TinyTavern"),
		Z_CompiledInDeferFile_FID_TinyTavern_Source_TinyTavern_TinyTavernGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TinyTavern_Source_TinyTavern_TinyTavernGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
