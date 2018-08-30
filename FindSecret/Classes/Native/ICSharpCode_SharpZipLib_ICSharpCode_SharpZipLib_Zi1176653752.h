#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream1273022909.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t642114133;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t2764071213;
// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct  InflaterInputStream_t1176653752  : public Stream_t1273022909
{
public:
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t642114133 * ___inf_2;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t2764071213 * ___inputBuffer_3;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_t1273022909 * ___baseInputStream_4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_6;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isStreamOwner
	bool ___isStreamOwner_7;

public:
	inline static int32_t get_offset_of_inf_2() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___inf_2)); }
	inline Inflater_t642114133 * get_inf_2() const { return ___inf_2; }
	inline Inflater_t642114133 ** get_address_of_inf_2() { return &___inf_2; }
	inline void set_inf_2(Inflater_t642114133 * value)
	{
		___inf_2 = value;
		Il2CppCodeGenWriteBarrier(&___inf_2, value);
	}

	inline static int32_t get_offset_of_inputBuffer_3() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___inputBuffer_3)); }
	inline InflaterInputBuffer_t2764071213 * get_inputBuffer_3() const { return ___inputBuffer_3; }
	inline InflaterInputBuffer_t2764071213 ** get_address_of_inputBuffer_3() { return &___inputBuffer_3; }
	inline void set_inputBuffer_3(InflaterInputBuffer_t2764071213 * value)
	{
		___inputBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputBuffer_3, value);
	}

	inline static int32_t get_offset_of_baseInputStream_4() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___baseInputStream_4)); }
	inline Stream_t1273022909 * get_baseInputStream_4() const { return ___baseInputStream_4; }
	inline Stream_t1273022909 ** get_address_of_baseInputStream_4() { return &___baseInputStream_4; }
	inline void set_baseInputStream_4(Stream_t1273022909 * value)
	{
		___baseInputStream_4 = value;
		Il2CppCodeGenWriteBarrier(&___baseInputStream_4, value);
	}

	inline static int32_t get_offset_of_csize_5() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___csize_5)); }
	inline int64_t get_csize_5() const { return ___csize_5; }
	inline int64_t* get_address_of_csize_5() { return &___csize_5; }
	inline void set_csize_5(int64_t value)
	{
		___csize_5 = value;
	}

	inline static int32_t get_offset_of_isClosed_6() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___isClosed_6)); }
	inline bool get_isClosed_6() const { return ___isClosed_6; }
	inline bool* get_address_of_isClosed_6() { return &___isClosed_6; }
	inline void set_isClosed_6(bool value)
	{
		___isClosed_6 = value;
	}

	inline static int32_t get_offset_of_isStreamOwner_7() { return static_cast<int32_t>(offsetof(InflaterInputStream_t1176653752, ___isStreamOwner_7)); }
	inline bool get_isStreamOwner_7() const { return ___isStreamOwner_7; }
	inline bool* get_address_of_isStreamOwner_7() { return &___isStreamOwner_7; }
	inline void set_isStreamOwner_7(bool value)
	{
		___isStreamOwner_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
