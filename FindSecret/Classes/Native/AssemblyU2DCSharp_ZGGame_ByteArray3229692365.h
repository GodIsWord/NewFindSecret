#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.ByteArray
struct  ByteArray_t3229692365  : public Il2CppObject
{
public:
	// System.Byte[] ZGGame.ByteArray::_bytes
	ByteU5BU5D_t4116647657* ____bytes_0;
	// System.Int32 ZGGame.ByteArray::readOffset
	int32_t ___readOffset_1;
	// System.Int32 ZGGame.ByteArray::writeOffset
	int32_t ___writeOffset_2;
	// System.Int32 ZGGame.ByteArray::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of__bytes_0() { return static_cast<int32_t>(offsetof(ByteArray_t3229692365, ____bytes_0)); }
	inline ByteU5BU5D_t4116647657* get__bytes_0() const { return ____bytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__bytes_0() { return &____bytes_0; }
	inline void set__bytes_0(ByteU5BU5D_t4116647657* value)
	{
		____bytes_0 = value;
		Il2CppCodeGenWriteBarrier(&____bytes_0, value);
	}

	inline static int32_t get_offset_of_readOffset_1() { return static_cast<int32_t>(offsetof(ByteArray_t3229692365, ___readOffset_1)); }
	inline int32_t get_readOffset_1() const { return ___readOffset_1; }
	inline int32_t* get_address_of_readOffset_1() { return &___readOffset_1; }
	inline void set_readOffset_1(int32_t value)
	{
		___readOffset_1 = value;
	}

	inline static int32_t get_offset_of_writeOffset_2() { return static_cast<int32_t>(offsetof(ByteArray_t3229692365, ___writeOffset_2)); }
	inline int32_t get_writeOffset_2() const { return ___writeOffset_2; }
	inline int32_t* get_address_of_writeOffset_2() { return &___writeOffset_2; }
	inline void set_writeOffset_2(int32_t value)
	{
		___writeOffset_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(ByteArray_t3229692365, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
