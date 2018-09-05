#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Xml_System_Xml_XmlLinkedNode1437094927.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t2821286253;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocumentType
struct  XmlDocumentType_t4112370061  : public XmlLinkedNode_t1437094927
{
public:
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t2821286253 * ___entities_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t2821286253 * ___notations_7;
	// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::dtd
	DTDObjectModel_t1729680289 * ___dtd_8;

public:
	inline static int32_t get_offset_of_entities_6() { return static_cast<int32_t>(offsetof(XmlDocumentType_t4112370061, ___entities_6)); }
	inline XmlNamedNodeMap_t2821286253 * get_entities_6() const { return ___entities_6; }
	inline XmlNamedNodeMap_t2821286253 ** get_address_of_entities_6() { return &___entities_6; }
	inline void set_entities_6(XmlNamedNodeMap_t2821286253 * value)
	{
		___entities_6 = value;
		Il2CppCodeGenWriteBarrier(&___entities_6, value);
	}

	inline static int32_t get_offset_of_notations_7() { return static_cast<int32_t>(offsetof(XmlDocumentType_t4112370061, ___notations_7)); }
	inline XmlNamedNodeMap_t2821286253 * get_notations_7() const { return ___notations_7; }
	inline XmlNamedNodeMap_t2821286253 ** get_address_of_notations_7() { return &___notations_7; }
	inline void set_notations_7(XmlNamedNodeMap_t2821286253 * value)
	{
		___notations_7 = value;
		Il2CppCodeGenWriteBarrier(&___notations_7, value);
	}

	inline static int32_t get_offset_of_dtd_8() { return static_cast<int32_t>(offsetof(XmlDocumentType_t4112370061, ___dtd_8)); }
	inline DTDObjectModel_t1729680289 * get_dtd_8() const { return ___dtd_8; }
	inline DTDObjectModel_t1729680289 ** get_address_of_dtd_8() { return &___dtd_8; }
	inline void set_dtd_8(DTDObjectModel_t1729680289 * value)
	{
		___dtd_8 = value;
		Il2CppCodeGenWriteBarrier(&___dtd_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
