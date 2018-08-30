#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3828501457.h"

// System.Xml.Schema.XmlSchema
struct XmlSchema_t3742557897;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t1441741786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaGroupRef
struct  XmlSchemaGroupRef_t1314446647  : public XmlSchemaParticle_t3828501457
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaGroupRef::schema
	XmlSchema_t3742557897 * ___schema_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::refName
	XmlQualifiedName_t2760654312 * ___refName_28;
	// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::referencedGroup
	XmlSchemaGroup_t1441741786 * ___referencedGroup_29;
	// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::busy
	bool ___busy_30;

public:
	inline static int32_t get_offset_of_schema_27() { return static_cast<int32_t>(offsetof(XmlSchemaGroupRef_t1314446647, ___schema_27)); }
	inline XmlSchema_t3742557897 * get_schema_27() const { return ___schema_27; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_27() { return &___schema_27; }
	inline void set_schema_27(XmlSchema_t3742557897 * value)
	{
		___schema_27 = value;
		Il2CppCodeGenWriteBarrier(&___schema_27, value);
	}

	inline static int32_t get_offset_of_refName_28() { return static_cast<int32_t>(offsetof(XmlSchemaGroupRef_t1314446647, ___refName_28)); }
	inline XmlQualifiedName_t2760654312 * get_refName_28() const { return ___refName_28; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_refName_28() { return &___refName_28; }
	inline void set_refName_28(XmlQualifiedName_t2760654312 * value)
	{
		___refName_28 = value;
		Il2CppCodeGenWriteBarrier(&___refName_28, value);
	}

	inline static int32_t get_offset_of_referencedGroup_29() { return static_cast<int32_t>(offsetof(XmlSchemaGroupRef_t1314446647, ___referencedGroup_29)); }
	inline XmlSchemaGroup_t1441741786 * get_referencedGroup_29() const { return ___referencedGroup_29; }
	inline XmlSchemaGroup_t1441741786 ** get_address_of_referencedGroup_29() { return &___referencedGroup_29; }
	inline void set_referencedGroup_29(XmlSchemaGroup_t1441741786 * value)
	{
		___referencedGroup_29 = value;
		Il2CppCodeGenWriteBarrier(&___referencedGroup_29, value);
	}

	inline static int32_t get_offset_of_busy_30() { return static_cast<int32_t>(offsetof(XmlSchemaGroupRef_t1314446647, ___busy_30)); }
	inline bool get_busy_30() const { return ___busy_30; }
	inline bool* get_address_of_busy_30() { return &___busy_30; }
	inline void set_busy_30(bool value)
	{
		___busy_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
