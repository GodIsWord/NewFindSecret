#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base1500127977.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device447371333.h"
#include "EasyAR_Unity_EasyAR_Vector2I2668621479.h"
#include "mscorlib_System_IntPtr840150181.h"

// EasyAR.CameraDevice/CallBack
struct CallBack_t1768481782;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice>
struct Dictionary_2_t345150195;
// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String>
struct Action_2_t2317856371;
// EasyAR.CameraCalibration
struct CameraCalibration_t367929843;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t2059196126;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice
struct  CameraDevice_t2123284476  : public Base_t1500127977
{
public:
	// EasyAR.CameraDevice/Device EasyAR.CameraDevice::OpenedDeviceIfOpened
	int32_t ___OpenedDeviceIfOpened_2;
	// System.Boolean EasyAR.CameraDevice::horizontalFlip
	bool ___horizontalFlip_3;
	// EasyAR.Vector2I EasyAR.CameraDevice::_size
	Vector2I_t2668621479  ____size_4;
	// EasyAR.CameraDevice/CallBack EasyAR.CameraDevice::_permissionCallBack
	CallBack_t1768481782 * ____permissionCallBack_5;
	// System.IntPtr EasyAR.CameraDevice::_permissionObjCallback
	IntPtr_t ____permissionObjCallback_6;
	// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String> EasyAR.CameraDevice::PermissionStatusNotify
	Action_2_t2317856371 * ___PermissionStatusNotify_8;
	// EasyAR.CameraCalibration EasyAR.CameraDevice::<Calibration>k__BackingField
	CameraCalibration_t367929843 * ___U3CCalibrationU3Ek__BackingField_9;
	// System.Single[] EasyAR.CameraDevice::<SupportedFPS>k__BackingField
	SingleU5BU5D_t1444911251* ___U3CSupportedFPSU3Ek__BackingField_10;
	// EasyAR.Vector2I[] EasyAR.CameraDevice::<SupportedSize>k__BackingField
	Vector2IU5BU5D_t2059196126* ___U3CSupportedSizeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_OpenedDeviceIfOpened_2() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___OpenedDeviceIfOpened_2)); }
	inline int32_t get_OpenedDeviceIfOpened_2() const { return ___OpenedDeviceIfOpened_2; }
	inline int32_t* get_address_of_OpenedDeviceIfOpened_2() { return &___OpenedDeviceIfOpened_2; }
	inline void set_OpenedDeviceIfOpened_2(int32_t value)
	{
		___OpenedDeviceIfOpened_2 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_3() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___horizontalFlip_3)); }
	inline bool get_horizontalFlip_3() const { return ___horizontalFlip_3; }
	inline bool* get_address_of_horizontalFlip_3() { return &___horizontalFlip_3; }
	inline void set_horizontalFlip_3(bool value)
	{
		___horizontalFlip_3 = value;
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____size_4)); }
	inline Vector2I_t2668621479  get__size_4() const { return ____size_4; }
	inline Vector2I_t2668621479 * get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(Vector2I_t2668621479  value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of__permissionCallBack_5() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____permissionCallBack_5)); }
	inline CallBack_t1768481782 * get__permissionCallBack_5() const { return ____permissionCallBack_5; }
	inline CallBack_t1768481782 ** get_address_of__permissionCallBack_5() { return &____permissionCallBack_5; }
	inline void set__permissionCallBack_5(CallBack_t1768481782 * value)
	{
		____permissionCallBack_5 = value;
		Il2CppCodeGenWriteBarrier(&____permissionCallBack_5, value);
	}

	inline static int32_t get_offset_of__permissionObjCallback_6() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____permissionObjCallback_6)); }
	inline IntPtr_t get__permissionObjCallback_6() const { return ____permissionObjCallback_6; }
	inline IntPtr_t* get_address_of__permissionObjCallback_6() { return &____permissionObjCallback_6; }
	inline void set__permissionObjCallback_6(IntPtr_t value)
	{
		____permissionObjCallback_6 = value;
	}

	inline static int32_t get_offset_of_PermissionStatusNotify_8() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___PermissionStatusNotify_8)); }
	inline Action_2_t2317856371 * get_PermissionStatusNotify_8() const { return ___PermissionStatusNotify_8; }
	inline Action_2_t2317856371 ** get_address_of_PermissionStatusNotify_8() { return &___PermissionStatusNotify_8; }
	inline void set_PermissionStatusNotify_8(Action_2_t2317856371 * value)
	{
		___PermissionStatusNotify_8 = value;
		Il2CppCodeGenWriteBarrier(&___PermissionStatusNotify_8, value);
	}

	inline static int32_t get_offset_of_U3CCalibrationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CCalibrationU3Ek__BackingField_9)); }
	inline CameraCalibration_t367929843 * get_U3CCalibrationU3Ek__BackingField_9() const { return ___U3CCalibrationU3Ek__BackingField_9; }
	inline CameraCalibration_t367929843 ** get_address_of_U3CCalibrationU3Ek__BackingField_9() { return &___U3CCalibrationU3Ek__BackingField_9; }
	inline void set_U3CCalibrationU3Ek__BackingField_9(CameraCalibration_t367929843 * value)
	{
		___U3CCalibrationU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCalibrationU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CSupportedFPSU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CSupportedFPSU3Ek__BackingField_10)); }
	inline SingleU5BU5D_t1444911251* get_U3CSupportedFPSU3Ek__BackingField_10() const { return ___U3CSupportedFPSU3Ek__BackingField_10; }
	inline SingleU5BU5D_t1444911251** get_address_of_U3CSupportedFPSU3Ek__BackingField_10() { return &___U3CSupportedFPSU3Ek__BackingField_10; }
	inline void set_U3CSupportedFPSU3Ek__BackingField_10(SingleU5BU5D_t1444911251* value)
	{
		___U3CSupportedFPSU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedFPSU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CSupportedSizeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CSupportedSizeU3Ek__BackingField_11)); }
	inline Vector2IU5BU5D_t2059196126* get_U3CSupportedSizeU3Ek__BackingField_11() const { return ___U3CSupportedSizeU3Ek__BackingField_11; }
	inline Vector2IU5BU5D_t2059196126** get_address_of_U3CSupportedSizeU3Ek__BackingField_11() { return &___U3CSupportedSizeU3Ek__BackingField_11; }
	inline void set_U3CSupportedSizeU3Ek__BackingField_11(Vector2IU5BU5D_t2059196126* value)
	{
		___U3CSupportedSizeU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedSizeU3Ek__BackingField_11, value);
	}
};

struct CameraDevice_t2123284476_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice> EasyAR.CameraDevice::cameras
	Dictionary_2_t345150195 * ___cameras_7;

public:
	inline static int32_t get_offset_of_cameras_7() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476_StaticFields, ___cameras_7)); }
	inline Dictionary_2_t345150195 * get_cameras_7() const { return ___cameras_7; }
	inline Dictionary_2_t345150195 ** get_address_of_cameras_7() { return &___cameras_7; }
	inline void set_cameras_7(Dictionary_2_t345150195 * value)
	{
		___cameras_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
