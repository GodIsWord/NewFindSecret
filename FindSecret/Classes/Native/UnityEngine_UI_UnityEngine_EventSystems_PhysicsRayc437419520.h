﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas4150874583.h"
#include "UnityEngine_UnityEngine_LayerMask3493934918.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t830933145;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t437419520  : public BaseRaycaster_t4150874583
{
public:
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t4157153871 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t3493934918  ___m_EventMask_4;

public:
	inline static int32_t get_offset_of_m_EventCamera_3() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t437419520, ___m_EventCamera_3)); }
	inline Camera_t4157153871 * get_m_EventCamera_3() const { return ___m_EventCamera_3; }
	inline Camera_t4157153871 ** get_address_of_m_EventCamera_3() { return &___m_EventCamera_3; }
	inline void set_m_EventCamera_3(Camera_t4157153871 * value)
	{
		___m_EventCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventCamera_3, value);
	}

	inline static int32_t get_offset_of_m_EventMask_4() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t437419520, ___m_EventMask_4)); }
	inline LayerMask_t3493934918  get_m_EventMask_4() const { return ___m_EventMask_4; }
	inline LayerMask_t3493934918 * get_address_of_m_EventMask_4() { return &___m_EventMask_4; }
	inline void set_m_EventMask_4(LayerMask_t3493934918  value)
	{
		___m_EventMask_4 = value;
	}
};

struct PhysicsRaycaster_t437419520_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache0
	Comparison_1_t830933145 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(PhysicsRaycaster_t437419520_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Comparison_1_t830933145 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Comparison_1_t830933145 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Comparison_1_t830933145 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
