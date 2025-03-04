// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Widgets/CUserWidget_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_HUD() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_UCUserWidget_HUD_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCUserWidget_HUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
	UC_RIFLE_API UEnum* Z_Construct_UEnum_UC_Rifle_EWeaponType();
// End Cross Module References
	static FName NAME_UCUserWidget_HUD_OffAutoFire = FName(TEXT("OffAutoFire"));
	void UCUserWidget_HUD::OffAutoFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HUD_OffAutoFire),NULL);
	}
	static FName NAME_UCUserWidget_HUD_OnAutoFire = FName(TEXT("OnAutoFire"));
	void UCUserWidget_HUD::OnAutoFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HUD_OnAutoFire),NULL);
	}
	static FName NAME_UCUserWidget_HUD_UpdateMagzine = FName(TEXT("UpdateMagzine"));
	void UCUserWidget_HUD::UpdateMagzine(uint8 InCurr, uint8 InMax)
	{
		CUserWidget_HUD_eventUpdateMagzine_Parms Parms;
		Parms.InCurr=InCurr;
		Parms.InMax=InMax;
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HUD_UpdateMagzine),&Parms);
	}
	static FName NAME_UCUserWidget_HUD_UpdateWeaponType = FName(TEXT("UpdateWeaponType"));
	void UCUserWidget_HUD::UpdateWeaponType(EWeaponType InType)
	{
		CUserWidget_HUD_eventUpdateWeaponType_Parms Parms;
		Parms.InType=InType;
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HUD_UpdateWeaponType),&Parms);
	}
	static FName NAME_UCUserWidget_HUD_UpdatNoWeapon = FName(TEXT("UpdatNoWeapon"));
	void UCUserWidget_HUD::UpdatNoWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_HUD_UpdatNoWeapon),NULL);
	}
	void UCUserWidget_HUD::StaticRegisterNativesUCUserWidget_HUD()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HUD, nullptr, "OffAutoFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// C???? ?????\xd4\xbc? ?????? B/P?\xcb\xbe\xc6\xbc? ??????\n" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
		{ "ToolTip", "C???? ?????\xd4\xbc? ?????? B/P?\xcb\xbe\xc6\xbc? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HUD, nullptr, "OnAutoFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCurr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::NewProp_InCurr = { "InCurr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_HUD_eventUpdateMagzine_Parms, InCurr), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::NewProp_InMax = { "InMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_HUD_eventUpdateMagzine_Parms, InMax), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::NewProp_InCurr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::NewProp_InMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HUD, nullptr, "UpdateMagzine", nullptr, nullptr, sizeof(CUserWidget_HUD_eventUpdateMagzine_Parms), Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_HUD_eventUpdateWeaponType_Parms, InType), Z_Construct_UEnum_UC_Rifle_EWeaponType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::NewProp_InType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HUD, nullptr, "UpdateWeaponType", nullptr, nullptr, sizeof(CUserWidget_HUD_eventUpdateWeaponType_Parms), Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_HUD, nullptr, "UpdatNoWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_HUD_NoRegister()
	{
		return UCUserWidget_HUD::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_HUD_OffAutoFire, "OffAutoFire" }, // 346086363
		{ &Z_Construct_UFunction_UCUserWidget_HUD_OnAutoFire, "OnAutoFire" }, // 1283993132
		{ &Z_Construct_UFunction_UCUserWidget_HUD_UpdateMagzine, "UpdateMagzine" }, // 3430310907
		{ &Z_Construct_UFunction_UCUserWidget_HUD_UpdateWeaponType, "UpdateWeaponType" }, // 1027776801
		{ &Z_Construct_UFunction_UCUserWidget_HUD_UpdatNoWeapon, "UpdatNoWeapon" }, // 1625021574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Weapon,WeaponComponent\n * \n */" },
		{ "IncludePath", "Widgets/CUserWidget_HUD.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_HUD.h" },
		{ "ToolTip", "Weapon,WeaponComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_HUD_Statics::ClassParams = {
		&UCUserWidget_HUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_HUD, 2694190901);
	template<> UC_RIFLE_API UClass* StaticClass<UCUserWidget_HUD>()
	{
		return UCUserWidget_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_HUD(Z_Construct_UClass_UCUserWidget_HUD, &UCUserWidget_HUD::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("UCUserWidget_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
