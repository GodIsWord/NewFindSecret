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
// System.Exception
struct Exception_t1436737249;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Data.EncodeProgress
struct  EncodeProgress_t3170591879  : public Il2CppObject
{
public:
	// System.Int32 SimpleGif.Data.EncodeProgress::Progress
	int32_t ___Progress_0;
	// System.Int32 SimpleGif.Data.EncodeProgress::FrameCount
	int32_t ___FrameCount_1;
	// System.Boolean SimpleGif.Data.EncodeProgress::Completed
	bool ___Completed_2;
	// System.Byte[] SimpleGif.Data.EncodeProgress::Bytes
	ByteU5BU5D_t4116647657* ___Bytes_3;
	// System.Exception SimpleGif.Data.EncodeProgress::Exception
	Exception_t1436737249 * ___Exception_4;

public:
	inline static int32_t get_offset_of_Progress_0() { return static_cast<int32_t>(offsetof(EncodeProgress_t3170591879, ___Progress_0)); }
	inline int32_t get_Progress_0() const { return ___Progress_0; }
	inline int32_t* get_address_of_Progress_0() { return &___Progress_0; }
	inline void set_Progress_0(int32_t value)
	{
		___Progress_0 = value;
	}

	inline static int32_t get_offset_of_FrameCount_1() { return static_cast<int32_t>(offsetof(EncodeProgress_t3170591879, ___FrameCount_1)); }
	inline int32_t get_FrameCount_1() const { return ___FrameCount_1; }
	inline int32_t* get_address_of_FrameCount_1() { return &___FrameCount_1; }
	inline void set_FrameCount_1(int32_t value)
	{
		___FrameCount_1 = value;
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(EncodeProgress_t3170591879, ___Completed_2)); }
	inline bool get_Completed_2() const { return ___Completed_2; }
	inline bool* get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(bool value)
	{
		___Completed_2 = value;
	}

	inline static int32_t get_offset_of_Bytes_3() { return static_cast<int32_t>(offsetof(EncodeProgress_t3170591879, ___Bytes_3)); }
	inline ByteU5BU5D_t4116647657* get_Bytes_3() const { return ___Bytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_Bytes_3() { return &___Bytes_3; }
	inline void set_Bytes_3(ByteU5BU5D_t4116647657* value)
	{
		___Bytes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Bytes_3, value);
	}

	inline static int32_t get_offset_of_Exception_4() { return static_cast<int32_t>(offsetof(EncodeProgress_t3170591879, ___Exception_4)); }
	inline Exception_t1436737249 * get_Exception_4() const { return ___Exception_4; }
	inline Exception_t1436737249 ** get_address_of_Exception_4() { return &___Exception_4; }
	inline void set_Exception_4(Exception_t1436737249 * value)
	{
		___Exception_4 = value;
		Il2CppCodeGenWriteBarrier(&___Exception_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
