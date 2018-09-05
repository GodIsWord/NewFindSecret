#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "System_Drawing_System_Drawing_Imaging_EncoderParam1032746077.h"
#include "mscorlib_System_IntPtr840150181.h"

// System.Drawing.Imaging.Encoder
struct Encoder_t290915261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Imaging.EncoderParameter
struct  EncoderParameter_t138078747  : public Il2CppObject
{
public:
	// System.Drawing.Imaging.Encoder System.Drawing.Imaging.EncoderParameter::encoder
	Encoder_t290915261 * ___encoder_0;
	// System.Int32 System.Drawing.Imaging.EncoderParameter::valuesCount
	int32_t ___valuesCount_1;
	// System.Drawing.Imaging.EncoderParameterValueType System.Drawing.Imaging.EncoderParameter::type
	int32_t ___type_2;
	// System.IntPtr System.Drawing.Imaging.EncoderParameter::valuePtr
	IntPtr_t ___valuePtr_3;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(EncoderParameter_t138078747, ___encoder_0)); }
	inline Encoder_t290915261 * get_encoder_0() const { return ___encoder_0; }
	inline Encoder_t290915261 ** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(Encoder_t290915261 * value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier(&___encoder_0, value);
	}

	inline static int32_t get_offset_of_valuesCount_1() { return static_cast<int32_t>(offsetof(EncoderParameter_t138078747, ___valuesCount_1)); }
	inline int32_t get_valuesCount_1() const { return ___valuesCount_1; }
	inline int32_t* get_address_of_valuesCount_1() { return &___valuesCount_1; }
	inline void set_valuesCount_1(int32_t value)
	{
		___valuesCount_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(EncoderParameter_t138078747, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_valuePtr_3() { return static_cast<int32_t>(offsetof(EncoderParameter_t138078747, ___valuePtr_3)); }
	inline IntPtr_t get_valuePtr_3() const { return ___valuePtr_3; }
	inline IntPtr_t* get_address_of_valuePtr_3() { return &___valuePtr_3; }
	inline void set_valuePtr_3(IntPtr_t value)
	{
		___valuePtr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t138078747_marshaled_pinvoke
{
	Encoder_t290915261 * ___encoder_0;
	int32_t ___valuesCount_1;
	int32_t ___type_2;
	intptr_t ___valuePtr_3;
};
// Native definition for COM marshalling of System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t138078747_marshaled_com
{
	Encoder_t290915261 * ___encoder_0;
	int32_t ___valuesCount_1;
	int32_t ___type_2;
	intptr_t ___valuePtr_3;
};
