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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct  OutputWindow_t874853933  : public Il2CppObject
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::window
	ByteU5BU5D_t4116647657* ___window_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::windowEnd
	int32_t ___windowEnd_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::windowFilled
	int32_t ___windowFilled_2;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(OutputWindow_t874853933, ___window_0)); }
	inline ByteU5BU5D_t4116647657* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t4116647657* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier(&___window_0, value);
	}

	inline static int32_t get_offset_of_windowEnd_1() { return static_cast<int32_t>(offsetof(OutputWindow_t874853933, ___windowEnd_1)); }
	inline int32_t get_windowEnd_1() const { return ___windowEnd_1; }
	inline int32_t* get_address_of_windowEnd_1() { return &___windowEnd_1; }
	inline void set_windowEnd_1(int32_t value)
	{
		___windowEnd_1 = value;
	}

	inline static int32_t get_offset_of_windowFilled_2() { return static_cast<int32_t>(offsetof(OutputWindow_t874853933, ___windowFilled_2)); }
	inline int32_t get_windowFilled_2() const { return ___windowFilled_2; }
	inline int32_t* get_address_of_windowFilled_2() { return &___windowFilled_2; }
	inline void set_windowFilled_2(int32_t value)
	{
		___windowFilled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
