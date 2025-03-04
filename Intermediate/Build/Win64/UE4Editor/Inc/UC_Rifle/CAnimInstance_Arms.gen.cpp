// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Characters/CAnimInstance_Arms.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance_Arms() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_UCAnimInstance_Arms_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCAnimInstance_Arms();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	UC_RIFLE_API UEnum* Z_Construct_UEnum_UC_Rifle_EWeaponType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UCAnimInstance_Arms::execOnWeaponTypeChanged)
	{
		P_GET_ENUM(EWeaponType,Z_Param_InPrevType);
		P_GET_ENUM(EWeaponType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponTypeChanged(EWeaponType(Z_Param_InPrevType),EWeaponType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	void UCAnimInstance_Arms::StaticRegisterNativesUCAnimInstance_Arms()
	{
		UClass* Class = UCAnimInstance_Arms::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnWeaponTypeChanged", &UCAnimInstance_Arms::execOnWeaponTypeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics
	{
		struct CAnimInstance_Arms_eventOnWeaponTypeChanged_Parms
		{
			EWeaponType InPrevType;
			EWeaponType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Arms_eventOnWeaponTypeChanged_Parms, InPrevType), Z_Construct_UEnum_UC_Rifle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAnimInstance_Arms_eventOnWeaponTypeChanged_Parms, InNewType), Z_Construct_UEnum_UC_Rifle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????????\xcd\xb8? ???\xce\xb5??\xcf\xb7??? Argument????\n" },
		{ "ModuleRelativePath", "Characters/CAnimInstance_Arms.h" },
		{ "ToolTip", "?????????\xcd\xb8? ???\xce\xb5??\xcf\xb7??? Argument????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCAnimInstance_Arms, nullptr, "OnWeaponTypeChanged", nullptr, nullptr, sizeof(CAnimInstance_Arms_eventOnWeaponTypeChanged_Parms), Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCAnimInstance_Arms_NoRegister()
	{
		return UCAnimInstance_Arms::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Arms_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsLeftHandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmsLeftHandTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Arms_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCAnimInstance_Arms_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCAnimInstance_Arms_OnWeaponTypeChanged, "OnWeaponTypeChanged" }, // 2711951479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Arms_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/CAnimInstance_Arms.h" },
		{ "ModuleRelativePath", "Characters/CAnimInstance_Arms.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Characters/CAnimInstance_Arms.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Arms, WeaponType), Z_Construct_UEnum_UC_Rifle_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_ArmsLeftHandTransform_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Characters/CAnimInstance_Arms.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_ArmsLeftHandTransform = { "ArmsLeftHandTransform", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance_Arms, ArmsLeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_ArmsLeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_ArmsLeftHandTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimInstance_Arms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Arms_Statics::NewProp_ArmsLeftHandTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Arms_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance_Arms>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Arms_Statics::ClassParams = {
		&UCAnimInstance_Arms::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCAnimInstance_Arms_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Arms_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Arms_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Arms_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimInstance_Arms()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimInstance_Arms_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimInstance_Arms, 3819350562);
	template<> UC_RIFLE_API UClass* StaticClass<UCAnimInstance_Arms>()
	{
		return UCAnimInstance_Arms::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimInstance_Arms(Z_Construct_UClass_UCAnimInstance_Arms, &UCAnimInstance_Arms::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("UCAnimInstance_Arms"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance_Arms);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
