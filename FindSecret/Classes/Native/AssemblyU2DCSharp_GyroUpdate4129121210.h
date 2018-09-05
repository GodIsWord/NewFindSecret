#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GyroUpdate
struct  GyroUpdate_t4129121210  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean GyroUpdate::gyroEnabled
	bool ___gyroEnabled_2;
	// UnityEngine.Quaternion GyroUpdate::baseIdentity
	Quaternion_t2301928331  ___baseIdentity_4;
	// UnityEngine.Quaternion GyroUpdate::landscapeRight
	Quaternion_t2301928331  ___landscapeRight_5;
	// UnityEngine.Quaternion GyroUpdate::landscapeLeft
	Quaternion_t2301928331  ___landscapeLeft_6;
	// UnityEngine.Quaternion GyroUpdate::upsideDown
	Quaternion_t2301928331  ___upsideDown_7;
	// UnityEngine.Quaternion GyroUpdate::cameraBase
	Quaternion_t2301928331  ___cameraBase_8;
	// UnityEngine.Quaternion GyroUpdate::calibration
	Quaternion_t2301928331  ___calibration_9;
	// UnityEngine.Quaternion GyroUpdate::baseOrientation
	Quaternion_t2301928331  ___baseOrientation_10;
	// UnityEngine.Quaternion GyroUpdate::baseOrientationRotationFix
	Quaternion_t2301928331  ___baseOrientationRotationFix_11;
	// UnityEngine.Quaternion GyroUpdate::referanceRotation
	Quaternion_t2301928331  ___referanceRotation_12;
	// System.Single GyroUpdate::trueHeading
	float ___trueHeading_13;
	// System.Boolean GyroUpdate::debug
	bool ___debug_14;
	// UnityEngine.Transform GyroUpdate::_t
	Transform_t3600365921 * ____t_16;

