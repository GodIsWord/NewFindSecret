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

// System.ByteMatcher
struct  ByteMatcher_t2129355737  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.ByteMatcher::map
	Hashtable_t1853889766 * ___map_0;
	// System.Collections.Hashtable System.ByteMatcher::starts
	Hashtable_t1853889766 * ___starts_1;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___map_0)); }
	inline Hashtable_t1853889766 * get_map_0() const { return ___map_0; }
	inline Hashtable_t1853889766 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(Hashtable_t1853889766 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier(&___map_0, value);
	}

	inline static int32_t get_offset_of_starts_1() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___starts_1)); }
	inline Hashtable_t1853889766 * get_starts_1() const { return ___starts_1; }
	inline Hashtable_t1853889766 ** get_address_of_starts_1() { return &___starts_1; }
	inline void set_starts_1(Hashtable_t1853889766 * value)
	{
		___starts_1 = value;
		Il2CppCodeGenWriteBarrier(&___starts_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
