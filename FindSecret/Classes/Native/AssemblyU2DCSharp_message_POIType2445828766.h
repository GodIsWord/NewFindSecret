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

// message.POIType
struct  POIType_t2445828766  : public Il2CppObject
{
public:
	// System.String message.POIType::_code
	String_t* ____code_0;
	// System.String message.POIType::_name
	String_t* ____name_1;
	// ProtoBuf.IExtension message.POIType::extensionObject
	Il2CppObject * ___extensionObject_2;

public:
	inline static int32_t get_offset_of__code_0() { return static_cast<int32_t>(offsetof(POIType_t2445828766, ____code_0)); }
	inline String_t* get__code_0() const { return ____code_0; }
	inline String_t** get_address_of__code_0() { return &____code_0; }
	inline void set__code_0(String_t* value)
	{
		____code_0 = value;
		Il2CppCodeGenWriteBarrier(&____code_0, value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(POIType_t2445828766, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of_extensionObject_2() { return static_cast<int32_t>(offsetof(POIType_t2445828766, ___extensionObject_2)); }
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
