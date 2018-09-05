#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.ComIStreamWrapper
struct  ComIStreamWrapper_t1385077908  : public Il2CppObject
{
public:
	// System.IO.Stream System.Drawing.ComIStreamWrapper::baseStream
	Stream_t1273022909 * ___baseStream_0;
	// System.Int64 System.Drawing.ComIStreamWrapper::position
	int64_t ___position_1;

public:
	inline static int32_t get_offset_of_baseStream_0() { return static_cast<int32_t>(offsetof(ComIStreamWrapper_t1385077908, ___baseStream_0)); }
	inline Stream_t1273022909 * get_baseStream_0() const { return ___baseStream_0; }
	inline Stream_t1273022909 ** get_address_of_baseStream_0() { return &___baseStream_0; }
	inline void set_baseStream_0(Stream_t1273022909 * value)
	{
		___baseStream_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseStream_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(ComIStreamWrapper_t1385077908, ___position_1)); }
	inline int64_t get_position_1() const { return ___position_1; }
	inline int64_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int64_t value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
