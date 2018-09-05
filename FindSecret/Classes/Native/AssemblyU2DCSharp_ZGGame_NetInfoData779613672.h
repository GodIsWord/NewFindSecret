#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.IO.Stream
struct Stream_t1273022909;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.NetInfoData
struct  NetInfoData_t779613672  : public Il2CppObject
{
public:
	// System.Int32 ZGGame.NetInfoData::length
	int32_t ___length_0;
	// System.Int16 ZGGame.NetInfoData::code
	int16_t ___code_1;
	// System.Byte ZGGame.NetInfoData::status
	uint8_t ___status_2;
	// System.IO.Stream ZGGame.NetInfoData::stream
	Stream_t1273022909 * ___stream_3;
	// System.Byte[] ZGGame.NetInfoData::source
	ByteU5BU5D_t4116647657* ___source_4;
	// System.Int64 ZGGame.NetInfoData::serverTime
	int64_t ___serverTime_5;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___status_2)); }
	inline uint8_t get_status_2() const { return ___status_2; }
	inline uint8_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(uint8_t value)
	{
		___status_2 = value;
	}

	inline static int32_t get_offset_of_stream_3() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___stream_3)); }
	inline Stream_t1273022909 * get_stream_3() const { return ___stream_3; }
	inline Stream_t1273022909 ** get_address_of_stream_3() { return &___stream_3; }
	inline void set_stream_3(Stream_t1273022909 * value)
	{
		___stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___stream_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___source_4)); }
	inline ByteU5BU5D_t4116647657* get_source_4() const { return ___source_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(ByteU5BU5D_t4116647657* value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_serverTime_5() { return static_cast<int32_t>(offsetof(NetInfoData_t779613672, ___serverTime_5)); }
	inline int64_t get_serverTime_5() const { return ___serverTime_5; }
	inline int64_t* get_address_of_serverTime_5() { return &___serverTime_5; }
	inline void set_serverTime_5(int64_t value)
	{
		___serverTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
