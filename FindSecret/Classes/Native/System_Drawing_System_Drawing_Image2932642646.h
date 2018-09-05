#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_MarshalByRefObject2760389100.h"
#include "mscorlib_System_IntPtr840150181.h"

// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Image
struct  Image_t2932642646  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Drawing.Image::nativeObject
	IntPtr_t ___nativeObject_1;
	// System.IO.Stream System.Drawing.Image::stream
	Stream_t1273022909 * ___stream_2;

public:
	inline static int32_t get_offset_of_nativeObject_1() { return static_cast<int32_t>(offsetof(Image_t2932642646, ___nativeObject_1)); }
	inline IntPtr_t get_nativeObject_1() const { return ___nativeObject_1; }
	inline IntPtr_t* get_address_of_nativeObject_1() { return &___nativeObject_1; }
	inline void set_nativeObject_1(IntPtr_t value)
	{
		___nativeObject_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(Image_t2932642646, ___stream_2)); }
	inline Stream_t1273022909 * get_stream_2() const { return ___stream_2; }
	inline Stream_t1273022909 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(Stream_t1273022909 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier(&___stream_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
