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
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeShare
struct  NativeShare_t4027546635  : public Il2CppObject
{
public:
	// System.String NativeShare::subject
	String_t* ___subject_0;
	// System.String NativeShare::text
	String_t* ___text_1;
	// System.String NativeShare::title
	String_t* ___title_2;
	// System.String NativeShare::targetPackage
	String_t* ___targetPackage_3;
	// System.String NativeShare::targetClass
	String_t* ___targetClass_4;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_t3319525431 * ___files_5;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_t3319525431 * ___mimes_6;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier(&___subject_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_targetPackage_3() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___targetPackage_3)); }
	inline String_t* get_targetPackage_3() const { return ___targetPackage_3; }
	inline String_t** get_address_of_targetPackage_3() { return &___targetPackage_3; }
	inline void set_targetPackage_3(String_t* value)
	{
		___targetPackage_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetPackage_3, value);
	}

	inline static int32_t get_offset_of_targetClass_4() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___targetClass_4)); }
	inline String_t* get_targetClass_4() const { return ___targetClass_4; }
	inline String_t** get_address_of_targetClass_4() { return &___targetClass_4; }
	inline void set_targetClass_4(String_t* value)
	{
		___targetClass_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetClass_4, value);
	}

	inline static int32_t get_offset_of_files_5() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___files_5)); }
	inline List_1_t3319525431 * get_files_5() const { return ___files_5; }
	inline List_1_t3319525431 ** get_address_of_files_5() { return &___files_5; }
	inline void set_files_5(List_1_t3319525431 * value)
	{
		___files_5 = value;
		Il2CppCodeGenWriteBarrier(&___files_5, value);
	}

	inline static int32_t get_offset_of_mimes_6() { return static_cast<int32_t>(offsetof(NativeShare_t4027546635, ___mimes_6)); }
	inline List_1_t3319525431 * get_mimes_6() const { return ___mimes_6; }
	inline List_1_t3319525431 ** get_address_of_mimes_6() { return &___mimes_6; }
	inline void set_mimes_6(List_1_t3319525431 * value)
	{
		___mimes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mimes_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
