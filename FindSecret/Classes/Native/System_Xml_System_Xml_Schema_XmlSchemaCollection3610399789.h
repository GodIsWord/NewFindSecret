#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t3610399789  : public Il2CppObject
{
public:
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::schemaSet
	XmlSchemaSet_t266093086 * ___schemaSet_0;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::ValidationEventHandler
	ValidationEventHandler_t791314227 * ___ValidationEventHandler_1;

public:
	inline static int32_t get_offset_of_schemaSet_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___schemaSet_0)); }
	inline XmlSchemaSet_t266093086 * get_schemaSet_0() const { return ___schemaSet_0; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemaSet_0() { return &___schemaSet_0; }
	inline void set_schemaSet_0(XmlSchemaSet_t266093086 * value)
	{
		___schemaSet_0 = value;
		Il2CppCodeGenWriteBarrier(&___schemaSet_0, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___ValidationEventHandler_1)); }
	inline ValidationEventHandler_t791314227 * get_ValidationEventHandler_1() const { return ___ValidationEventHandler_1; }
	inline ValidationEventHandler_t791314227 ** get_address_of_ValidationEventHandler_1() { return &___ValidationEventHandler_1; }
	inline void set_ValidationEventHandler_1(ValidationEventHandler_t791314227 * value)
	{
		___ValidationEventHandler_1 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
