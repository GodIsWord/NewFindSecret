#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3828501457.h"

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1064819932;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaGroupBase
struct  XmlSchemaGroupBase_t3631079376  : public XmlSchemaParticle_t3828501457
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::compiledItems
	XmlSchemaObjectCollection_t1064819932 * ___compiledItems_27;

public:
	inline static int32_t get_offset_of_compiledItems_27() { return static_cast<int32_t>(offsetof(XmlSchemaGroupBase_t3631079376, ___compiledItems_27)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_compiledItems_27() const { return ___compiledItems_27; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_compiledItems_27() { return &___compiledItems_27; }
	inline void set_compiledItems_27(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___compiledItems_27 = value;
		Il2CppCodeGenWriteBarrier(&___compiledItems_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
