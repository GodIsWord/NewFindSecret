#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARManager
struct  ARManager_t1684357247  : public Il2CppObject
{
public:

public:
};

struct ARManager_t1684357247_StaticFields
{
public:
	// UnityEngine.GameObject ARManager::ar
	GameObject_t1113636619 * ___ar_0;
	// UnityEngine.GameObject ARManager::imageManagerView
	GameObject_t1113636619 * ___imageManagerView_1;
	// System.Boolean ARManager::isOpen
	bool ___isOpen_2;

public:
	inline static int32_t get_offset_of_ar_0() { return static_cast<int32_t>(offsetof(ARManager_t1684357247_StaticFields, ___ar_0)); }
	inline GameObject_t1113636619 * get_ar_0() const { return ___ar_0; }
	inline GameObject_t1113636619 ** get_address_of_ar_0() { return &___ar_0; }
	inline void set_ar_0(GameObject_t1113636619 * value)
	{
		___ar_0 = value;
		Il2CppCodeGenWriteBarrier(&___ar_0, value);
	}

	inline static int32_t get_offset_of_imageManagerView_1() { return static_cast<int32_t>(offsetof(ARManager_t1684357247_StaticFields, ___imageManagerView_1)); }
	inline GameObject_t1113636619 * get_imageManagerView_1() const { return ___imageManagerView_1; }
	inline GameObject_t1113636619 ** get_address_of_imageManagerView_1() { return &___imageManagerView_1; }
	inline void set_imageManagerView_1(GameObject_t1113636619 * value)
	{
		___imageManagerView_1 = value;
		Il2CppCodeGenWriteBarrier(&___imageManagerView_1, value);
	}

	inline static int32_t get_offset_of_isOpen_2() { return static_cast<int32_t>(offsetof(ARManager_t1684357247_StaticFields, ___isOpen_2)); }
	inline bool get_isOpen_2() const { return ___isOpen_2; }
	inline bool* get_address_of_isOpen_2() { return &___isOpen_2; }
	inline void set_isOpen_2(bool value)
	{
		___isOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
