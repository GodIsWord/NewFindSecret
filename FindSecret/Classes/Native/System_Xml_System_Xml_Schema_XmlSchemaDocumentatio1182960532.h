#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaObject1315720168.h"

// System.String
struct String_t;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t3728671178;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDocumentation
struct  XmlSchemaDocumentation_t1182960532  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaDocumentation::language
	String_t* ___language_13;
	// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::markup
	XmlNodeU5BU5D_t3728671178* ___markup_14;
	// System.String System.Xml.Schema.XmlSchemaDocumentation::source
	String_t* ___source_15;

public:
	inline static int32_t get_offset_of_language_13() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___language_13)); }
	inline String_t* get_language_13() const { return ___language_13; }
	inline String_t** get_address_of_language_13() { return &___language_13; }
	inline void set_language_13(String_t* value)
	{
		___language_13 = value;
		Il2CppCodeGenWriteBarrier(&___language_13, value);
	}

	inline static int32_t get_offset_of_markup_14() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___markup_14)); }
	inline XmlNodeU5BU5D_t3728671178* get_markup_14() const { return ___markup_14; }
	inline XmlNodeU5BU5D_t3728671178** get_address_of_markup_14() { return &___markup_14; }
	inline void set_markup_14(XmlNodeU5BU5D_t3728671178* value)
	{
		___markup_14 = value;
		Il2CppCodeGenWriteBarrier(&___markup_14, value);
	}

	inline static int32_t get_offset_of_source_15() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___source_15)); }
	inline String_t* get_source_15() const { return ___source_15; }
	inline String_t** get_address_of_source_15() { return &___source_15; }
	inline void set_source_15(String_t* value)
	{
		___source_15 = value;
		Il2CppCodeGenWriteBarrier(&___source_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
