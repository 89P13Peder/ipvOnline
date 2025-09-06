// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiOnlineGameMode.h"

#ifdef MULTIONLINE_MultiOnlineGameMode_generated_h
#error "MultiOnlineGameMode.generated.h already included, missing '#pragma once' in MultiOnlineGameMode.h"
#endif
#define MULTIONLINE_MultiOnlineGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMultiOnlineGameMode *****************************************************
MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineGameMode_NoRegister();

#define FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiOnlineGameMode(); \
	friend struct Z_Construct_UClass_AMultiOnlineGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMultiOnlineGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiOnline"), Z_Construct_UClass_AMultiOnlineGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMultiOnlineGameMode)


#define FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMultiOnlineGameMode(AMultiOnlineGameMode&&) = delete; \
	AMultiOnlineGameMode(const AMultiOnlineGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiOnlineGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiOnlineGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMultiOnlineGameMode) \
	NO_API virtual ~AMultiOnlineGameMode();


#define FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_12_PROLOG
#define FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMultiOnlineGameMode;

// ********** End Class AMultiOnlineGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiOnline_Source_MultiOnline_MultiOnlineGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
