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
#include "System_Drawing_System_Drawing_CarbonContext3570584123.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Graphics
struct  Graphics_t2557146384  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Drawing.Graphics::nativeObject
	IntPtr_t ___nativeObject_1;
	// System.Drawing.CarbonContext System.Drawing.Graphics::context
	CarbonContext_t3570584123  ___context_2;
	// System.Boolean System.Drawing.Graphics::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_nativeObject_1() { return static_cast<int32_t>(offsetof(Graphics_t2557146384, ___nativeObject_1)); }
	inline IntPtr_t get_nativeObject_1() const { return ___nativeObject_1; }
	inline IntPtr_t* get_address_of_nativeObject_1() { return &___nativeObject_1; }
	inline void set_nativeObject_1(IntPtr_t value)
	{
		___nativeObject_1 = value;
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(Graphics_t2557146384, ___context_2)); }
	inline CarbonContext_t3570584123  get_context_2() const { return ___context_2; }
	inline CarbonContext_t3570584123 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(CarbonContext_t3570584123  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(Graphics_t2557146384, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
