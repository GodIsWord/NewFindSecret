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

// ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer
struct  PendingBuffer_t2576795670  : public Il2CppObject
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::buffer_
	ByteU5BU5D_t4116647657* ___buffer__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::start
	int32_t ___start_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::end
	int32_t ___end_2;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::bits
	uint32_t ___bits_3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::bitCount
	int32_t ___bitCount_4;

public:
	inline static int32_t get_offset_of_buffer__0() { return static_cast<int32_t>(offsetof(PendingBuffer_t2576795670, ___buffer__0)); }
	inline ByteU5BU5D_t4116647657* get_buffer__0() const { return ___buffer__0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer__0() { return &___buffer__0; }
	inline void set_buffer__0(ByteU5BU5D_t4116647657* value)
	{
		___buffer__0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer__0, value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(PendingBuffer_t2576795670, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(PendingBuffer_t2576795670, ___end_2)); }
	inline int32_t get_end_2() const { return ___end_2; }
	inline int32_t* get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(int32_t value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(PendingBuffer_t2576795670, ___bits_3)); }
	inline uint32_t get_bits_3() const { return ___bits_3; }
	inline uint32_t* get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(uint32_t value)
	{
		___bits_3 = value;
	}

	inline static int32_t get_offset_of_bitCount_4() { return static_cast<int32_t>(offsetof(PendingBuffer_t2576795670, ___bitCount_4)); }
	inline int32_t get_bitCount_4() const { return ___bitCount_4; }
	inline int32_t* get_address_of_bitCount_4() { return &___bitCount_4; }
	inline void set_bitCount_4(int32_t value)
	{
		___bitCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
