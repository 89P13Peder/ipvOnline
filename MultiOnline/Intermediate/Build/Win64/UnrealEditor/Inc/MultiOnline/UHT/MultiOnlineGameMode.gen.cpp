// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiOnlineGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiOnlineGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineGameMode();
MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiOnline();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMultiOnlineGameMode *****************************************************
void AMultiOnlineGameMode::StaticRegisterNativesAMultiOnlineGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMultiOnlineGameMode;
UClass* AMultiOnlineGameMode::GetPrivateStaticClass()
{
	using TClass = AMultiOnlineGameMode;
	if (!Z_Registration_Info_UClass_AMultiOnlineGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiOnlineGameMode"),
			Z_Registration_Info_UClass_AMultiOnlineGameMode.InnerSingleton,
			StaticRegisterNativesAMultiOnlineGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMultiOnlineGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMultiOnlineGameMode_NoRegister()
{
	return AMultiOnlineGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMultiOnlineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiOnlineGameMode.h" },
		{ "ModuleRelativePath", "MultiOnlineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiOnlineGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiOnlineGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiOnlineGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiOnlineGameMode_Statics::ClassParams = {
	&AMultiOnlineGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiOnlineGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiOnlineGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiOnlineGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiOnlineGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiOnlineGameMode.OuterSingleton, Z_Construct_UClass_AMultiOnlineGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiOnlineGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiOnlineGameMode);
AMultiOnlineGameMode::~AMultiOnlineGameMode() {}
// ********** End Class AMultiOnlineGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h__Script_MultiOnline_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiOnlineGameMode, AMultiOnlineGameMode::StaticClass, TEXT("AMultiOnlineGameMode"), &Z_Registration_Info_UClass_AMultiOnlineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiOnlineGameMode), 3996841608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h__Script_MultiOnline_172366872(TEXT("/Script/MultiOnline"),
	Z_CompiledInDeferFile_FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h__Script_MultiOnline_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h__Script_MultiOnline_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
