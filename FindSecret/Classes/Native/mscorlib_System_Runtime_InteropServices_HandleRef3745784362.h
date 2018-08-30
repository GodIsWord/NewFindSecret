#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_IntPtr840150181.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t3745784362 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::wrapper
	Il2CppObject * ___wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::handle
	IntPtr_t ___handle_1;

public:
	inline static int32_t get_offset_of_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___wrapper_0)); }
	inline Il2CppObject * get_wrapper_0() const { return ___wrapper_0; }
	inline Il2CppObject ** get_address_of_wrapper_0() { return &___wrapper_0; }
	inline void set_wrapper_0(Il2CppObject * value)
	{
		___wrapper_0 = value;
		Il2CppCodeGenWriteBarrier(&___wrapper_0, value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
