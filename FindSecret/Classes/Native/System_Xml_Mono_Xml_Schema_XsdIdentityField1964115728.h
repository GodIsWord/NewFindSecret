#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t2466178853;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdIdentityField
struct  XsdIdentityField_t1964115728  : public Il2CppObject
{
public:
	// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentityField::fieldPaths
	XsdIdentityPathU5BU5D_t2466178853* ___fieldPaths_0;
	// System.Int32 Mono.Xml.Schema.XsdIdentityField::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_fieldPaths_0() { return static_cast<int32_t>(offsetof(XsdIdentityField_t1964115728, ___fieldPaths_0)); }
	inline XsdIdentityPathU5BU5D_t2466178853* get_fieldPaths_0() const { return ___fieldPaths_0; }
	inline XsdIdentityPathU5BU5D_t2466178853** get_address_of_fieldPaths_0() { return &___fieldPaths_0; }
	inline void set_fieldPaths_0(XsdIdentityPathU5BU5D_t2466178853* value)
	{
		___fieldPaths_0 = value;
		Il2CppCodeGenWriteBarrier(&___fieldPaths_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(XsdIdentityField_t1964115728, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
