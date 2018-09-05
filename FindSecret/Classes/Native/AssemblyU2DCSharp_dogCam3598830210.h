#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dogCam
struct  dogCam_t3598830210  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform dogCam::childCam
	Transform_t3600365921 * ___childCam_2;
	// UnityEngine.Transform dogCam::curTrans
	Transform_t3600365921 * ___curTrans_3;

public:
	inline static int32_t get_offset_of_childCam_2() { return static_cast<int32_t>(offsetof(dogCam_t3598830210, ___childCam_2)); }
	inline Transform_t3600365921 * get_childCam_2() const { return ___childCam_2; }
	inline Transform_t3600365921 ** get_address_of_childCam_2() { return &___childCam_2; }
	inline void set_childCam_2(Transform_t3600365921 * value)
	{
		___childCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___childCam_2, value);
	}

	inline static int32_t get_offset_of_curTrans_3() { return static_cast<int32_t>(offsetof(dogCam_t3598830210, ___curTrans_3)); }
	inline Transform_t3600365921 * get_curTrans_3() const { return ___curTrans_3; }
	inline Transform_t3600365921 ** get_address_of_curTrans_3() { return &___curTrans_3; }
	inline void set_curTrans_3(Transform_t3600365921 * value)
	{
		___curTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___curTrans_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
