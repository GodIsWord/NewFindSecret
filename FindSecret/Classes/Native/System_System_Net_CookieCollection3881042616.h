#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t2465948139;
// System.Net.CookieCollection/CookieCollectionComparer
struct CookieCollectionComparer_t1373927847;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieCollection
struct  CookieCollection_t3881042616  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Net.Cookie> System.Net.CookieCollection::list
	List_1_t2465948139 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CookieCollection_t3881042616, ___list_0)); }
	inline List_1_t2465948139 * get_list_0() const { return ___list_0; }
	inline List_1_t2465948139 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2465948139 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

struct CookieCollection_t3881042616_StaticFields
{
public:
	// System.Net.CookieCollection/CookieCollectionComparer System.Net.CookieCollection::Comparer
	CookieCollectionComparer_t1373927847 * ___Comparer_1;

public:
	inline static int32_t get_offset_of_Comparer_1() { return static_cast<int32_t>(offsetof(CookieCollection_t3881042616_StaticFields, ___Comparer_1)); }
	inline CookieCollectionComparer_t1373927847 * get_Comparer_1() const { return ___Comparer_1; }
	inline CookieCollectionComparer_t1373927847 ** get_address_of_Comparer_1() { return &___Comparer_1; }
	inline void set_Comparer_1(CookieCollectionComparer_t1373927847 * value)
	{
		___Comparer_1 = value;
		Il2CppCodeGenWriteBarrier(&___Comparer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
