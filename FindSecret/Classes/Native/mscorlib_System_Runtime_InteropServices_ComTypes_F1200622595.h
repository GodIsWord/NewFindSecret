#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComTypes.FILETIME
struct  FILETIME_t1200622595 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwLowDateTime
	int32_t ___dwLowDateTime_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwHighDateTime
	int32_t ___dwHighDateTime_1;

public:
	inline static int32_t get_offset_of_dwLowDateTime_0() { return static_cast<int32_t>(offsetof(FILETIME_t1200622595, ___dwLowDateTime_0)); }
	inline int32_t get_dwLowDateTime_0() const { return ___dwLowDateTime_0; }
	inline int32_t* get_address_of_dwLowDateTime_0() { return &___dwLowDateTime_0; }
	inline void set_dwLowDateTime_0(int32_t value)
	{
		___dwLowDateTime_0 = value;
	}

	inline static int32_t get_offset_of_dwHighDateTime_1() { return static_cast<int32_t>(offsetof(FILETIME_t1200622595, ___dwHighDateTime_1)); }
	inline int32_t get_dwHighDateTime_1() const { return ___dwHighDateTime_1; }
	inline int32_t* get_address_of_dwHighDateTime_1() { return &___dwHighDateTime_1; }
	inline void set_dwHighDateTime_1(int32_t value)
	{
		___dwHighDateTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
