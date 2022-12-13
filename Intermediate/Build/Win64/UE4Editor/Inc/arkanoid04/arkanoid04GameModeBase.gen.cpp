// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/arkanoid04GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodearkanoid04GameModeBase() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_Aarkanoid04GameModeBase_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_Aarkanoid04GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
	ARKANOID04_API UClass* Z_Construct_UClass_APaddle_NoRegister();
// End Cross Module References
	void Aarkanoid04GameModeBase::StaticRegisterNativesAarkanoid04GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aarkanoid04GameModeBase_NoRegister()
	{
		return Aarkanoid04GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aarkanoid04GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Paddle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "arkanoid04GameModeBase.h" },
		{ "ModuleRelativePath", "arkanoid04GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::NewProp_Paddle_MetaData[] = {
		{ "Comment", "//The Inventory of this Actor\n" },
		{ "ModuleRelativePath", "arkanoid04GameModeBase.h" },
		{ "ToolTip", "The Inventory of this Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aarkanoid04GameModeBase, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::NewProp_Paddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::NewProp_Paddle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::NewProp_Paddle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aarkanoid04GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::ClassParams = {
		&Aarkanoid04GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aarkanoid04GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aarkanoid04GameModeBase, 3584798339);
	template<> ARKANOID04_API UClass* StaticClass<Aarkanoid04GameModeBase>()
	{
		return Aarkanoid04GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aarkanoid04GameModeBase(Z_Construct_UClass_Aarkanoid04GameModeBase, &Aarkanoid04GameModeBase::StaticClass, TEXT("/Script/arkanoid04"), TEXT("Aarkanoid04GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aarkanoid04GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
