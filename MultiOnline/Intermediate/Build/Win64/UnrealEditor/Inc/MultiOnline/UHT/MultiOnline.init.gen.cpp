// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiOnline_init() {}
	MULTIONLINE_API UFunction* Z_Construct_UDelegateFunction_MultiOnline_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiOnline;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiOnline()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiOnline.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiOnline_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiOnline",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9089085B,
				0x2DD9AAD1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiOnline.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiOnline.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiOnline(Z_Construct_UPackage__Script_MultiOnline, TEXT("/Script/MultiOnline"), Z_Registration_Info_UPackage__Script_MultiOnline, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9089085B, 0x2DD9AAD1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
