#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur3156163955.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t729952796;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProtectedConfigurationSection
struct  ProtectedConfigurationSection_t1525901209  : public ConfigurationSection_t3156163955
{
public:
	// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::providers
	ProtectedConfigurationProviderCollection_t729952796 * ___providers_20;

public:
	inline static int32_t get_offset_of_providers_20() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t1525901209, ___providers_20)); }
	inline ProtectedConfigurationProviderCollection_t729952796 * get_providers_20() const { return ___providers_20; }
	inline ProtectedConfigurationProviderCollection_t729952796 ** get_address_of_providers_20() { return &___providers_20; }
	inline void set_providers_20(ProtectedConfigurationProviderCollection_t729952796 * value)
	{
		___providers_20 = value;
		Il2CppCodeGenWriteBarrier(&___providers_20, value);
	}
};

struct ProtectedConfigurationSection_t1525901209_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::defaultProviderProp
	ConfigurationProperty_t3590861854 * ___defaultProviderProp_17;
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::providersProp
	ConfigurationProperty_t3590861854 * ___providersProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;

public:
	inline static int32_t get_offset_of_defaultProviderProp_17() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t1525901209_StaticFields, ___defaultProviderProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_defaultProviderProp_17() const { return ___defaultProviderProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_defaultProviderProp_17() { return &___defaultProviderProp_17; }
	inline void set_defaultProviderProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___defaultProviderProp_17 = value;
		Il2CppCodeGenWriteBarrier(&___defaultProviderProp_17, value);
	}

	inline static int32_t get_offset_of_providersProp_18() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t1525901209_StaticFields, ___providersProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_providersProp_18() const { return ___providersProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_providersProp_18() { return &___providersProp_18; }
	inline void set_providersProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___providersProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___providersProp_18, value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t1525901209_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier(&___properties_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
