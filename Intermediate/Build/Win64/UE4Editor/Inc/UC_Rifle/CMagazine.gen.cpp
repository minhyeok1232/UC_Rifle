// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Weapons/CMagazine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMagazine() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_ACMagazine_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_ACMagazine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACMagazine::StaticRegisterNativesACMagazine()
	{
	}
	UClass* Z_Construct_UClass_ACMagazine_NoRegister()
	{
		return ACMagazine::StaticClass();
	}
	struct Z_Construct_UClass_ACMagazine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_Full_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Full;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_Empty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh_Empty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMagazine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMagazine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// \xc5\xba\xc3\xa2 : \n" },
		{ "IncludePath", "Weapons/CMagazine.h" },
		{ "ModuleRelativePath", "Weapons/CMagazine.h" },
		{ "ToolTip", "\xc5\xba\xc3\xa2 :" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMagazine_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CMagazine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMagazine_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMagazine, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMagazine_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMagazine_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Full_MetaData[] = {
		{ "Category", "CMagazine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Full = { "Mesh_Full", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMagazine, Mesh_Full), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Full_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Full_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Empty_MetaData[] = {
		{ "Category", "CMagazine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/CMagazine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Empty = { "Mesh_Empty", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMagazine, Mesh_Empty), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Empty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Empty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACMagazine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMagazine_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Full,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMagazine_Statics::NewProp_Mesh_Empty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMagazine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMagazine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACMagazine_Statics::ClassParams = {
		&ACMagazine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACMagazine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACMagazine_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACMagazine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACMagazine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMagazine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACMagazine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACMagazine, 1587305196);
	template<> UC_RIFLE_API UClass* StaticClass<ACMagazine>()
	{
		return ACMagazine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACMagazine(Z_Construct_UClass_ACMagazine, &ACMagazine::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("ACMagazine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMagazine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
