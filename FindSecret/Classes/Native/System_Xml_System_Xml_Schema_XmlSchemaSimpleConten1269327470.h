#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaContent1040349258.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t963227996;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1064819932;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct  XmlSchemaSimpleContentExtension_t1269327470  : public XmlSchemaContent_t1040349258
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::any
	XmlSchemaAnyAttribute_t963227996 * ___any_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::attributes
	XmlSchemaObjectCollection_t1064819932 * ___attributes_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::baseTypeName
	XmlQualifiedName_t2760654312 * ___baseTypeName_19;

public:
	inline static int32_t get_offset_of_any_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t1269327470, ___any_17)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_any_17() const { return ___any_17; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_any_17() { return &___any_17; }
	inline void set_any_17(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___any_17 = value;
		Il2CppCodeGenWriteBarrier(&___any_17, value);
	}

	inline static int32_t get_offset_of_attributes_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t1269327470, ___attributes_18)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_attributes_18() const { return ___attributes_18; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_attributes_18() { return &___attributes_18; }
	inline void set_attributes_18(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___attributes_18 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_18, value);
	}

	inline static int32_t get_offset_of_baseTypeName_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t1269327470, ___baseTypeName_19)); }
	inline XmlQualifiedName_t2760654312 * get_baseTypeName_19() const { return ___baseTypeName_19; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_baseTypeName_19() { return &___baseTypeName_19; }
	inline void set_baseTypeName_19(XmlQualifiedName_t2760654312 * value)
	{
		___baseTypeName_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
