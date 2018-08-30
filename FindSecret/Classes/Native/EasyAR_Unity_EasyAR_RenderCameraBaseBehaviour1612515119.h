#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Matrix4x41817901843.h"
#include "EasyAR_Unity_EasyAR_Vector2I2668621479.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// EasyAR.CameraDevice
struct CameraDevice_t2123284476;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t3814910474;
// EasyAR.ARCameraBaseBehaviour
struct ARCameraBaseBehaviour_t712094156;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RenderCameraBaseBehaviour
struct  RenderCameraBaseBehaviour_t1612515119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera EasyAR.RenderCameraBaseBehaviour::RenderCamera
	Camera_t4157153871 * ___RenderCamera_2;
	// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::_projection
	Matrix4x4_t1817901843  ____projection_3;
	// EasyAR.Vector2I EasyAR.RenderCameraBaseBehaviour::_camSize
	Vector2I_t2668621479  ____camSize_4;
	// EasyAR.Vector2I EasyAR.RenderCameraBaseBehaviour::_screenSize
	Vector2I_t2668621479  ____screenSize_5;
	// EasyAR.CameraDevice EasyAR.RenderCameraBaseBehaviour::_device
	CameraDevice_t2123284476 * ____device_6;
	// System.Int32 EasyAR.RenderCameraBaseBehaviour::rotation
	int32_t ___rotation_7;
	// System.Boolean EasyAR.RenderCameraBaseBehaviour::hFlip
	bool ___hFlip_8;
	// System.Boolean EasyAR.RenderCameraBaseBehaviour::hFlipChanged
	bool ___hFlipChanged_9;
	// UnityEngine.Vector2 EasyAR.RenderCameraBaseBehaviour::clipPlanes
	Vector2_t2156229523  ___clipPlanes_10;
	// EasyAR.DeviceAbstractBehaviour EasyAR.RenderCameraBaseBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_11;
	// EasyAR.ARCameraBaseBehaviour EasyAR.RenderCameraBaseBehaviour::augmenterBaseBehaviour
	ARCameraBaseBehaviour_t712094156 * ___augmenterBaseBehaviour_12;

public:
	inline static int32_t get_offset_of_RenderCamera_2() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___RenderCamera_2)); }
	inline Camera_t4157153871 * get_RenderCamera_2() const { return ___RenderCamera_2; }
	inline Camera_t4157153871 ** get_address_of_RenderCamera_2() { return &___RenderCamera_2; }
	inline void set_RenderCamera_2(Camera_t4157153871 * value)
	{
		___RenderCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___RenderCamera_2, value);
	}

	inline static int32_t get_offset_of__projection_3() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____projection_3)); }
	inline Matrix4x4_t1817901843  get__projection_3() const { return ____projection_3; }
	inline Matrix4x4_t1817901843 * get_address_of__projection_3() { return &____projection_3; }
	inline void set__projection_3(Matrix4x4_t1817901843  value)
	{
		____projection_3 = value;
	}

	inline static int32_t get_offset_of__camSize_4() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____camSize_4)); }
	inline Vector2I_t2668621479  get__camSize_4() const { return ____camSize_4; }
	inline Vector2I_t2668621479 * get_address_of__camSize_4() { return &____camSize_4; }
	inline void set__camSize_4(Vector2I_t2668621479  value)
	{
		____camSize_4 = value;
	}

	inline static int32_t get_offset_of__screenSize_5() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____screenSize_5)); }
	inline Vector2I_t2668621479  get__screenSize_5() const { return ____screenSize_5; }
	inline Vector2I_t2668621479 * get_address_of__screenSize_5() { return &____screenSize_5; }
	inline void set__screenSize_5(Vector2I_t2668621479  value)
	{
		____screenSize_5 = value;
	}

	inline static int32_t get_offset_of__device_6() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____device_6)); }
	inline CameraDevice_t2123284476 * get__device_6() const { return ____device_6; }
	inline CameraDevice_t2123284476 ** get_address_of__device_6() { return &____device_6; }
	inline void set__device_6(CameraDevice_t2123284476 * value)
	{
		____device_6 = value;
		Il2CppCodeGenWriteBarrier(&____device_6, value);
	}

	inline static int32_t get_offset_of_rotation_7() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___rotation_7)); }
	inline int32_t get_rotation_7() const { return ___rotation_7; }
	inline int32_t* get_address_of_rotation_7() { return &___rotation_7; }
	inline void set_rotation_7(int32_t value)
	{
		___rotation_7 = value;
	}

	inline static int32_t get_offset_of_hFlip_8() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___hFlip_8)); }
	inline bool get_hFlip_8() const { return ___hFlip_8; }
	inline bool* get_address_of_hFlip_8() { return &___hFlip_8; }
	inline void set_hFlip_8(bool value)
	{
		___hFlip_8 = value;
	}

	inline static int32_t get_offset_of_hFlipChanged_9() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___hFlipChanged_9)); }
	inline bool get_hFlipChanged_9() const { return ___hFlipChanged_9; }
	inline bool* get_address_of_hFlipChanged_9() { return &___hFlipChanged_9; }
	inline void set_hFlipChanged_9(bool value)
	{
		___hFlipChanged_9 = value;
	}

	inline static int32_t get_offset_of_clipPlanes_10() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___clipPlanes_10)); }
	inline Vector2_t2156229523  get_clipPlanes_10() const { return ___clipPlanes_10; }
	inline Vector2_t2156229523 * get_address_of_clipPlanes_10() { return &___clipPlanes_10; }
	inline void set_clipPlanes_10(Vector2_t2156229523  value)
	{
		___clipPlanes_10 = value;
	}

	inline static int32_t get_offset_of_deviceBehaviour_11() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___deviceBehaviour_11)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_11() const { return ___deviceBehaviour_11; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_11() { return &___deviceBehaviour_11; }
	inline void set_deviceBehaviour_11(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier(&___deviceBehaviour_11, value);
	}

	inline static int32_t get_offset_of_augmenterBaseBehaviour_12() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___augmenterBaseBehaviour_12)); }
	inline ARCameraBaseBehaviour_t712094156 * get_augmenterBaseBehaviour_12() const { return ___augmenterBaseBehaviour_12; }
	inline ARCameraBaseBehaviour_t712094156 ** get_address_of_augmenterBaseBehaviour_12() { return &___augmenterBaseBehaviour_12; }
	inline void set_augmenterBaseBehaviour_12(ARCameraBaseBehaviour_t712094156 * value)
	{
		___augmenterBaseBehaviour_12 = value;
		Il2CppCodeGenWriteBarrier(&___augmenterBaseBehaviour_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