public:
	inline static int32_t get_offset_of_gyroEnabled_2() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___gyroEnabled_2)); }
	inline bool get_gyroEnabled_2() const { return ___gyroEnabled_2; }
	inline bool* get_address_of_gyroEnabled_2() { return &___gyroEnabled_2; }
	inline void set_gyroEnabled_2(bool value)
	{
		___gyroEnabled_2 = value;
	}

	inline static int32_t get_offset_of_baseIdentity_4() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___baseIdentity_4)); }
	inline Quaternion_t2301928331  get_baseIdentity_4() const { return ___baseIdentity_4; }
	inline Quaternion_t2301928331 * get_address_of_baseIdentity_4() { return &___baseIdentity_4; }
	inline void set_baseIdentity_4(Quaternion_t2301928331  value)
	{
		___baseIdentity_4 = value;
	}

	inline static int32_t get_offset_of_landscapeRight_5() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___landscapeRight_5)); }
	inline Quaternion_t2301928331  get_landscapeRight_5() const { return ___landscapeRight_5; }
	inline Quaternion_t2301928331 * get_address_of_landscapeRight_5() { return &___landscapeRight_5; }
	inline void set_landscapeRight_5(Quaternion_t2301928331  value)
	{
		___landscapeRight_5 = value;
	}

	inline static int32_t get_offset_of_landscapeLeft_6() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___landscapeLeft_6)); }
	inline Quaternion_t2301928331  get_landscapeLeft_6() const { return ___landscapeLeft_6; }
	inline Quaternion_t2301928331 * get_address_of_landscapeLeft_6() { return &___landscapeLeft_6; }
	inline void set_landscapeLeft_6(Quaternion_t2301928331  value)
	{
		___landscapeLeft_6 = value;
	}

	inline static int32_t get_offset_of_upsideDown_7() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___upsideDown_7)); }
	inline Quaternion_t2301928331  get_upsideDown_7() const { return ___upsideDown_7; }
	inline Quaternion_t2301928331 * get_address_of_upsideDown_7() { return &___upsideDown_7; }
	inline void set_upsideDown_7(Quaternion_t2301928331  value)
	{
		___upsideDown_7 = value;
	}

	inline static int32_t get_offset_of_cameraBase_8() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___cameraBase_8)); }
	inline Quaternion_t2301928331  get_cameraBase_8() const { return ___cameraBase_8; }
	inline Quaternion_t2301928331 * get_address_of_cameraBase_8() { return &___cameraBase_8; }
	inline void set_cameraBase_8(Quaternion_t2301928331  value)
	{
		___cameraBase_8 = value;
	}

	inline static int32_t get_offset_of_calibration_9() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___calibration_9)); }
	inline Quaternion_t2301928331  get_calibration_9() const { return ___calibration_9; }
	inline Quaternion_t2301928331 * get_address_of_calibration_9() { return &___calibration_9; }
	inline void set_calibration_9(Quaternion_t2301928331  value)
	{
		___calibration_9 = value;
	}

	inline static int32_t get_offset_of_baseOrientation_10() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___baseOrientation_10)); }
	inline Quaternion_t2301928331  get_baseOrientation_10() const { return ___baseOrientation_10; }
	inline Quaternion_t2301928331 * get_address_of_baseOrientation_10() { return &___baseOrientation_10; }
	inline void set_baseOrientation_10(Quaternion_t2301928331  value)
	{
		___baseOrientation_10 = value;
	}

	inline static int32_t get_offset_of_baseOrientationRotationFix_11() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___baseOrientationRotationFix_11)); }
	inline Quaternion_t2301928331  get_baseOrientationRotationFix_11() const { return ___baseOrientationRotationFix_11; }
	inline Quaternion_t2301928331 * get_address_of_baseOrientationRotationFix_11() { return &___baseOrientationRotationFix_11; }
	inline void set_baseOrientationRotationFix_11(Quaternion_t2301928331  value)
	{
		___baseOrientationRotationFix_11 = value;
	}

	inline static int32_t get_offset_of_referanceRotation_12() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___referanceRotation_12)); }
	inline Quaternion_t2301928331  get_referanceRotation_12() const { return ___referanceRotation_12; }
	inline Quaternion_t2301928331 * get_address_of_referanceRotation_12() { return &___referanceRotation_12; }
	inline void set_referanceRotation_12(Quaternion_t2301928331  value)
	{
		___referanceRotation_12 = value;
	}

	inline static int32_t get_offset_of_trueHeading_13() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___trueHeading_13)); }
	inline float get_trueHeading_13() const { return ___trueHeading_13; }
	inline float* get_address_of_trueHeading_13() { return &___trueHeading_13; }
	inline void set_trueHeading_13(float value)
	{
		___trueHeading_13 = value;
	}

	inline static int32_t get_offset_of_debug_14() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ___debug_14)); }
	inline bool get_debug_14() const { return ___debug_14; }
	inline bool* get_address_of_debug_14() { return &___debug_14; }
	inline void set_debug_14(bool value)
	{
		___debug_14 = value;
	}

	inline static int32_t get_offset_of__t_16() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210, ____t_16)); }
	inline Transform_t3600365921 * get__t_16() const { return ____t_16; }
	inline Transform_t3600365921 ** get_address_of__t_16() { return &____t_16; }
	inline void set__t_16(Transform_t3600365921 * value)
	{
		____t_16 = value;
		Il2CppCodeGenWriteBarrier(&____t_16, value);
	}
};

struct GyroUpdate_t4129121210_StaticFields
{
public:
	// System.Single GyroUpdate::jingdu_
	float ___jingdu__15;

public:
	inline static int32_t get_offset_of_jingdu__15() { return static_cast<int32_t>(offsetof(GyroUpdate_t4129121210_StaticFields, ___jingdu__15)); }
	inline float get_jingdu__15() const { return ___jingdu__15; }
	inline float* get_address_of_jingdu__15() { return &___jingdu__15; }
	inline void set_jingdu__15(float value)
	{
		___jingdu__15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
