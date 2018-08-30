#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WhiteScript
struct  WhiteScript_t3191116136  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform WhiteScript::cityTran
	Transform_t3600365921 * ___cityTran_2;

public:
	inline static int32_t get_offset_of_cityTran_2() { return static_cast<int32_t>(offsetof(WhiteScript_t3191116136, ___cityTran_2)); }
	inline Transform_t3600365921 * get_cityTran_2() const { return ___cityTran_2; }
	inline Transform_t3600365921 ** get_address_of_cityTran_2() { return &___cityTran_2; }
	inline void set_cityTran_2(Transform_t3600365921 * value)
	{
		___cityTran_2 = value;
		Il2CppCodeGenWriteBarrier(&___cityTran_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
