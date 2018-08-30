#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProces826201100.h"

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t167406615;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdWildcard
struct  XsdWildcard_t2790389089  : public Il2CppObject
{
public:
	// System.Xml.Schema.XmlSchemaObject Mono.Xml.Schema.XsdWildcard::xsobj
	XmlSchemaObject_t1315720168 * ___xsobj_0;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdWildcard::ResolvedProcessing
	int32_t ___ResolvedProcessing_1;
	// System.String Mono.Xml.Schema.XsdWildcard::TargetNamespace
	String_t* ___TargetNamespace_2;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::SkipCompile
	bool ___SkipCompile_3;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueAny
	bool ___HasValueAny_4;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueLocal
	bool ___HasValueLocal_5;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueOther
	bool ___HasValueOther_6;
	// System.Boolean Mono.Xml.Schema.XsdWildcard::HasValueTargetNamespace
	bool ___HasValueTargetNamespace_7;
	// System.Collections.Specialized.StringCollection Mono.Xml.Schema.XsdWildcard::ResolvedNamespaces
	StringCollection_t167406615 * ___ResolvedNamespaces_8;

public:
	inline static int32_t get_offset_of_xsobj_0() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___xsobj_0)); }
	inline XmlSchemaObject_t1315720168 * get_xsobj_0() const { return ___xsobj_0; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_xsobj_0() { return &___xsobj_0; }
	inline void set_xsobj_0(XmlSchemaObject_t1315720168 * value)
	{
		___xsobj_0 = value;
		Il2CppCodeGenWriteBarrier(&___xsobj_0, value);
	}

	inline static int32_t get_offset_of_ResolvedProcessing_1() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___ResolvedProcessing_1)); }
	inline int32_t get_ResolvedProcessing_1() const { return ___ResolvedProcessing_1; }
	inline int32_t* get_address_of_ResolvedProcessing_1() { return &___ResolvedProcessing_1; }
	inline void set_ResolvedProcessing_1(int32_t value)
	{
		___ResolvedProcessing_1 = value;
	}

	inline static int32_t get_offset_of_TargetNamespace_2() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___TargetNamespace_2)); }
	inline String_t* get_TargetNamespace_2() const { return ___TargetNamespace_2; }
	inline String_t** get_address_of_TargetNamespace_2() { return &___TargetNamespace_2; }
	inline void set_TargetNamespace_2(String_t* value)
	{
		___TargetNamespace_2 = value;
		Il2CppCodeGenWriteBarrier(&___TargetNamespace_2, value);
	}

	inline static int32_t get_offset_of_SkipCompile_3() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___SkipCompile_3)); }
	inline bool get_SkipCompile_3() const { return ___SkipCompile_3; }
	inline bool* get_address_of_SkipCompile_3() { return &___SkipCompile_3; }
	inline void set_SkipCompile_3(bool value)
	{
		___SkipCompile_3 = value;
	}

	inline static int32_t get_offset_of_HasValueAny_4() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___HasValueAny_4)); }
	inline bool get_HasValueAny_4() const { return ___HasValueAny_4; }
	inline bool* get_address_of_HasValueAny_4() { return &___HasValueAny_4; }
	inline void set_HasValueAny_4(bool value)
	{
		___HasValueAny_4 = value;
	}

	inline static int32_t get_offset_of_HasValueLocal_5() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___HasValueLocal_5)); }
	inline bool get_HasValueLocal_5() const { return ___HasValueLocal_5; }
	inline bool* get_address_of_HasValueLocal_5() { return &___HasValueLocal_5; }
	inline void set_HasValueLocal_5(bool value)
	{
		___HasValueLocal_5 = value;
	}

	inline static int32_t get_offset_of_HasValueOther_6() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___HasValueOther_6)); }
	inline bool get_HasValueOther_6() const { return ___HasValueOther_6; }
	inline bool* get_address_of_HasValueOther_6() { return &___HasValueOther_6; }
	inline void set_HasValueOther_6(bool value)
	{
		___HasValueOther_6 = value;
	}

	inline static int32_t get_offset_of_HasValueTargetNamespace_7() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___HasValueTargetNamespace_7)); }
	inline bool get_HasValueTargetNamespace_7() const { return ___HasValueTargetNamespace_7; }
	inline bool* get_address_of_HasValueTargetNamespace_7() { return &___HasValueTargetNamespace_7; }
	inline void set_HasValueTargetNamespace_7(bool value)
	{
		___HasValueTargetNamespace_7 = value;
	}

	inline static int32_t get_offset_of_ResolvedNamespaces_8() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089, ___ResolvedNamespaces_8)); }
	inline StringCollection_t167406615 * get_ResolvedNamespaces_8() const { return ___ResolvedNamespaces_8; }
	inline StringCollection_t167406615 ** get_address_of_ResolvedNamespaces_8() { return &___ResolvedNamespaces_8; }
	inline void set_ResolvedNamespaces_8(StringCollection_t167406615 * value)
	{
		___ResolvedNamespaces_8 = value;
		Il2CppCodeGenWriteBarrier(&___ResolvedNamespaces_8, value);
	}
};

struct XsdWildcard_t2790389089_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdWildcard::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_9() { return static_cast<int32_t>(offsetof(XsdWildcard_t2790389089_StaticFields, ___U3CU3Ef__switchU24map6_9)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_9() const { return ___U3CU3Ef__switchU24map6_9; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_9() { return &___U3CU3Ef__switchU24map6_9; }
	inline void set_U3CU3Ef__switchU24map6_9(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map6_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
