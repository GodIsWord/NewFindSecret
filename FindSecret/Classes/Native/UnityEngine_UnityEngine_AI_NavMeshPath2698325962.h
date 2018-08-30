#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_IntPtr840150181.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
struct Vector3_t3722313464 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshPath
struct  NavMeshPath_t2698325962  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_corners
	Vector3U5BU5D_t1718750761* ___m_corners_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_corners_1() { return static_cast<int32_t>(offsetof(NavMeshPath_t2698325962, ___m_corners_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_corners_1() const { return ___m_corners_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_corners_1() { return &___m_corners_1; }
	inline void set_m_corners_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_corners_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_corners_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_t2698325962_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t3722313464 * ___m_corners_1;
};
