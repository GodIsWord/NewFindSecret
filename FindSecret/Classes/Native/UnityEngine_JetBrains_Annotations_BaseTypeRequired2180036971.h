#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute861562559.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JetBrains.Annotations.BaseTypeRequiredAttribute
struct  BaseTypeRequiredAttribute_t2180036971  : public Attribute_t861562559
{
public:
	// System.Type JetBrains.Annotations.BaseTypeRequiredAttribute::<BaseType>k__BackingField
	Type_t * ___U3CBaseTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBaseTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseTypeRequiredAttribute_t2180036971, ___U3CBaseTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CBaseTypeU3Ek__BackingField_0() const { return ___U3CBaseTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CBaseTypeU3Ek__BackingField_0() { return &___U3CBaseTypeU3Ek__BackingField_0; }
	inline void set_U3CBaseTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CBaseTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBaseTypeU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
