// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UC_Rifle/Widgets/CUserWidget_CrossHair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_CrossHair() {}
// Cross Module References
	UC_RIFLE_API UClass* Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister();
	UC_RIFLE_API UClass* Z_Construct_UClass_UCUserWidget_CrossHair();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UC_Rifle();
// End Cross Module References
	void UCUserWidget_CrossHair::StaticRegisterNativesUCUserWidget_CrossHair()
	{
	}
	UClass* Z_Construct_UClass_UCUserWidget_CrossHair_NoRegister()
	{
		return UCUserWidget_CrossHair::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_CrossHair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_CrossHair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UC_Rifle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  ABP\xc3\xb3??, ???\xe9\xb6\xa7 Parent?? ?????\xd1\xb4?\n */" },
		{ "IncludePath", "Widgets/CUserWidget_CrossHair.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_CrossHair.h" },
		{ "ToolTip", "ABP\xc3\xb3??, ???\xe9\xb6\xa7 Parent?? ?????\xd1\xb4?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_CrossHair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_CrossHair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_CrossHair_Statics::ClassParams = {
		&UCUserWidget_CrossHair::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_CrossHair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_CrossHair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_CrossHair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_CrossHair, 2760189424);
	template<> UC_RIFLE_API UClass* StaticClass<UCUserWidget_CrossHair>()
	{
		return UCUserWidget_CrossHair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_CrossHair(Z_Construct_UClass_UCUserWidget_CrossHair, &UCUserWidget_CrossHair::StaticClass, TEXT("/Script/UC_Rifle"), TEXT("UCUserWidget_CrossHair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_CrossHair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
