#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Drawing.Imaging.EncoderParameter[]
struct EncoderParameterU5BU5D_t3840498458;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Imaging.EncoderParameters
struct  EncoderParameters_t2680547867  : public Il2CppObject
{
public:
	// System.Drawing.Imaging.EncoderParameter[] System.Drawing.Imaging.EncoderParameters::parameters
	EncoderParameterU5BU5D_t3840498458* ___parameters_0;

public:
	inline static int32_t get_offset_of_parameters_0() { return static_cast<int32_t>(offsetof(EncoderParameters_t2680547867, ___parameters_0)); }
	inline EncoderParameterU5BU5D_t3840498458* get_parameters_0() const { return ___parameters_0; }
	inline EncoderParameterU5BU5D_t3840498458** get_address_of_parameters_0() { return &___parameters_0; }
	inline void set_parameters_0(EncoderParameterU5BU5D_t3840498458* value)
	{
		___parameters_0 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
