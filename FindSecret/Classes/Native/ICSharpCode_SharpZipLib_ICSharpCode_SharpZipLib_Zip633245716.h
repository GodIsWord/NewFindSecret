#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream1273022909.h"

// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct  ZipHelperStream_t633245716  : public Stream_t1273022909
{
public:
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::isOwner_
	bool ___isOwner__2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipHelperStream::stream_
	Stream_t1273022909 * ___stream__3;

public:
	inline static int32_t get_offset_of_isOwner__2() { return static_cast<int32_t>(offsetof(ZipHelperStream_t633245716, ___isOwner__2)); }
	inline bool get_isOwner__2() const { return ___isOwner__2; }
	inline bool* get_address_of_isOwner__2() { return &___isOwner__2; }
	inline void set_isOwner__2(bool value)
	{
		___isOwner__2 = value;
	}

	inline static int32_t get_offset_of_stream__3() { return static_cast<int32_t>(offsetof(ZipHelperStream_t633245716, ___stream__3)); }
	inline Stream_t1273022909 * get_stream__3() const { return ___stream__3; }
	inline Stream_t1273022909 ** get_address_of_stream__3() { return &___stream__3; }
	inline void set_stream__3(Stream_t1273022909 * value)
	{
		___stream__3 = value;
		Il2CppCodeGenWriteBarrier(&___stream__3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
