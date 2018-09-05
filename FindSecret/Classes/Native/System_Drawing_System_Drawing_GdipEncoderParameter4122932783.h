#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_Guid3193532887.h"
#include "System_Drawing_System_Drawing_Imaging_EncoderParam1032746077.h"
#include "mscorlib_System_IntPtr840150181.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.GdipEncoderParameter
struct  GdipEncoderParameter_t4122932783 
{
public:
	// System.Guid System.Drawing.GdipEncoderParameter::guid
	Guid_t  ___guid_0;
	// System.UInt32 System.Drawing.GdipEncoderParameter::numberOfValues
	uint32_t ___numberOfValues_1;
	// System.Drawing.Imaging.EncoderParameterValueType System.Drawing.GdipEncoderParameter::type
	int32_t ___type_2;
	// System.IntPtr System.Drawing.GdipEncoderParameter::value
	IntPtr_t ___value_3;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(GdipEncoderParameter_t4122932783, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_numberOfValues_1() { return static_cast<int32_t>(offsetof(GdipEncoderParameter_t4122932783, ___numberOfValues_1)); }
	inline uint32_t get_numberOfValues_1() const { return ___numberOfValues_1; }
	inline uint32_t* get_address_of_numberOfValues_1() { return &___numberOfValues_1; }
	inline void set_numberOfValues_1(uint32_t value)
	{
		___numberOfValues_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(GdipEncoderParameter_t4122932783, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(GdipEncoderParameter_t4122932783, ___value_3)); }
	inline IntPtr_t get_value_3() const { return ___value_3; }
	inline IntPtr_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(IntPtr_t value)
	{
		___value_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
