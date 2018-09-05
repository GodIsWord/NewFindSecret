#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "mscorlib_System_IntPtr840150181.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.GdiplusStartupInput
struct  GdiplusStartupInput_t2136305947 
{
public:
	// System.UInt32 System.Drawing.GdiplusStartupInput::GdiplusVersion
	uint32_t ___GdiplusVersion_0;
	// System.IntPtr System.Drawing.GdiplusStartupInput::DebugEventCallback
	IntPtr_t ___DebugEventCallback_1;
	// System.Int32 System.Drawing.GdiplusStartupInput::SuppressBackgroundThread
	int32_t ___SuppressBackgroundThread_2;
	// System.Int32 System.Drawing.GdiplusStartupInput::SuppressExternalCodecs
	int32_t ___SuppressExternalCodecs_3;

public:
	inline static int32_t get_offset_of_GdiplusVersion_0() { return static_cast<int32_t>(offsetof(GdiplusStartupInput_t2136305947, ___GdiplusVersion_0)); }
	inline uint32_t get_GdiplusVersion_0() const { return ___GdiplusVersion_0; }
	inline uint32_t* get_address_of_GdiplusVersion_0() { return &___GdiplusVersion_0; }
	inline void set_GdiplusVersion_0(uint32_t value)
	{
		___GdiplusVersion_0 = value;
	}

	inline static int32_t get_offset_of_DebugEventCallback_1() { return static_cast<int32_t>(offsetof(GdiplusStartupInput_t2136305947, ___DebugEventCallback_1)); }
	inline IntPtr_t get_DebugEventCallback_1() const { return ___DebugEventCallback_1; }
	inline IntPtr_t* get_address_of_DebugEventCallback_1() { return &___DebugEventCallback_1; }
	inline void set_DebugEventCallback_1(IntPtr_t value)
	{
		___DebugEventCallback_1 = value;
	}

	inline static int32_t get_offset_of_SuppressBackgroundThread_2() { return static_cast<int32_t>(offsetof(GdiplusStartupInput_t2136305947, ___SuppressBackgroundThread_2)); }
	inline int32_t get_SuppressBackgroundThread_2() const { return ___SuppressBackgroundThread_2; }
	inline int32_t* get_address_of_SuppressBackgroundThread_2() { return &___SuppressBackgroundThread_2; }
	inline void set_SuppressBackgroundThread_2(int32_t value)
	{
		___SuppressBackgroundThread_2 = value;
	}

	inline static int32_t get_offset_of_SuppressExternalCodecs_3() { return static_cast<int32_t>(offsetof(GdiplusStartupInput_t2136305947, ___SuppressExternalCodecs_3)); }
	inline int32_t get_SuppressExternalCodecs_3() const { return ___SuppressExternalCodecs_3; }
	inline int32_t* get_address_of_SuppressExternalCodecs_3() { return &___SuppressExternalCodecs_3; }
	inline void set_SuppressExternalCodecs_3(int32_t value)
	{
		___SuppressExternalCodecs_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
