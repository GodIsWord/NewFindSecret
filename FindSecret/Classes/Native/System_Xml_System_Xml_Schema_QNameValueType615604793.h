#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.QNameValueType
struct  QNameValueType_t615604793 
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.QNameValueType::value
	XmlQualifiedName_t2760654312 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(QNameValueType_t615604793, ___value_0)); }
	inline XmlQualifiedName_t2760654312 * get_value_0() const { return ___value_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XmlQualifiedName_t2760654312 * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.QNameValueType
struct QNameValueType_t615604793_marshaled_pinvoke
{
	XmlQualifiedName_t2760654312 * ___value_0;
};
// Native definition for COM marshalling of System.Xml.Schema.QNameValueType
struct QNameValueType_t615604793_marshaled_com
{
	XmlQualifiedName_t2760654312 * ___value_0;
};
