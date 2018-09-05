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
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t1188392813;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.Carbon
struct  Carbon_t3931103330  : public Il2CppObject
{
public:

public:
};

struct Carbon_t3931103330_StaticFields
{
public:
	// System.Collections.Hashtable System.Drawing.Carbon::contextReference
	Hashtable_t1853889766 * ___contextReference_0;
	// System.Object System.Drawing.Carbon::lockobj
	Il2CppObject * ___lockobj_1;
	// System.Delegate System.Drawing.Carbon::hwnd_delegate
	Delegate_t1188392813 * ___hwnd_delegate_2;

public:
	inline static int32_t get_offset_of_contextReference_0() { return static_cast<int32_t>(offsetof(Carbon_t3931103330_StaticFields, ___contextReference_0)); }
	inline Hashtable_t1853889766 * get_contextReference_0() const { return ___contextReference_0; }
	inline Hashtable_t1853889766 ** get_address_of_contextReference_0() { return &___contextReference_0; }
	inline void set_contextReference_0(Hashtable_t1853889766 * value)
	{
		___contextReference_0 = value;
		Il2CppCodeGenWriteBarrier(&___contextReference_0, value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(Carbon_t3931103330_StaticFields, ___lockobj_1)); }
	inline Il2CppObject * get_lockobj_1() const { return ___lockobj_1; }
	inline Il2CppObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(Il2CppObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_1, value);
	}

	inline static int32_t get_offset_of_hwnd_delegate_2() { return static_cast<int32_t>(offsetof(Carbon_t3931103330_StaticFields, ___hwnd_delegate_2)); }
	inline Delegate_t1188392813 * get_hwnd_delegate_2() const { return ___hwnd_delegate_2; }
	inline Delegate_t1188392813 ** get_address_of_hwnd_delegate_2() { return &___hwnd_delegate_2; }
	inline void set_hwnd_delegate_2(Delegate_t1188392813 * value)
	{
		___hwnd_delegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___hwnd_delegate_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
