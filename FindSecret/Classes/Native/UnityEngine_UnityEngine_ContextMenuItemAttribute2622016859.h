#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute3677895545.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenuItemAttribute
struct  ContextMenuItemAttribute_t2622016859  : public PropertyAttribute_t3677895545
{
public:
	// System.String UnityEngine.ContextMenuItemAttribute::name
	String_t* ___name_1;
	// System.String UnityEngine.ContextMenuItemAttribute::function
	String_t* ___function_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ContextMenuItemAttribute_t2622016859, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_function_2() { return static_cast<int32_t>(offsetof(ContextMenuItemAttribute_t2622016859, ___function_2)); }
	inline String_t* get_function_2() const { return ___function_2; }
	inline String_t** get_address_of_function_2() { return &___function_2; }
	inline void set_function_2(String_t* value)
	{
		___function_2 = value;
		Il2CppCodeGenWriteBarrier(&___function_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
