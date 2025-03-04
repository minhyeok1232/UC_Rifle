// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Weapons/CWeapon_AK47.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeapon_AK47() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_AK47_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon_AK47();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACWeapon();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACWeapon_AK47::StaticRegisterNativesACWeapon_AK47()
	{
	}
	UClass* Z_Construct_UClass_ACWeapon_AK47_NoRegister()
	{
		return ACWeapon_AK47::StaticClass();
	}
	struct Z_Construct_UClass_ACWeapon_AK47_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWeapon_AK47_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_AK47_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/CWeapon_AK47.h" },
		{ "ModuleRelativePath", "Weapons/CWeapon_AK47.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_Sight_MetaData[] = {
		{ "Category", "CWeapon_AK47" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CWeapon_AK47.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon_AK47, Sight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_Sight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_Sight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Weapons/CWeapon_AK47.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWeapon_AK47, LeftHandSocketName), METADATA_PARAMS(Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_LeftHandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_LeftHandSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACWeapon_AK47_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_Sight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWeapon_AK47_Statics::NewProp_LeftHandSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWeapon_AK47_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWeapon_AK47>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWeapon_AK47_Statics::ClassParams = {
		&ACWeapon_AK47::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACWeapon_AK47_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_AK47_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACWeapon_AK47_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWeapon_AK47_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWeapon_AK47()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWeapon_AK47_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWeapon_AK47, 1917930169);
	template<> UC_RIFLE_API UClass* StaticClass<ACWeapon_AK47>()
	{
		return ACWeapon_AK47::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWeapon_AK47(Z_Construct_UClass_ACWeapon_AK47, &ACWeapon_AK47::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("ACWeapon_AK47"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWeapon_AK47);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
