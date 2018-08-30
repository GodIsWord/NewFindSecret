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

// TestCompass
struct  TestCompass_t583077822  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform TestCompass::child1
	Transform_t3600365921 * ___child1_2;
	// UnityEngine.Transform TestCompass::child2
	Transform_t3600365921 * ___child2_3;
	// System.Single TestCompass::changeTime
	float ___changeTime_4;
	// System.Single TestCompass::changeAngle
	float ___changeAngle_5;
	// System.Single TestCompass::currentAngle
	float ___currentAngle_6;
	// System.Boolean TestCompass::start
	bool ___start_7;
	// System.Boolean TestCompass::ticked
	bool ___ticked_8;
	// System.Int32 TestCompass::cdi1
	int32_t ___cdi1_9;
	// System.Int32 TestCompass::cdi2
	int32_t ___cdi2_10;

public:
	inline static int32_t get_offset_of_child1_2() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___child1_2)); }
	inline Transform_t3600365921 * get_child1_2() const { return ___child1_2; }
	inline Transform_t3600365921 ** get_address_of_child1_2() { return &___child1_2; }
	inline void set_child1_2(Transform_t3600365921 * value)
	{
		___child1_2 = value;
		Il2CppCodeGenWriteBarrier(&___child1_2, value);
	}

	inline static int32_t get_offset_of_child2_3() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___child2_3)); }
	inline Transform_t3600365921 * get_child2_3() const { return ___child2_3; }
	inline Transform_t3600365921 ** get_address_of_child2_3() { return &___child2_3; }
	inline void set_child2_3(Transform_t3600365921 * value)
	{
		___child2_3 = value;
		Il2CppCodeGenWriteBarrier(&___child2_3, value);
	}

	inline static int32_t get_offset_of_changeTime_4() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___changeTime_4)); }
	inline float get_changeTime_4() const { return ___changeTime_4; }
	inline float* get_address_of_changeTime_4() { return &___changeTime_4; }
	inline void set_changeTime_4(float value)
	{
		___changeTime_4 = value;
	}

	inline static int32_t get_offset_of_changeAngle_5() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___changeAngle_5)); }
	inline float get_changeAngle_5() const { return ___changeAngle_5; }
	inline float* get_address_of_changeAngle_5() { return &___changeAngle_5; }
	inline void set_changeAngle_5(float value)
	{
		___changeAngle_5 = value;
	}

	inline static int32_t get_offset_of_currentAngle_6() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___currentAngle_6)); }
	inline float get_currentAngle_6() const { return ___currentAngle_6; }
	inline float* get_address_of_currentAngle_6() { return &___currentAngle_6; }
	inline void set_currentAngle_6(float value)
	{
		___currentAngle_6 = value;
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___start_7)); }
	inline bool get_start_7() const { return ___start_7; }
	inline bool* get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(bool value)
	{
		___start_7 = value;
	}

	inline static int32_t get_offset_of_ticked_8() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___ticked_8)); }
	inline bool get_ticked_8() const { return ___ticked_8; }
	inline bool* get_address_of_ticked_8() { return &___ticked_8; }
	inline void set_ticked_8(bool value)
	{
		___ticked_8 = value;
	}

	inline static int32_t get_offset_of_cdi1_9() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___cdi1_9)); }
	inline int32_t get_cdi1_9() const { return ___cdi1_9; }
	inline int32_t* get_address_of_cdi1_9() { return &___cdi1_9; }
	inline void set_cdi1_9(int32_t value)
	{
		___cdi1_9 = value;
	}

	inline static int32_t get_offset_of_cdi2_10() { return static_cast<int32_t>(offsetof(TestCompass_t583077822, ___cdi2_10)); }
	inline int32_t get_cdi2_10() const { return ___cdi2_10; }
	inline int32_t* get_address_of_cdi2_10() { return &___cdi2_10; }
	inline void set_cdi2_10(int32_t value)
	{
		___cdi2_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
