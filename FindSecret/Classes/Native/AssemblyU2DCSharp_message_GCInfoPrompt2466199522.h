#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;
// ProtoBuf.IExtension
struct IExtension_t3291225028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// message.GCInfoPrompt
struct  GCInfoPrompt_t2466199522  : public Il2CppObject
{
public:
	// System.Int32 message.GCInfoPrompt::_code
	int32_t ____code_0;
	// System.String message.GCInfoPrompt::_contents
	String_t* ____contents_1;
	// ProtoBuf.IExtension message.GCInfoPrompt::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__code_0() { return static_cast<int32_t>(offsetof(GCInfoPrompt_t2466199522, ____code_0)); }
	inline int32_t get__code_0() const { return ____code_0; }
	inline int32_t* get_address_of__code_0() { return &____code_0; }
	inline void set__code_0(int32_t value)
	{
		____code_0 = value;
	}

	inline static int32_t get_offset_of__contents_1() { return static_cast<int32_t>(offsetof(GCInfoPrompt_t2466199522, ____contents_1)); }
	inline String_t* get__contents_1() const { return ____contents_1; }
	inline String_t** get_address_of__contents_1() { return &____contents_1; }
	inline void set__contents_1(String_t* value)
	{
		____contents_1 = value;
		Il2CppCodeGenWriteBarrier(&____contents_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(GCInfoPrompt_t2466199522, ___extensionObject_2)); }
	inline Il2CppObject * get_extensionObject_2() const { return ___extensionObject_2; }
	inline Il2CppObject ** get_address_of_extensionObject_2() { return &___extensionObject_2; }
	inline void set_extensionObject_2(Il2CppObject * value)
	{
		___extensionObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
