#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3273302915  : public Il2CppObject
{
public:

public:
};

struct SendMouseEvents_t3273302915_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1685002053* ___m_LastHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1685002053* ___m_MouseDownHit_5;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1685002053* ___m_CurrentHit_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1709987734* ___m_Cameras_7;

public:
	inline static int32_t get_offset_of_s_MouseUsed_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___s_MouseUsed_3)); }
	inline bool get_s_MouseUsed_3() const { return ___s_MouseUsed_3; }
	inline bool* get_address_of_s_MouseUsed_3() { return &___s_MouseUsed_3; }
	inline void set_s_MouseUsed_3(bool value)
	{
		___s_MouseUsed_3 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_LastHit_4)); }
	inline HitInfoU5BU5D_t1685002053* get_m_LastHit_4() const { return ___m_LastHit_4; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_LastHit_4() { return &___m_LastHit_4; }
	inline void set_m_LastHit_4(HitInfoU5BU5D_t1685002053* value)
	{
		___m_LastHit_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastHit_4, value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_5() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_MouseDownHit_5)); }
	inline HitInfoU5BU5D_t1685002053* get_m_MouseDownHit_5() const { return ___m_MouseDownHit_5; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_MouseDownHit_5() { return &___m_MouseDownHit_5; }
	inline void set_m_MouseDownHit_5(HitInfoU5BU5D_t1685002053* value)
	{
		___m_MouseDownHit_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseDownHit_5, value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_6() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_CurrentHit_6)); }
	inline HitInfoU5BU5D_t1685002053* get_m_CurrentHit_6() const { return ___m_CurrentHit_6; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_CurrentHit_6() { return &___m_CurrentHit_6; }
	inline void set_m_CurrentHit_6(HitInfoU5BU5D_t1685002053* value)
	{
		___m_CurrentHit_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentHit_6, value);
	}

	inline static int32_t get_offset_of_m_Cameras_7() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_Cameras_7)); }
	inline CameraU5BU5D_t1709987734* get_m_Cameras_7() const { return ___m_Cameras_7; }
	inline CameraU5BU5D_t1709987734** get_address_of_m_Cameras_7() { return &___m_Cameras_7; }
	inline void set_m_Cameras_7(CameraU5BU5D_t1709987734* value)
	{
		___m_Cameras_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cameras_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
