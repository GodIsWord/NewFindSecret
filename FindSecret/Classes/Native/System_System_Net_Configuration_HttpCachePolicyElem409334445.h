#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur3318566633.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpCachePolicyElement
struct  HttpCachePolicyElement_t409334445  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpCachePolicyElement_t409334445_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumAgeProp
	ConfigurationProperty_t3590861854 * ___maximumAgeProp_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumStaleProp
	ConfigurationProperty_t3590861854 * ___maximumStaleProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::minimumFreshProp
	ConfigurationProperty_t3590861854 * ___minimumFreshProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::policyLevelProp
	ConfigurationProperty_t3590861854 * ___policyLevelProp_16;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;

public:
	inline static int32_t get_offset_of_maximumAgeProp_13() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t409334445_StaticFields, ___maximumAgeProp_13)); }
	inline ConfigurationProperty_t3590861854 * get_maximumAgeProp_13() const { return ___maximumAgeProp_13; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumAgeProp_13() { return &___maximumAgeProp_13; }
	inline void set_maximumAgeProp_13(ConfigurationProperty_t3590861854 * value)
	{
		___maximumAgeProp_13 = value;
		Il2CppCodeGenWriteBarrier(&___maximumAgeProp_13, value);
	}

	inline static int32_t get_offset_of_maximumStaleProp_14() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t409334445_StaticFields, ___maximumStaleProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_maximumStaleProp_14() const { return ___maximumStaleProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumStaleProp_14() { return &___maximumStaleProp_14; }
	inline void set_maximumStaleProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___maximumStaleProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___maximumStaleProp_14, value);
	}

	inline static int32_t get_offset_of_minimumFreshProp_15() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t409334445_StaticFields, ___minimumFreshProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_minimumFreshProp_15() const { return ___minimumFreshProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_minimumFreshProp_15() { return &___minimumFreshProp_15; }
	inline void set_minimumFreshProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___minimumFreshProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___minimumFreshProp_15, value);
	}

	inline static int32_t get_offset_of_policyLevelProp_16() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t409334445_StaticFields, ___policyLevelProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_policyLevelProp_16() const { return ___policyLevelProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_policyLevelProp_16() { return &___policyLevelProp_16; }
	inline void set_policyLevelProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___policyLevelProp_16 = value;
		Il2CppCodeGenWriteBarrier(&___policyLevelProp_16, value);
	}

	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(HttpCachePolicyElement_t409334445_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
