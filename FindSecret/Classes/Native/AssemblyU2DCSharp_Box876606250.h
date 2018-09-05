#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.Mesh
struct Mesh_t3648964284;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Box
struct  Box_t876606250  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Mesh Box::mesh
	Mesh_t3648964284 * ___mesh_2;
	// UnityEngine.Vector2 Box::size
	Vector2_t2156229523  ___size_3;
	// UnityEngine.Vector2 Box::border
	Vector2_t2156229523  ___border_4;
	// System.Single Box::scale
	float ___scale_5;

public:
	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(Box_t876606250, ___mesh_2)); }
	inline Mesh_t3648964284 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t3648964284 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t3648964284 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_2, value);
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Box_t876606250, ___size_3)); }
	inline Vector2_t2156229523  get_size_3() const { return ___size_3; }
	inline Vector2_t2156229523 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector2_t2156229523  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_border_4() { return static_cast<int32_t>(offsetof(Box_t876606250, ___border_4)); }
	inline Vector2_t2156229523  get_border_4() const { return ___border_4; }
	inline Vector2_t2156229523 * get_address_of_border_4() { return &___border_4; }
	inline void set_border_4(Vector2_t2156229523  value)
	{
		___border_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(Box_t876606250, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
