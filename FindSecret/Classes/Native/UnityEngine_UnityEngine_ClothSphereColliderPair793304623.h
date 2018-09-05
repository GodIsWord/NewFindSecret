#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.SphereCollider
struct SphereCollider_t2077223608;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClothSphereColliderPair
struct  ClothSphereColliderPair_t793304623 
{
public:
	// UnityEngine.SphereCollider UnityEngine.ClothSphereColliderPair::m_First
	SphereCollider_t2077223608 * ___m_First_0;
	// UnityEngine.SphereCollider UnityEngine.ClothSphereColliderPair::m_Second
	SphereCollider_t2077223608 * ___m_Second_1;

public:
	inline static int32_t get_offset_of_m_First_0() { return static_cast<int32_t>(offsetof(ClothSphereColliderPair_t793304623, ___m_First_0)); }
	inline SphereCollider_t2077223608 * get_m_First_0() const { return ___m_First_0; }
	inline SphereCollider_t2077223608 ** get_address_of_m_First_0() { return &___m_First_0; }
	inline void set_m_First_0(SphereCollider_t2077223608 * value)
	{
		___m_First_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_First_0, value);
	}

	inline static int32_t get_offset_of_m_Second_1() { return static_cast<int32_t>(offsetof(ClothSphereColliderPair_t793304623, ___m_Second_1)); }
	inline SphereCollider_t2077223608 * get_m_Second_1() const { return ___m_Second_1; }
	inline SphereCollider_t2077223608 ** get_address_of_m_Second_1() { return &___m_Second_1; }
	inline void set_m_Second_1(SphereCollider_t2077223608 * value)
	{
		___m_Second_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Second_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ClothSphereColliderPair
struct ClothSphereColliderPair_t793304623_marshaled_pinvoke
{
	SphereCollider_t2077223608 * ___m_First_0;
	SphereCollider_t2077223608 * ___m_Second_1;
};
// Native definition for COM marshalling of UnityEngine.ClothSphereColliderPair
struct ClothSphereColliderPair_t793304623_marshaled_com
{
	SphereCollider_t2077223608 * ___m_First_0;
	SphereCollider_t2077223608 * ___m_Second_1;
};
