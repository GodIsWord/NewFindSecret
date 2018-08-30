#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlReader3121518892.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t4233384356;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3455035481;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2690840144;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t4233384356  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t4233384356 * ___entity_2;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3455035481 * ___source_3;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_5;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2690840144 * ___entityNameStack_6;

public:
	inline static int32_t get_offset_of_entity_2() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entity_2)); }
	inline XmlTextReader_t4233384356 * get_entity_2() const { return ___entity_2; }
	inline XmlTextReader_t4233384356 ** get_address_of_entity_2() { return &___entity_2; }
	inline void set_entity_2(XmlTextReader_t4233384356 * value)
	{
		___entity_2 = value;
		Il2CppCodeGenWriteBarrier(&___entity_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___source_3)); }
	inline XmlTextReader_t3455035481 * get_source_3() const { return ___source_3; }
	inline XmlTextReader_t3455035481 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(XmlTextReader_t3455035481 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityInsideAttribute_4)); }
	inline bool get_entityInsideAttribute_4() const { return ___entityInsideAttribute_4; }
	inline bool* get_address_of_entityInsideAttribute_4() { return &___entityInsideAttribute_4; }
	inline void set_entityInsideAttribute_4(bool value)
	{
		___entityInsideAttribute_4 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___insideAttribute_5)); }
	inline bool get_insideAttribute_5() const { return ___insideAttribute_5; }
	inline bool* get_address_of_insideAttribute_5() { return &___insideAttribute_5; }
	inline void set_insideAttribute_5(bool value)
	{
		___insideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityNameStack_6)); }
	inline Stack_1_t2690840144 * get_entityNameStack_6() const { return ___entityNameStack_6; }
	inline Stack_1_t2690840144 ** get_address_of_entityNameStack_6() { return &___entityNameStack_6; }
	inline void set_entityNameStack_6(Stack_1_t2690840144 * value)
	{
		___entityNameStack_6 = value;
		Il2CppCodeGenWriteBarrier(&___entityNameStack_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
