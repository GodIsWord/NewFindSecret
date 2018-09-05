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
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.MultipartFormFileSection
struct  MultipartFormFileSection_t361075044  : public Il2CppObject
{
public:
	// System.String UnityEngine.Networking.MultipartFormFileSection::name
	String_t* ___name_0;
	// System.Byte[] UnityEngine.Networking.MultipartFormFileSection::data
	ByteU5BU5D_t4116647657* ___data_1;
	// System.String UnityEngine.Networking.MultipartFormFileSection::file
	String_t* ___file_2;
	// System.String UnityEngine.Networking.MultipartFormFileSection::content
	String_t* ___content_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MultipartFormFileSection_t361075044, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MultipartFormFileSection_t361075044, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_file_2() { return static_cast<int32_t>(offsetof(MultipartFormFileSection_t361075044, ___file_2)); }
	inline String_t* get_file_2() const { return ___file_2; }
	inline String_t** get_address_of_file_2() { return &___file_2; }
	inline void set_file_2(String_t* value)
	{
		___file_2 = value;
		Il2CppCodeGenWriteBarrier(&___file_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(MultipartFormFileSection_t361075044, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
