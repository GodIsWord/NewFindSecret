﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Hashtable
struct Hashtable_t1853889766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
