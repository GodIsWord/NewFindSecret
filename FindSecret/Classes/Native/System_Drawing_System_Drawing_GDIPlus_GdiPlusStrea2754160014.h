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
// System.Drawing.GDIPlus/StreamGetHeaderDelegate
struct StreamGetHeaderDelegate_t558280091;
// System.Drawing.GDIPlus/StreamGetBytesDelegate
struct StreamGetBytesDelegate_t482941147;
// System.Drawing.GDIPlus/StreamSeekDelegate
struct StreamSeekDelegate_t2972861213;
// System.Drawing.GDIPlus/StreamPutBytesDelegate
struct StreamPutBytesDelegate_t225654305;
// System.Drawing.GDIPlus/StreamCloseDelegate
struct StreamCloseDelegate_t2004792630;
// System.Drawing.GDIPlus/StreamSizeDelegate
struct StreamSizeDelegate_t1636074383;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.GDIPlus/GdiPlusStreamHelper
struct  GdiPlusStreamHelper_t2754160014  : public Il2CppObject
{
public:
	// System.IO.Stream System.Drawing.GDIPlus/GdiPlusStreamHelper::stream
	Stream_t1273022909 * ___stream_0;
	// System.Drawing.GDIPlus/StreamGetHeaderDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::sghd
	StreamGetHeaderDelegate_t558280091 * ___sghd_1;
	// System.Drawing.GDIPlus/StreamGetBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::sgbd
	StreamGetBytesDelegate_t482941147 * ___sgbd_2;
	// System.Drawing.GDIPlus/StreamSeekDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::skd
	StreamSeekDelegate_t2972861213 * ___skd_3;
	// System.Drawing.GDIPlus/StreamPutBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::spbd
	StreamPutBytesDelegate_t225654305 * ___spbd_4;
	// System.Drawing.GDIPlus/StreamCloseDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::scd
	StreamCloseDelegate_t2004792630 * ___scd_5;
	// System.Drawing.GDIPlus/StreamSizeDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::ssd
	StreamSizeDelegate_t1636074383 * ___ssd_6;
	// System.Byte[] System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf
	ByteU5BU5D_t4116647657* ___start_buf_7;
	// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf_pos
	int32_t ___start_buf_pos_8;
	// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf_len
	int32_t ___start_buf_len_9;
	// System.Byte[] System.Drawing.GDIPlus/GdiPlusStreamHelper::managedBuf
	ByteU5BU5D_t4116647657* ___managedBuf_10;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___stream_0)); }
	inline Stream_t1273022909 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1273022909 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1273022909 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_sghd_1() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___sghd_1)); }
	inline StreamGetHeaderDelegate_t558280091 * get_sghd_1() const { return ___sghd_1; }
	inline StreamGetHeaderDelegate_t558280091 ** get_address_of_sghd_1() { return &___sghd_1; }
	inline void set_sghd_1(StreamGetHeaderDelegate_t558280091 * value)
	{
		___sghd_1 = value;
		Il2CppCodeGenWriteBarrier(&___sghd_1, value);
	}

	inline static int32_t get_offset_of_sgbd_2() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___sgbd_2)); }
	inline StreamGetBytesDelegate_t482941147 * get_sgbd_2() const { return ___sgbd_2; }
	inline StreamGetBytesDelegate_t482941147 ** get_address_of_sgbd_2() { return &___sgbd_2; }
	inline void set_sgbd_2(StreamGetBytesDelegate_t482941147 * value)
	{
		___sgbd_2 = value;
		Il2CppCodeGenWriteBarrier(&___sgbd_2, value);
	}

	inline static int32_t get_offset_of_skd_3() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___skd_3)); }
	inline StreamSeekDelegate_t2972861213 * get_skd_3() const { return ___skd_3; }
	inline StreamSeekDelegate_t2972861213 ** get_address_of_skd_3() { return &___skd_3; }
	inline void set_skd_3(StreamSeekDelegate_t2972861213 * value)
	{
		___skd_3 = value;
		Il2CppCodeGenWriteBarrier(&___skd_3, value);
	}

	inline static int32_t get_offset_of_spbd_4() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___spbd_4)); }
	inline StreamPutBytesDelegate_t225654305 * get_spbd_4() const { return ___spbd_4; }
	inline StreamPutBytesDelegate_t225654305 ** get_address_of_spbd_4() { return &___spbd_4; }
	inline void set_spbd_4(StreamPutBytesDelegate_t225654305 * value)
	{
		___spbd_4 = value;
		Il2CppCodeGenWriteBarrier(&___spbd_4, value);
	}

	inline static int32_t get_offset_of_scd_5() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___scd_5)); }
	inline StreamCloseDelegate_t2004792630 * get_scd_5() const { return ___scd_5; }
	inline StreamCloseDelegate_t2004792630 ** get_address_of_scd_5() { return &___scd_5; }
	inline void set_scd_5(StreamCloseDelegate_t2004792630 * value)
	{
		___scd_5 = value;
		Il2CppCodeGenWriteBarrier(&___scd_5, value);
	}

	inline static int32_t get_offset_of_ssd_6() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___ssd_6)); }
	inline StreamSizeDelegate_t1636074383 * get_ssd_6() const { return ___ssd_6; }
	inline StreamSizeDelegate_t1636074383 ** get_address_of_ssd_6() { return &___ssd_6; }
	inline void set_ssd_6(StreamSizeDelegate_t1636074383 * value)
	{
		___ssd_6 = value;
		Il2CppCodeGenWriteBarrier(&___ssd_6, value);
	}

	inline static int32_t get_offset_of_start_buf_7() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___start_buf_7)); }
	inline ByteU5BU5D_t4116647657* get_start_buf_7() const { return ___start_buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_start_buf_7() { return &___start_buf_7; }
	inline void set_start_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___start_buf_7 = value;
		Il2CppCodeGenWriteBarrier(&___start_buf_7, value);
	}

	inline static int32_t get_offset_of_start_buf_pos_8() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___start_buf_pos_8)); }
	inline int32_t get_start_buf_pos_8() const { return ___start_buf_pos_8; }
	inline int32_t* get_address_of_start_buf_pos_8() { return &___start_buf_pos_8; }
	inline void set_start_buf_pos_8(int32_t value)
	{
		___start_buf_pos_8 = value;
	}

	inline static int32_t get_offset_of_start_buf_len_9() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___start_buf_len_9)); }
	inline int32_t get_start_buf_len_9() const { return ___start_buf_len_9; }
	inline int32_t* get_address_of_start_buf_len_9() { return &___start_buf_len_9; }
	inline void set_start_buf_len_9(int32_t value)
	{
		___start_buf_len_9 = value;
	}

	inline static int32_t get_offset_of_managedBuf_10() { return static_cast<int32_t>(offsetof(GdiPlusStreamHelper_t2754160014, ___managedBuf_10)); }
	inline ByteU5BU5D_t4116647657* get_managedBuf_10() const { return ___managedBuf_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_managedBuf_10() { return &___managedBuf_10; }
	inline void set_managedBuf_10(ByteU5BU5D_t4116647657* value)
	{
		___managedBuf_10 = value;
		Il2CppCodeGenWriteBarrier(&___managedBuf_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
