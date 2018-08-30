#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3591816995.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.LockContentedEventArgs
struct  LockContentedEventArgs_t998650713  : public EventArgs_t3591816995
{
public:
	// System.String ProtoBuf.Meta.LockContentedEventArgs::ownerStackTrace
	String_t* ___ownerStackTrace_1;

public:
	inline static int32_t get_offset_of_ownerStackTrace_1() { return static_cast<int32_t>(offsetof(LockContentedEventArgs_t998650713, ___ownerStackTrace_1)); }
	inline String_t* get_ownerStackTrace_1() const { return ___ownerStackTrace_1; }
	inline String_t** get_address_of_ownerStackTrace_1() { return &___ownerStackTrace_1; }
	inline void set_ownerStackTrace_1(String_t* value)
	{
		___ownerStackTrace_1 = value;
		Il2CppCodeGenWriteBarrier(&___ownerStackTrace_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
