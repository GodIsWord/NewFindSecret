#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObjectTable
struct  XmlSchemaObjectTable_t2546974348  : public Il2CppObject
{
public:
	// System.Collections.Specialized.HybridDictionary System.Xml.Schema.XmlSchemaObjectTable::table
	HybridDictionary_t4070033136 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(XmlSchemaObjectTable_t2546974348, ___table_0)); }
	inline HybridDictionary_t4070033136 * get_table_0() const { return ___table_0; }
	inline HybridDictionary_t4070033136 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(HybridDictionary_t4070033136 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
