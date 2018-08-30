#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.DateTime,System.Collections.Generic.List`1<CallLaterUtil/laterCallback>>
struct Dictionary_2_t1964327212;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CallLaterUtil
struct  CallLaterUtil_t930640046  : public Il2CppObject
{
public:

public:
};

struct CallLaterUtil_t930640046_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.DateTime,System.Collections.Generic.List`1<CallLaterUtil/laterCallback>> CallLaterUtil::dicCallback
	Dictionary_2_t1964327212 * ___dicCallback_0;

public:
	inline static int32_t get_offset_of_dicCallback_0() { return static_cast<int32_t>(offsetof(CallLaterUtil_t930640046_StaticFields, ___dicCallback_0)); }
	inline Dictionary_2_t1964327212 * get_dicCallback_0() const { return ___dicCallback_0; }
	inline Dictionary_2_t1964327212 ** get_address_of_dicCallback_0() { return &___dicCallback_0; }
	inline void set_dicCallback_0(Dictionary_2_t1964327212 * value)
	{
		___dicCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___dicCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
