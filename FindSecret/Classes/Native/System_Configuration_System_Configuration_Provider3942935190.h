#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configura446763386.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProviderSettingsCollection
struct  ProviderSettingsCollection_t3942935190  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

struct ProviderSettingsCollection_t3942935190_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::props
	ConfigurationPropertyCollection_t2852175726 * ___props_23;

public:
	inline static int32_t get_offset_of_props_23() { return static_cast<int32_t>(offsetof(ProviderSettingsCollection_t3942935190_StaticFields, ___props_23)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_props_23() const { return ___props_23; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_props_23() { return &___props_23; }
	inline void set_props_23(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___props_23 = value;
		Il2CppCodeGenWriteBarrier(&___props_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
