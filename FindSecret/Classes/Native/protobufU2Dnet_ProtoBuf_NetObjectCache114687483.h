#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ProtoBuf.Meta.MutableList
struct MutableList_t1195342553;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.NetObjectCache
struct  NetObjectCache_t114687483  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.MutableList ProtoBuf.NetObjectCache::underlyingList
	MutableList_t1195342553 * ___underlyingList_0;
	// System.Object ProtoBuf.NetObjectCache::rootObject
	Il2CppObject * ___rootObject_1;
	// System.Int32 ProtoBuf.NetObjectCache::trapStartIndex
	int32_t ___trapStartIndex_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ProtoBuf.NetObjectCache::stringKeys
	Dictionary_2_t2736202052 * ___stringKeys_3;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> ProtoBuf.NetObjectCache::objectKeys
	Dictionary_2_t3384741 * ___objectKeys_4;

public:
	inline static int32_t get_offset_of_underlyingList_0() { return static_cast<int32_t>(offsetof(NetObjectCache_t114687483, ___underlyingList_0)); }
	inline MutableList_t1195342553 * get_underlyingList_0() const { return ___underlyingList_0; }
	inline MutableList_t1195342553 ** get_address_of_underlyingList_0() { return &___underlyingList_0; }
	inline void set_underlyingList_0(MutableList_t1195342553 * value)
	{
		___underlyingList_0 = value;
		Il2CppCodeGenWriteBarrier(&___underlyingList_0, value);
	}

	inline static int32_t get_offset_of_rootObject_1() { return static_cast<int32_t>(offsetof(NetObjectCache_t114687483, ___rootObject_1)); }
	inline Il2CppObject * get_rootObject_1() const { return ___rootObject_1; }
	inline Il2CppObject ** get_address_of_rootObject_1() { return &___rootObject_1; }
	inline void set_rootObject_1(Il2CppObject * value)
	{
		___rootObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___rootObject_1, value);
	}

	inline static int32_t get_offset_of_trapStartIndex_2() { return static_cast<int32_t>(offsetof(NetObjectCache_t114687483, ___trapStartIndex_2)); }
	inline int32_t get_trapStartIndex_2() const { return ___trapStartIndex_2; }
	inline int32_t* get_address_of_trapStartIndex_2() { return &___trapStartIndex_2; }
	inline void set_trapStartIndex_2(int32_t value)
	{
		___trapStartIndex_2 = value;
	}

	inline static int32_t get_offset_of_stringKeys_3() { return static_cast<int32_t>(offsetof(NetObjectCache_t114687483, ___stringKeys_3)); }
	inline Dictionary_2_t2736202052 * get_stringKeys_3() const { return ___stringKeys_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_stringKeys_3() { return &___stringKeys_3; }
	inline void set_stringKeys_3(Dictionary_2_t2736202052 * value)
	{
		___stringKeys_3 = value;
		Il2CppCodeGenWriteBarrier(&___stringKeys_3, value);
	}

	inline static int32_t get_offset_of_objectKeys_4() { return static_cast<int32_t>(offsetof(NetObjectCache_t114687483, ___objectKeys_4)); }
	inline Dictionary_2_t3384741 * get_objectKeys_4() const { return ___objectKeys_4; }
	inline Dictionary_2_t3384741 ** get_address_of_objectKeys_4() { return &___objectKeys_4; }
	inline void set_objectKeys_4(Dictionary_2_t3384741 * value)
	{
		___objectKeys_4 = value;
		Il2CppCodeGenWriteBarrier(&___objectKeys_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
