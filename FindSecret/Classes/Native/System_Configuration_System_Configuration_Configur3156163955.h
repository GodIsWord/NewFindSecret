#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur3318566633.h"

// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_13;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	Il2CppObject * ___section_handler_14;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_15;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	Il2CppObject * ____configContext_16;

public:
	inline static int32_t get_offset_of_sectionInformation_13() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_13)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_13() const { return ___sectionInformation_13; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_13() { return &___sectionInformation_13; }
	inline void set_sectionInformation_13(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_13 = value;
		Il2CppCodeGenWriteBarrier(&___sectionInformation_13, value);
	}

	inline static int32_t get_offset_of_section_handler_14() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_14)); }
	inline Il2CppObject * get_section_handler_14() const { return ___section_handler_14; }
	inline Il2CppObject ** get_address_of_section_handler_14() { return &___section_handler_14; }
	inline void set_section_handler_14(Il2CppObject * value)
	{
		___section_handler_14 = value;
		Il2CppCodeGenWriteBarrier(&___section_handler_14, value);
	}

	inline static int32_t get_offset_of_externalDataXml_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_15)); }
	inline String_t* get_externalDataXml_15() const { return ___externalDataXml_15; }
	inline String_t** get_address_of_externalDataXml_15() { return &___externalDataXml_15; }
	inline void set_externalDataXml_15(String_t* value)
	{
		___externalDataXml_15 = value;
		Il2CppCodeGenWriteBarrier(&___externalDataXml_15, value);
	}

	inline static int32_t get_offset_of__configContext_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_16)); }
	inline Il2CppObject * get__configContext_16() const { return ____configContext_16; }
	inline Il2CppObject ** get_address_of__configContext_16() { return &____configContext_16; }
	inline void set__configContext_16(Il2CppObject * value)
	{
		____configContext_16 = value;
		Il2CppCodeGenWriteBarrier(&____configContext_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
