// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/CAnimNotify_Reload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_Reload() {}
// Cross Module References
	UC_RIFLE_API UEnum* Z_Construct_UEnum_UC_Rifle_ERoadActionType();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCAnimNotify_Reload_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCAnimNotify_Reload();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
// End Cross Module References
	static UEnum* ERoadActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UC_Rifle_ERoadActionType, Z_Construct_UPackage__Script_UC_Rifle(), TEXT("ERoadActionType"));
		}
		return Singleton;
	}
	template<> UC_RIFLE_API UEnum* StaticEnum<ERoadActionType>()
	{
		return ERoadActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoadActionType(ERoadActionType_StaticEnum, TEXT("/Script/UC_Rifle"), TEXT("ERoadActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UC_Rifle_ERoadActionType_Hash() { return 4050870034U; }
	UEnum* Z_Construct_UEnum_UC_Rifle_ERoadActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UC_Rifle();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoadActionType"), 0, Get_Z_Construct_UEnum_UC_Rifle_ERoadActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERoadActionType::Eject", (int64)ERoadActionType::Eject },
				{ "ERoadActionType::Spawn", (int64)ERoadActionType::Spawn },
				{ "ERoadActionType::Load", (int64)ERoadActionType::Load },
				{ "ERoadActionType::End", (int64)ERoadActionType::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Eject.Name", "ERoadActionType::Eject" },
				{ "End.Name", "ERoadActionType::End" },
				{ "Load.Name", "ERoadActionType::Load" },
				{ "ModuleRelativePath", "CAnimNotify_Reload.h" },
				{ "Spawn.Name", "ERoadActionType::Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UC_Rifle,
				nullptr,
				"ERoadActionType",
				"ERoadActionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCAnimNotify_Reload::StaticRegisterNativesUCAnimNotify_Reload()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_Reload_NoRegister()
	{
		return UCAnimNotify_Reload::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_Reload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_Reload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_Reload_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "CAnimNotify_Reload.h" },
		{ "ModuleRelativePath", "CAnimNotify_Reload.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "CAnimNotify_Reload.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0040000000000011, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimNotify_Reload, ActionType), Z_Construct_UEnum_UC_Rifle_ERoadActionType, METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimNotify_Reload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_Reload_Statics::NewProp_ActionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_Reload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_Reload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_Reload_Statics::ClassParams = {
		&UCAnimNotify_Reload::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimNotify_Reload_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_Reload_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_Reload_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_Reload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_Reload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_Reload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_Reload, 3099891082);
	template<> UC_RIFLE_API UClass* StaticClass<UCAnimNotify_Reload>()
	{
		return UCAnimNotify_Reload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_Reload(Z_Construct_UClass_UCAnimNotify_Reload, &UCAnimNotify_Reload::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("UCAnimNotify_Reload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_Reload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
