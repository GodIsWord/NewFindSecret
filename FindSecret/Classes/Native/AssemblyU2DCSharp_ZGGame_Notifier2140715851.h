﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.Observer>>
struct Dictionary_2_t3101287046;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.Notifier
struct  Notifier_t2140715851  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.Observer>> ZGGame.Notifier::observersDic
	Dictionary_2_t3101287046 * ___observersDic_0;

public:
	inline static int32_t get_offset_of_observersDic_0() { return static_cast<int32_t>(offsetof(Notifier_t2140715851, ___observersDic_0)); }
	inline Dictionary_2_t3101287046 * get_observersDic_0() const { return ___observersDic_0; }
	inline Dictionary_2_t3101287046 ** get_address_of_observersDic_0() { return &___observersDic_0; }
	inline void set_observersDic_0(Dictionary_2_t3101287046 * value)
	{
		___observersDic_0 = value;
		Il2CppCodeGenWriteBarrier(&___observersDic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
