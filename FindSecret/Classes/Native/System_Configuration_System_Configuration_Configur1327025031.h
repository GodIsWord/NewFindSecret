#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur3318566633.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318566633;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
struct  ConfigurationRemoveElement_t1327025031  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origElement
	ConfigurationElement_t3318566633 * ____origElement_14;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origCollection
	ConfigurationElementCollection_t446763386 * ____origCollection_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1327025031, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of__origElement_14() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1327025031, ____origElement_14)); }
	inline ConfigurationElement_t3318566633 * get__origElement_14() const { return ____origElement_14; }
	inline ConfigurationElement_t3318566633 ** get_address_of__origElement_14() { return &____origElement_14; }
	inline void set__origElement_14(ConfigurationElement_t3318566633 * value)
	{
		____origElement_14 = value;
		Il2CppCodeGenWriteBarrier(&____origElement_14, value);
	}

	inline static int32_t get_offset_of__origCollection_15() { return static_cast<int32_t>(offsetof(ConfigurationRemoveElement_t1327025031, ____origCollection_15)); }
	inline ConfigurationElementCollection_t446763386 * get__origCollection_15() const { return ____origCollection_15; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of__origCollection_15() { return &____origCollection_15; }
	inline void set__origCollection_15(ConfigurationElementCollection_t446763386 * value)
	{
		____origCollection_15 = value;
		Il2CppCodeGenWriteBarrier(&____origCollection_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
