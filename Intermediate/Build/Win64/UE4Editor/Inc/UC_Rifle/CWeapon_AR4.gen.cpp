// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Weapons/CWeapon_AR4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon_AR4() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_AR4_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_AR4();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
// End Cross Module References
	void ACWeapon_AR4::StaticRegisterNativesACWeapon_AR4()
	{
	}
	UClass* Z_Construct_UClass_ACWeapon_AR4_NoRegister()
	{
		return ACWeapon_AR4::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_AR4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_AR4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_AR4_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/CWeapon_AR4.h" },
		{ "ModuleRelativePath", "Weapons/CWeapon_AR4.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_AR4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon_AR4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_AR4_Statics::ClassParams = {
		&ACWeapon_AR4::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_AR4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_AR4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon_AR4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWeapon_AR4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWeapon_AR4, 3159482860);
	template<> UC_RIFLE_API UClass* StaticClass<ACWeapon_AR4>()
	{
		return ACWeapon_AR4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWeapon_AR4(Z_Construct_UClass_ACWeapon_AR4, &ACWeapon_AR4::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("ACWeapon_AR4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon_AR4);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
