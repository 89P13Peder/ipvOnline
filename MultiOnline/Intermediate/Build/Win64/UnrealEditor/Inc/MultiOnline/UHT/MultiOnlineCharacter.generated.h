// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiOnlineCharacter.h"

#ifdef MULTIONLINE_MultiOnlineCharacter_generated_h
#error "MultiOnlineCharacter.generated.h already included, missing '#pragma once' in MultiOnlineCharacter.h"
#endif
#define MULTIONLINE_MultiOnlineCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMultiOnlineCharacter ****************************************************
#define FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineCharacter_NoRegister();

#define FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiOnlineCharacter(); \
	friend struct Z_Construct_UClass_AMultiOnlineCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIONLINE_API UClass* Z_Construct_UClass_AMultiOnlineCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMultiOnlineCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiOnline"), Z_Construct_UClass_AMultiOnlineCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMultiOnlineCharacter)


#define FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMultiOnlineCharacter(AMultiOnlineCharacter&&) = delete; \
	AMultiOnlineCharacter(const AMultiOnlineCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiOnlineCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiOnlineCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AMultiOnlineCharacter) \
	NO_API virtual ~AMultiOnlineCharacter();


#define FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_21_PROLOG
#define FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMultiOnlineCharacter;

// ********** End Class AMultiOnlineCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiOnline_Source_MultiOnline_MultiOnlineCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
