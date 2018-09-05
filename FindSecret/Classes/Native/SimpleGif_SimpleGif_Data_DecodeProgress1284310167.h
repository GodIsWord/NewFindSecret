#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// SimpleGif.Gif
struct Gif_t2407357289;
// System.Exception
struct Exception_t1436737249;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleGif.Data.DecodeProgress
struct  DecodeProgress_t1284310167  : public Il2CppObject
{
public:
	// System.Int32 SimpleGif.Data.DecodeProgress::Progress
	int32_t ___Progress_0;
	// System.Int32 SimpleGif.Data.DecodeProgress::FrameCount
	int32_t ___FrameCount_1;
	// System.Boolean SimpleGif.Data.DecodeProgress::Completed
	bool ___Completed_2;
	// SimpleGif.Gif SimpleGif.Data.DecodeProgress::Gif
	Gif_t2407357289 * ___Gif_3;
	// System.Exception SimpleGif.Data.DecodeProgress::Exception
	Exception_t1436737249 * ___Exception_4;

public:
	inline static int32_t get_offset_of_Progress_0() { return static_cast<int32_t>(offsetof(DecodeProgress_t1284310167, ___Progress_0)); }
	inline int32_t get_Progress_0() const { return ___Progress_0; }
	inline int32_t* get_address_of_Progress_0() { return &___Progress_0; }
	inline void set_Progress_0(int32_t value)
	{
		___Progress_0 = value;
	}

	inline static int32_t get_offset_of_FrameCount_1() { return static_cast<int32_t>(offsetof(DecodeProgress_t1284310167, ___FrameCount_1)); }
	inline int32_t get_FrameCount_1() const { return ___FrameCount_1; }
	inline int32_t* get_address_of_FrameCount_1() { return &___FrameCount_1; }
	inline void set_FrameCount_1(int32_t value)
	{
		___FrameCount_1 = value;
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(DecodeProgress_t1284310167, ___Completed_2)); }
	inline bool get_Completed_2() const { return ___Completed_2; }
	inline bool* get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(bool value)
	{
		___Completed_2 = value;
	}

	inline static int32_t get_offset_of_Gif_3() { return static_cast<int32_t>(offsetof(DecodeProgress_t1284310167, ___Gif_3)); }
	inline Gif_t2407357289 * get_Gif_3() const { return ___Gif_3; }
	inline Gif_t2407357289 ** get_address_of_Gif_3() { return &___Gif_3; }
	inline void set_Gif_3(Gif_t2407357289 * value)
	{
		___Gif_3 = value;
		Il2CppCodeGenWriteBarrier(&___Gif_3, value);
	}

	inline static int32_t get_offset_of_Exception_4() { return static_cast<int32_t>(offsetof(DecodeProgress_t1284310167, ___Exception_4)); }
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
