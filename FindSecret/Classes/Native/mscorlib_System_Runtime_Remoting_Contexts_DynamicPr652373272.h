﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.ArrayList
struct ArrayList_t2718874744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t652373272  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t2718874744 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t652373272, ____properties_0)); }
	inline ArrayList_t2718874744 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t2718874744 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t2718874744 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier(&____properties_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
