#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CacheIndex
struct  CacheIndex_t3884160729 
{
public:
	// System.String UnityEngine.CacheIndex::name
	String_t* ___name_0;
	// System.Int32 UnityEngine.CacheIndex::bytesUsed
	int32_t ___bytesUsed_1;
	// System.Int32 UnityEngine.CacheIndex::expires
	int32_t ___expires_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CacheIndex_t3884160729, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_bytesUsed_1() { return static_cast<int32_t>(offsetof(CacheIndex_t3884160729, ___bytesUsed_1)); }
	inline int32_t get_bytesUsed_1() const { return ___bytesUsed_1; }
	inline int32_t* get_address_of_bytesUsed_1() { return &___bytesUsed_1; }
	inline void set_bytesUsed_1(int32_t value)
	{
		___bytesUsed_1 = value;
	}

	inline static int32_t get_offset_of_expires_2() { return static_cast<int32_t>(offsetof(CacheIndex_t3884160729, ___expires_2)); }
	inline int32_t get_expires_2() const { return ___expires_2; }
	inline int32_t* get_address_of_expires_2() { return &___expires_2; }
	inline void set_expires_2(int32_t value)
	{
		___expires_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CacheIndex
struct CacheIndex_t3884160729_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___bytesUsed_1;
	int32_t ___expires_2;
};
// Native definition for COM marshalling of UnityEngine.CacheIndex
struct CacheIndex_t3884160729_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___bytesUsed_1;
	int32_t ___expires_2;
};
