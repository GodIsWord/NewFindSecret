#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullScreen
struct  FullScreen_t1701055072  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean FullScreen::isSet
	bool ___isSet_2;
	// UnityEngine.Camera FullScreen::cam
	Camera_t4157153871 * ___cam_3;

public:
	inline static int32_t get_offset_of_isSet_2() { return static_cast<int32_t>(offsetof(FullScreen_t1701055072, ___isSet_2)); }
	inline bool get_isSet_2() const { return ___isSet_2; }
	inline bool* get_address_of_isSet_2() { return &___isSet_2; }
	inline void set_isSet_2(bool value)
	{
		___isSet_2 = value;
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(FullScreen_t1701055072, ___cam_3)); }
	inline Camera_t4157153871 * get_cam_3() const { return ___cam_3; }
	inline Camera_t4157153871 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t4157153871 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
