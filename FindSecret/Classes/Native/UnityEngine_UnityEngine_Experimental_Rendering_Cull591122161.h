#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CullingParameters/<_layerFarCullDistances>__FixedBuffer1
struct  U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Experimental.Rendering.CullingParameters/<_layerFarCullDistances>__FixedBuffer1::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
