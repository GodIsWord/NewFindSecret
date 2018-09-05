#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.LODParameters
struct  LODParameters_t4109493171 
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.LODParameters::isOrthographic
	bool ___isOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.LODParameters::cameraPosition
	Vector3_t3722313464  ___cameraPosition_1;
	// System.Single UnityEngine.Experimental.Rendering.LODParameters::fieldOfView
	float ___fieldOfView_2;
	// System.Single UnityEngine.Experimental.Rendering.LODParameters::orthoSize
	float ___orthoSize_3;
	// System.Int32 UnityEngine.Experimental.Rendering.LODParameters::cameraPixelHeight
	int32_t ___cameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_isOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___isOrthographic_0)); }
	inline bool get_isOrthographic_0() const { return ___isOrthographic_0; }
	inline bool* get_address_of_isOrthographic_0() { return &___isOrthographic_0; }
	inline void set_isOrthographic_0(bool value)
	{
		___isOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_cameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___cameraPosition_1)); }
	inline Vector3_t3722313464  get_cameraPosition_1() const { return ___cameraPosition_1; }
	inline Vector3_t3722313464 * get_address_of_cameraPosition_1() { return &___cameraPosition_1; }
	inline void set_cameraPosition_1(Vector3_t3722313464  value)
	{
		___cameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_fieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___fieldOfView_2)); }
	inline float get_fieldOfView_2() const { return ___fieldOfView_2; }
	inline float* get_address_of_fieldOfView_2() { return &___fieldOfView_2; }
	inline void set_fieldOfView_2(float value)
	{
		___fieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_orthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___orthoSize_3)); }
	inline float get_orthoSize_3() const { return ___orthoSize_3; }
	inline float* get_address_of_orthoSize_3() { return &___orthoSize_3; }
	inline void set_orthoSize_3(float value)
	{
		___orthoSize_3 = value;
	}

	inline static int32_t get_offset_of_cameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_t4109493171, ___cameraPixelHeight_4)); }
	inline int32_t get_cameraPixelHeight_4() const { return ___cameraPixelHeight_4; }
	inline int32_t* get_address_of_cameraPixelHeight_4() { return &___cameraPixelHeight_4; }
	inline void set_cameraPixelHeight_4(int32_t value)
	{
		___cameraPixelHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.LODParameters
struct LODParameters_t4109493171_marshaled_pinvoke
{
	int32_t ___isOrthographic_0;
	Vector3_t3722313464  ___cameraPosition_1;
	float ___fieldOfView_2;
	float ___orthoSize_3;
	int32_t ___cameraPixelHeight_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.LODParameters
struct LODParameters_t4109493171_marshaled_com
{
	int32_t ___isOrthographic_0;
	Vector3_t3722313464  ___cameraPosition_1;
	float ___fieldOfView_2;
	float ___orthoSize_3;
	int32_t ___cameraPixelHeight_4;
};
