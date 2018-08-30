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

// pointScript
struct  pointScript_t1798614745  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform pointScript::pointTransfrom
	Transform_t3600365921 * ___pointTransfrom_2;

public:
	inline static int32_t get_offset_of_pointTransfrom_2() { return static_cast<int32_t>(offsetof(pointScript_t1798614745, ___pointTransfrom_2)); }
	inline Transform_t3600365921 * get_pointTransfrom_2() const { return ___pointTransfrom_2; }
	inline Transform_t3600365921 ** get_address_of_pointTransfrom_2() { return &___pointTransfrom_2; }
	inline void set_pointTransfrom_2(Transform_t3600365921 * value)
	{
		___pointTransfrom_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointTransfrom_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
