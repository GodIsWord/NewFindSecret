#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.IPool>>
struct Dictionary_2_t1883624761;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ObjectPool
struct  ObjectPool_t2599189628  : public Il2CppObject
{
public:

public:
};

struct ObjectPool_t2599189628_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ZGGame.IPool>> ZGGame.ObjectPool::pool
	Dictionary_2_t1883624761 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_t2599189628_StaticFields, ___pool_0)); }
	inline Dictionary_2_t1883624761 * get_pool_0() const { return ___pool_0; }
	inline Dictionary_2_t1883624761 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(Dictionary_2_t1883624761 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
