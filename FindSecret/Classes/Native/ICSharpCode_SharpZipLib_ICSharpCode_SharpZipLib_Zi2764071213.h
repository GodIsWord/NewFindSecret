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
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct  InflaterInputBuffer_t2764071213  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_t4116647657* ___rawData_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_t4116647657* ___clearText_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::internalClearText
	ByteU5BU5D_t4116647657* ___internalClearText_4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_5;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::cryptoTransform
	Il2CppObject * ___cryptoTransform_6;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_t1273022909 * ___inputStream_7;

public:
	inline static int32_t get_offset_of_rawLength_0() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___rawLength_0)); }
	inline int32_t get_rawLength_0() const { return ___rawLength_0; }
	inline int32_t* get_address_of_rawLength_0() { return &___rawLength_0; }
	inline void set_rawLength_0(int32_t value)
	{
		___rawLength_0 = value;
	}

	inline static int32_t get_offset_of_rawData_1() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___rawData_1)); }
	inline ByteU5BU5D_t4116647657* get_rawData_1() const { return ___rawData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_rawData_1() { return &___rawData_1; }
	inline void set_rawData_1(ByteU5BU5D_t4116647657* value)
	{
		___rawData_1 = value;
		Il2CppCodeGenWriteBarrier(&___rawData_1, value);
	}

	inline static int32_t get_offset_of_clearTextLength_2() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___clearTextLength_2)); }
	inline int32_t get_clearTextLength_2() const { return ___clearTextLength_2; }
	inline int32_t* get_address_of_clearTextLength_2() { return &___clearTextLength_2; }
	inline void set_clearTextLength_2(int32_t value)
	{
		___clearTextLength_2 = value;
	}

	inline static int32_t get_offset_of_clearText_3() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___clearText_3)); }
	inline ByteU5BU5D_t4116647657* get_clearText_3() const { return ___clearText_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_clearText_3() { return &___clearText_3; }
	inline void set_clearText_3(ByteU5BU5D_t4116647657* value)
	{
		___clearText_3 = value;
		Il2CppCodeGenWriteBarrier(&___clearText_3, value);
	}

	inline static int32_t get_offset_of_internalClearText_4() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___internalClearText_4)); }
	inline ByteU5BU5D_t4116647657* get_internalClearText_4() const { return ___internalClearText_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalClearText_4() { return &___internalClearText_4; }
	inline void set_internalClearText_4(ByteU5BU5D_t4116647657* value)
	{
		___internalClearText_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalClearText_4, value);
	}

	inline static int32_t get_offset_of_available_5() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___available_5)); }
	inline int32_t get_available_5() const { return ___available_5; }
	inline int32_t* get_address_of_available_5() { return &___available_5; }
	inline void set_available_5(int32_t value)
	{
		___available_5 = value;
	}

	inline static int32_t get_offset_of_cryptoTransform_6() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___cryptoTransform_6)); }
	inline Il2CppObject * get_cryptoTransform_6() const { return ___cryptoTransform_6; }
	inline Il2CppObject ** get_address_of_cryptoTransform_6() { return &___cryptoTransform_6; }
	inline void set_cryptoTransform_6(Il2CppObject * value)
	{
		___cryptoTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___cryptoTransform_6, value);
	}

	inline static int32_t get_offset_of_inputStream_7() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t2764071213, ___inputStream_7)); }
	inline Stream_t1273022909 * get_inputStream_7() const { return ___inputStream_7; }
	inline Stream_t1273022909 ** get_address_of_inputStream_7() { return &___inputStream_7; }
	inline void set_inputStream_7(Stream_t1273022909 * value)
	{
		___inputStream_7 = value;
		Il2CppCodeGenWriteBarrier(&___inputStream_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
