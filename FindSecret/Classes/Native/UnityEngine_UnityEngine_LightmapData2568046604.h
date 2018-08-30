#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.Texture2D
struct Texture2D_t3840446185;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapData
struct  LightmapData_t2568046604  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D UnityEngine.LightmapData::m_Light
	Texture2D_t3840446185 * ___m_Light_0;
	// UnityEngine.Texture2D UnityEngine.LightmapData::m_Dir
	Texture2D_t3840446185 * ___m_Dir_1;
	// UnityEngine.Texture2D UnityEngine.LightmapData::m_ShadowMask
	Texture2D_t3840446185 * ___m_ShadowMask_2;

public:
	inline static int32_t get_offset_of_m_Light_0() { return static_cast<int32_t>(offsetof(LightmapData_t2568046604, ___m_Light_0)); }
	inline Texture2D_t3840446185 * get_m_Light_0() const { return ___m_Light_0; }
	inline Texture2D_t3840446185 ** get_address_of_m_Light_0() { return &___m_Light_0; }
	inline void set_m_Light_0(Texture2D_t3840446185 * value)
	{
		___m_Light_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Light_0, value);
	}

	inline static int32_t get_offset_of_m_Dir_1() { return static_cast<int32_t>(offsetof(LightmapData_t2568046604, ___m_Dir_1)); }
	inline Texture2D_t3840446185 * get_m_Dir_1() const { return ___m_Dir_1; }
	inline Texture2D_t3840446185 ** get_address_of_m_Dir_1() { return &___m_Dir_1; }
	inline void set_m_Dir_1(Texture2D_t3840446185 * value)
	{
		___m_Dir_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dir_1, value);
	}

	inline static int32_t get_offset_of_m_ShadowMask_2() { return static_cast<int32_t>(offsetof(LightmapData_t2568046604, ___m_ShadowMask_2)); }
	inline Texture2D_t3840446185 * get_m_ShadowMask_2() const { return ___m_ShadowMask_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_ShadowMask_2() { return &___m_ShadowMask_2; }
	inline void set_m_ShadowMask_2(Texture2D_t3840446185 * value)
	{
		___m_ShadowMask_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ShadowMask_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.LightmapData
struct LightmapData_t2568046604_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___m_Light_0;
	Texture2D_t3840446185 * ___m_Dir_1;
	Texture2D_t3840446185 * ___m_ShadowMask_2;
};
// Native definition for COM marshalling of UnityEngine.LightmapData
struct LightmapData_t2568046604_marshaled_com
{
	Texture2D_t3840446185 * ___m_Light_0;
	Texture2D_t3840446185 * ___m_Dir_1;
	Texture2D_t3840446185 * ___m_ShadowMask_2;
};
