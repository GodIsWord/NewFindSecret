#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowOffEmoji/PosStringTuple
struct  PosStringTuple_t3884979041 
{
public:
	// System.Int32 ShowOffEmoji/PosStringTuple::pos
	int32_t ___pos_0;
	// System.String ShowOffEmoji/PosStringTuple::emoji
	String_t* ___emoji_1;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PosStringTuple_t3884979041, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_emoji_1() { return static_cast<int32_t>(offsetof(PosStringTuple_t3884979041, ___emoji_1)); }
	inline String_t* get_emoji_1() const { return ___emoji_1; }
	inline String_t** get_address_of_emoji_1() { return &___emoji_1; }
	inline void set_emoji_1(String_t* value)
	{
		___emoji_1 = value;
		Il2CppCodeGenWriteBarrier(&___emoji_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ShowOffEmoji/PosStringTuple
struct PosStringTuple_t3884979041_marshaled_pinvoke
{
	int32_t ___pos_0;
	char* ___emoji_1;
};
// Native definition for COM marshalling of ShowOffEmoji/PosStringTuple
struct PosStringTuple_t3884979041_marshaled_com
{
	int32_t ___pos_0;
	Il2CppChar* ___emoji_1;
};
