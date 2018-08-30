#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t4140357341;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t386339177  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	Il2CppObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t386339177, ___list_enumerator_0)); }
	inline Il2CppObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline Il2CppObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(Il2CppObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_enumerator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
