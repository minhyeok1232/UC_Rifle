// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Weapons/CWeapon_Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon_Pistol() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_Pistol_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_Pistol();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
// End Cross Module References
	void ACWeapon_Pistol::StaticRegisterNativesACWeapon_Pistol()
	{
	}
	UClass* Z_Construct_UClass_ACWeapon_Pistol_NoRegister()
	{
		return ACWeapon_Pistol::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_Pistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_Pistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_Pistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/CWeapon_Pistol.h" },
		{ "ModuleRelativePath", "Weapons/CWeapon_Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_Pistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon_Pistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_Pistol_Statics::ClassParams = {
		&ACWeapon_Pistol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_Pistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_Pistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon_Pistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWeapon_Pistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWeapon_Pistol, 245660929);
	template<> UC_RIFLE_API UClass* StaticClass<ACWeapon_Pistol>()
	{
		return ACWeapon_Pistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWeapon_Pistol(Z_Construct_UClass_ACWeapon_Pistol, &ACWeapon_Pistol::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("ACWeapon_Pistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon_Pistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
