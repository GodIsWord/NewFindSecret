﻿#pragma once

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

// message.GCIdlePrompt
struct  GCIdlePrompt_t3941021980  : public Il2CppObject
{
public:
	// System.String message.GCIdlePrompt::_contents
	String_t* ____contents_0;
	// ProtoBuf.IExtension message.GCIdlePrompt::extensionObject
	Il2CppObject * ___extensionObject_1;

public:
	inline static int32_t get_offset_of__contents_0() { return static_cast<int32_t>(offsetof(GCIdlePrompt_t3941021980, ____contents_0)); }
	inline String_t* get__contents_0() const { return ____contents_0; }
	inline String_t** get_address_of__contents_0() { return &____contents_0; }
	inline void set__contents_0(String_t* value)
	{
		____contents_0 = value;
		Il2CppCodeGenWriteBarrier(&____contents_0, value);
	}

	inline static int32_t get_offset_of_extensionObject_1() { return static_cast<int32_t>(offsetof(GCIdlePrompt_t3941021980, ___extensionObject_1)); }
	inline Il2CppObject * get_extensionObject_1() const { return ___extensionObject_1; }
	inline Il2CppObject ** get_address_of_extensionObject_1() { return &___extensionObject_1; }
	inline void set_extensionObject_1(Il2CppObject * value)
	{
		___extensionObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___extensionObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif