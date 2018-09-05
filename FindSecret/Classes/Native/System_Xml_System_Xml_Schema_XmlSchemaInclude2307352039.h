#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaExternal3074890143.h"

// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2553753397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaInclude
struct  XmlSchemaInclude_t2307352039  : public XmlSchemaExternal_t3074890143
{
public:
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaInclude::annotation
	XmlSchemaAnnotation_t2553753397 * ___annotation_16;

public:
	inline static int32_t get_offset_of_annotation_16() { return static_cast<int32_t>(offsetof(XmlSchemaInclude_t2307352039, ___annotation_16)); }
	inline XmlSchemaAnnotation_t2553753397 * get_annotation_16() const { return ___annotation_16; }
	inline XmlSchemaAnnotation_t2553753397 ** get_address_of_annotation_16() { return &___annotation_16; }
	inline void set_annotation_16(XmlSchemaAnnotation_t2553753397 * value)
	{
		___annotation_16 = value;
		Il2CppCodeGenWriteBarrier(&___annotation_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
