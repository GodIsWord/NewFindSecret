#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Text_RegularExpressions_LinkRef2971865410.h"

// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RxLinkRef
struct  RxLinkRef_t3349372210  : public LinkRef_t2971865410
{
public:
	// System.Int32[] System.Text.RegularExpressions.RxLinkRef::offsets
	Int32U5BU5D_t385246372* ___offsets_0;
	// System.Int32 System.Text.RegularExpressions.RxLinkRef::current
	int32_t ___current_1;

public:
	inline static int32_t get_offset_of_offsets_0() { return static_cast<int32_t>(offsetof(RxLinkRef_t3349372210, ___offsets_0)); }
	inline Int32U5BU5D_t385246372* get_offsets_0() const { return ___offsets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_offsets_0() { return &___offsets_0; }
	inline void set_offsets_0(Int32U5BU5D_t385246372* value)
	{
		___offsets_0 = value;
		Il2CppCodeGenWriteBarrier(&___offsets_0, value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(RxLinkRef_t3349372210, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
