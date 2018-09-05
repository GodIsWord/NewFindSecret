#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.List`1<ZGGame.LoadComplete>
struct List_1_t1609230894;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.AssetData
struct  AssetData_t303473330  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<ZGGame.LoadComplete> ZGGame.AssetData::completeCalls
	List_1_t1609230894 * ___completeCalls_0;
	// System.Collections.Generic.List`1<System.Object> ZGGame.AssetData::tags
	List_1_t257213610 * ___tags_1;

public:
	inline static int32_t get_offset_of_completeCalls_0() { return static_cast<int32_t>(offsetof(AssetData_t303473330, ___completeCalls_0)); }
	inline List_1_t1609230894 * get_completeCalls_0() const { return ___completeCalls_0; }
	inline List_1_t1609230894 ** get_address_of_completeCalls_0() { return &___completeCalls_0; }
	inline void set_completeCalls_0(List_1_t1609230894 * value)
	{
		___completeCalls_0 = value;
		Il2CppCodeGenWriteBarrier(&___completeCalls_0, value);
	}

	inline static int32_t get_offset_of_tags_1() { return static_cast<int32_t>(offsetof(AssetData_t303473330, ___tags_1)); }
	inline List_1_t257213610 * get_tags_1() const { return ___tags_1; }
	inline List_1_t257213610 ** get_address_of_tags_1() { return &___tags_1; }
	inline void set_tags_1(List_1_t257213610 * value)
	{
		___tags_1 = value;
		Il2CppCodeGenWriteBarrier(&___tags_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
