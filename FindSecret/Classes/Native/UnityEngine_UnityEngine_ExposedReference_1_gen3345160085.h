#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_PropertyName3749835189.h"

// UnityEngine.Object
struct Object_t631007953;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t3345160085 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t3749835189  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_t631007953 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t3345160085, ___exposedName_0)); }
	inline PropertyName_t3749835189  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t3749835189 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t3749835189  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t3345160085, ___defaultValue_1)); }
	inline Object_t631007953 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_t631007953 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_t631007953 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
