#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// Mono.Xml.Schema.XmlSchemaUri
struct XmlSchemaUri_t3948303260;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.UriValueType
struct  UriValueType_t2866347695 
{
public:
	// Mono.Xml.Schema.XmlSchemaUri System.Xml.Schema.UriValueType::value
	XmlSchemaUri_t3948303260 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(UriValueType_t2866347695, ___value_0)); }
	inline XmlSchemaUri_t3948303260 * get_value_0() const { return ___value_0; }
	inline XmlSchemaUri_t3948303260 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XmlSchemaUri_t3948303260 * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.UriValueType
struct UriValueType_t2866347695_marshaled_pinvoke
{
	XmlSchemaUri_t3948303260 * ___value_0;
};
// Native definition for COM marshalling of System.Xml.Schema.UriValueType
struct UriValueType_t2866347695_marshaled_com
{
	XmlSchemaUri_t3948303260 * ___value_0;
};
