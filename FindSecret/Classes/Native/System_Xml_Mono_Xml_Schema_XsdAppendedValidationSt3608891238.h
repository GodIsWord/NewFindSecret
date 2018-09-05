#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_Mono_Xml_Schema_XsdValidationState376578997.h"

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t376578997;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdAppendedValidationState
struct  XsdAppendedValidationState_t3608891238  : public XsdValidationState_t376578997
{
public:
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::head
	XsdValidationState_t376578997 * ___head_3;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::rest
	XsdValidationState_t376578997 * ___rest_4;

public:
	inline static int32_t get_offset_of_head_3() { return static_cast<int32_t>(offsetof(XsdAppendedValidationState_t3608891238, ___head_3)); }
	inline XsdValidationState_t376578997 * get_head_3() const { return ___head_3; }
	inline XsdValidationState_t376578997 ** get_address_of_head_3() { return &___head_3; }
	inline void set_head_3(XsdValidationState_t376578997 * value)
	{
		___head_3 = value;
		Il2CppCodeGenWriteBarrier(&___head_3, value);
	}

	inline static int32_t get_offset_of_rest_4() { return static_cast<int32_t>(offsetof(XsdAppendedValidationState_t3608891238, ___rest_4)); }
	inline XsdValidationState_t376578997 * get_rest_4() const { return ___rest_4; }
	inline XsdValidationState_t376578997 ** get_address_of_rest_4() { return &___rest_4; }
	inline void set_rest_4(XsdValidationState_t376578997 * value)
	{
		___rest_4 = value;
		Il2CppCodeGenWriteBarrier(&___rest_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
