#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t3749995458;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t726654767;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidationState
struct  XsdValidationState_t376578997  : public Il2CppObject
{
public:
	// System.Int32 Mono.Xml.Schema.XsdValidationState::occured
	int32_t ___occured_1;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::manager
	XsdParticleStateManager_t726654767 * ___manager_2;

public:
	inline static int32_t get_offset_of_occured_1() { return static_cast<int32_t>(offsetof(XsdValidationState_t376578997, ___occured_1)); }
	inline int32_t get_occured_1() const { return ___occured_1; }
	inline int32_t* get_address_of_occured_1() { return &___occured_1; }
	inline void set_occured_1(int32_t value)
	{
		___occured_1 = value;
	}

	inline static int32_t get_offset_of_manager_2() { return static_cast<int32_t>(offsetof(XsdValidationState_t376578997, ___manager_2)); }
	inline XsdParticleStateManager_t726654767 * get_manager_2() const { return ___manager_2; }
	inline XsdParticleStateManager_t726654767 ** get_address_of_manager_2() { return &___manager_2; }
	inline void set_manager_2(XsdParticleStateManager_t726654767 * value)
	{
		___manager_2 = value;
		Il2CppCodeGenWriteBarrier(&___manager_2, value);
	}
};

struct XsdValidationState_t376578997_StaticFields
{
public:
	// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::invalid
	XsdInvalidValidationState_t3749995458 * ___invalid_0;

public:
	inline static int32_t get_offset_of_invalid_0() { return static_cast<int32_t>(offsetof(XsdValidationState_t376578997_StaticFields, ___invalid_0)); }
	inline XsdInvalidValidationState_t3749995458 * get_invalid_0() const { return ___invalid_0; }
	inline XsdInvalidValidationState_t3749995458 ** get_address_of_invalid_0() { return &___invalid_0; }
	inline void set_invalid_0(XsdInvalidValidationState_t3749995458 * value)
	{
		___invalid_0 = value;
		Il2CppCodeGenWriteBarrier(&___invalid_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
