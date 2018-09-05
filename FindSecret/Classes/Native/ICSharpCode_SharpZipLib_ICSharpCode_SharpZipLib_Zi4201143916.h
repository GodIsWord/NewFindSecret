#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct  StreamManipulator_t4201143916  : public Il2CppObject
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::window_
	ByteU5BU5D_t4116647657* ___window__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowStart_
	int32_t ___windowStart__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowEnd_
	int32_t ___windowEnd__2;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::buffer_
	uint32_t ___buffer__3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::bitsInBuffer_
	int32_t ___bitsInBuffer__4;

public:
	inline static int32_t get_offset_of_window__0() { return static_cast<int32_t>(offsetof(StreamManipulator_t4201143916, ___window__0)); }
	inline ByteU5BU5D_t4116647657* get_window__0() const { return ___window__0; }
	inline ByteU5BU5D_t4116647657** get_address_of_window__0() { return &___window__0; }
	inline void set_window__0(ByteU5BU5D_t4116647657* value)
	{
		___window__0 = value;
		Il2CppCodeGenWriteBarrier(&___window__0, value);
	}

	inline static int32_t get_offset_of_windowStart__1() { return static_cast<int32_t>(offsetof(StreamManipulator_t4201143916, ___windowStart__1)); }
	inline int32_t get_windowStart__1() const { return ___windowStart__1; }
	inline int32_t* get_address_of_windowStart__1() { return &___windowStart__1; }
	inline void set_windowStart__1(int32_t value)
	{
		___windowStart__1 = value;
	}

	inline static int32_t get_offset_of_windowEnd__2() { return static_cast<int32_t>(offsetof(StreamManipulator_t4201143916, ___windowEnd__2)); }
	inline int32_t get_windowEnd__2() const { return ___windowEnd__2; }
	inline int32_t* get_address_of_windowEnd__2() { return &___windowEnd__2; }
	inline void set_windowEnd__2(int32_t value)
	{
		___windowEnd__2 = value;
	}

	inline static int32_t get_offset_of_buffer__3() { return static_cast<int32_t>(offsetof(StreamManipulator_t4201143916, ___buffer__3)); }
	inline uint32_t get_buffer__3() const { return ___buffer__3; }
	inline uint32_t* get_address_of_buffer__3() { return &___buffer__3; }
	inline void set_buffer__3(uint32_t value)
	{
		___buffer__3 = value;
	}

	inline static int32_t get_offset_of_bitsInBuffer__4() { return static_cast<int32_t>(offsetof(StreamManipulator_t4201143916, ___bitsInBuffer__4)); }
	inline int32_t get_bitsInBuffer__4() const { return ___bitsInBuffer__4; }
	inline int32_t* get_address_of_bitsInBuffer__4() { return &___bitsInBuffer__4; }
	inline void set_bitsInBuffer__4(int32_t value)
	{
		___bitsInBuffer__4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
