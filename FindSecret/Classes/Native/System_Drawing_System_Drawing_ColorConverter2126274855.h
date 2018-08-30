#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_TypeConverter2249118273.h"

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2184948248;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.ColorConverter
struct  ColorConverter_t2126274855  : public TypeConverter_t2249118273
{
public:

public:
};

struct ColorConverter_t2126274855_StaticFields
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.Drawing.ColorConverter::cached
	StandardValuesCollection_t2184948248 * ___cached_0;
	// System.Object System.Drawing.ColorConverter::creatingCached
	Il2CppObject * ___creatingCached_1;

public:
	inline static int32_t get_offset_of_cached_0() { return static_cast<int32_t>(offsetof(ColorConverter_t2126274855_StaticFields, ___cached_0)); }
	inline StandardValuesCollection_t2184948248 * get_cached_0() const { return ___cached_0; }
	inline StandardValuesCollection_t2184948248 ** get_address_of_cached_0() { return &___cached_0; }
	inline void set_cached_0(StandardValuesCollection_t2184948248 * value)
	{
		___cached_0 = value;
		Il2CppCodeGenWriteBarrier(&___cached_0, value);
	}

	inline static int32_t get_offset_of_creatingCached_1() { return static_cast<int32_t>(offsetof(ColorConverter_t2126274855_StaticFields, ___creatingCached_1)); }
	inline Il2CppObject * get_creatingCached_1() const { return ___creatingCached_1; }
	inline Il2CppObject ** get_address_of_creatingCached_1() { return &___creatingCached_1; }
	inline void set_creatingCached_1(Il2CppObject * value)
	{
		___creatingCached_1 = value;
		Il2CppCodeGenWriteBarrier(&___creatingCached_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
