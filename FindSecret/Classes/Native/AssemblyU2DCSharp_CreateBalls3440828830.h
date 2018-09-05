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
// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateBalls
struct  CreateBalls_t3440828830  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform CreateBalls::t
	Transform_t3600365921 * ___t_2;
	// UnityEngine.GameObject CreateBalls::ball
	GameObject_t1113636619 * ___ball_3;
	// System.Single CreateBalls::r
	float ___r_4;
	// System.Boolean CreateBalls::rr
	bool ___rr_5;

public:
	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(CreateBalls_t3440828830, ___t_2)); }
	inline Transform_t3600365921 * get_t_2() const { return ___t_2; }
	inline Transform_t3600365921 ** get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(Transform_t3600365921 * value)
	{
		___t_2 = value;
		Il2CppCodeGenWriteBarrier(&___t_2, value);
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(CreateBalls_t3440828830, ___ball_3)); }
	inline GameObject_t1113636619 * get_ball_3() const { return ___ball_3; }
	inline GameObject_t1113636619 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(GameObject_t1113636619 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}

	inline static int32_t get_offset_of_r_4() { return static_cast<int32_t>(offsetof(CreateBalls_t3440828830, ___r_4)); }
	inline float get_r_4() const { return ___r_4; }
	inline float* get_address_of_r_4() { return &___r_4; }
	inline void set_r_4(float value)
	{
		___r_4 = value;
	}

	inline static int32_t get_offset_of_rr_5() { return static_cast<int32_t>(offsetof(CreateBalls_t3440828830, ___rr_5)); }
	inline bool get_rr_5() const { return ___rr_5; }
	inline bool* get_address_of_rr_5() { return &___rr_5; }
	inline void set_rr_5(bool value)
	{
		___rr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
