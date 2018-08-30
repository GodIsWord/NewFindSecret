#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AVRes
struct  AVRes_t2883758818  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct AVRes_t2883758818_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> AVRes::resDic
	Dictionary_2_t898892918 * ___resDic_2;

public:
	inline static int32_t get_offset_of_resDic_2() { return static_cast<int32_t>(offsetof(AVRes_t2883758818_StaticFields, ___resDic_2)); }
	inline Dictionary_2_t898892918 * get_resDic_2() const { return ___resDic_2; }
	inline Dictionary_2_t898892918 ** get_address_of_resDic_2() { return &___resDic_2; }
	inline void set_resDic_2(Dictionary_2_t898892918 * value)
	{
		___resDic_2 = value;
		Il2CppCodeGenWriteBarrier(&___resDic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
