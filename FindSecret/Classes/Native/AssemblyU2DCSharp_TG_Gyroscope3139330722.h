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

// TG_Gyroscope
struct  TG_Gyroscope_t3139330722  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TG_Gyroscope::jingdu
	float ___jingdu_2;
	// UnityEngine.Transform TG_Gyroscope::MyTransform
	Transform_t3600365921 * ___MyTransform_3;

public:
	inline static int32_t get_offset_of_jingdu_2() { return static_cast<int32_t>(offsetof(TG_Gyroscope_t3139330722, ___jingdu_2)); }
	inline float get_jingdu_2() const { return ___jingdu_2; }
	inline float* get_address_of_jingdu_2() { return &___jingdu_2; }
	inline void set_jingdu_2(float value)
	{
		___jingdu_2 = value;
	}

	inline static int32_t get_offset_of_MyTransform_3() { return static_cast<int32_t>(offsetof(TG_Gyroscope_t3139330722, ___MyTransform_3)); }
	inline Transform_t3600365921 * get_MyTransform_3() const { return ___MyTransform_3; }
	inline Transform_t3600365921 ** get_address_of_MyTransform_3() { return &___MyTransform_3; }
	inline void set_MyTransform_3(Transform_t3600365921 * value)
	{
		___MyTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___MyTransform_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
