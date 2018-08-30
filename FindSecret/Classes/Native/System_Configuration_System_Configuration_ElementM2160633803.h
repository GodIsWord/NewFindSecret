#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3695308734;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ElementMap
struct  ElementMap_t2160633803  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_1;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ElementMap::collectionAttribute
	ConfigurationCollectionAttribute_t3695308734 * ___collectionAttribute_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803, ___properties_1)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_1() const { return ___properties_1; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier(&___properties_1, value);
	}

	inline static int32_t get_offset_of_collectionAttribute_2() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803, ___collectionAttribute_2)); }
	inline ConfigurationCollectionAttribute_t3695308734 * get_collectionAttribute_2() const { return ___collectionAttribute_2; }
	inline ConfigurationCollectionAttribute_t3695308734 ** get_address_of_collectionAttribute_2() { return &___collectionAttribute_2; }
	inline void set_collectionAttribute_2(ConfigurationCollectionAttribute_t3695308734 * value)
	{
		___collectionAttribute_2 = value;
		Il2CppCodeGenWriteBarrier(&___collectionAttribute_2, value);
	}
};

struct ElementMap_t2160633803_StaticFields
{
public:
	// System.Collections.Hashtable System.Configuration.ElementMap::elementMaps
	Hashtable_t1853889766 * ___elementMaps_0;

public:
	inline static int32_t get_offset_of_elementMaps_0() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803_StaticFields, ___elementMaps_0)); }
	inline Hashtable_t1853889766 * get_elementMaps_0() const { return ___elementMaps_0; }
	inline Hashtable_t1853889766 ** get_address_of_elementMaps_0() { return &___elementMaps_0; }
	inline void set_elementMaps_0(Hashtable_t1853889766 * value)
	{
		___elementMaps_0 = value;
		Il2CppCodeGenWriteBarrier(&___elementMaps_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
