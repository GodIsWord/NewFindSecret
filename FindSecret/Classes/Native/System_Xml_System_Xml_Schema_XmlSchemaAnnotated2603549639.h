#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaObject1315720168.h"

// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2553753397;
// System.String
struct String_t;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_t1490365106;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnnotated
struct  XmlSchemaAnnotated_t2603549639  : public XmlSchemaObject_t1315720168
{
public:
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_t2553753397 * ___annotation_13;
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::unhandledAttributes
	XmlAttributeU5BU5D_t1490365106* ___unhandledAttributes_15;

public:
	inline static int32_t get_offset_of_annotation_13() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___annotation_13)); }
	inline XmlSchemaAnnotation_t2553753397 * get_annotation_13() const { return ___annotation_13; }
	inline XmlSchemaAnnotation_t2553753397 ** get_address_of_annotation_13() { return &___annotation_13; }
	inline void set_annotation_13(XmlSchemaAnnotation_t2553753397 * value)
	{
		___annotation_13 = value;
		Il2CppCodeGenWriteBarrier(&___annotation_13, value);
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___id_14)); }
	inline String_t* get_id_14() const { return ___id_14; }
	inline String_t** get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(String_t* value)
	{
		___id_14 = value;
		Il2CppCodeGenWriteBarrier(&___id_14, value);
	}

	inline static int32_t get_offset_of_unhandledAttributes_15() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___unhandledAttributes_15)); }
	inline XmlAttributeU5BU5D_t1490365106* get_unhandledAttributes_15() const { return ___unhandledAttributes_15; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_unhandledAttributes_15() { return &___unhandledAttributes_15; }
	inline void set_unhandledAttributes_15(XmlAttributeU5BU5D_t1490365106* value)
	{
		___unhandledAttributes_15 = value;
		Il2CppCodeGenWriteBarrier(&___unhandledAttributes_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
