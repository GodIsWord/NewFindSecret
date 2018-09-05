#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaContentModel602185179.h"

// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t1040349258;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexContent
struct  XmlSchemaComplexContent_t3528540772  : public XmlSchemaContentModel_t602185179
{
public:
	// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaComplexContent::content
	XmlSchemaContent_t1040349258 * ___content_16;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::isMixed
	bool ___isMixed_17;

public:
	inline static int32_t get_offset_of_content_16() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContent_t3528540772, ___content_16)); }
	inline XmlSchemaContent_t1040349258 * get_content_16() const { return ___content_16; }
	inline XmlSchemaContent_t1040349258 ** get_address_of_content_16() { return &___content_16; }
	inline void set_content_16(XmlSchemaContent_t1040349258 * value)
	{
		___content_16 = value;
		Il2CppCodeGenWriteBarrier(&___content_16, value);
	}

	inline static int32_t get_offset_of_isMixed_17() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContent_t3528540772, ___isMixed_17)); }
	inline bool get_isMixed_17() const { return ___isMixed_17; }
	inline bool* get_address_of_isMixed_17() { return &___isMixed_17; }
	inline void set_isMixed_17(bool value)
	{
		___isMixed_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
