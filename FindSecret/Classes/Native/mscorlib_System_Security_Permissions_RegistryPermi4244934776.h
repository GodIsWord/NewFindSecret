﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_CodeAccessPermission2681295399.h"
#include "mscorlib_System_Security_Permissions_PermissionSta1178999876.h"

// System.Collections.ArrayList
struct ArrayList_t2718874744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4244934776  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t2718874744 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t2718874744 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t2718874744 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___createList_1)); }
	inline ArrayList_t2718874744 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t2718874744 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t2718874744 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier(&___createList_1, value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___readList_2)); }
	inline ArrayList_t2718874744 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t2718874744 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t2718874744 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier(&___readList_2, value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___writeList_3)); }
	inline ArrayList_t2718874744 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t2718874744 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier(&___writeList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
