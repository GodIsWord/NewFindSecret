#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct  ZipExtraData_t3545003289  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::index_
	int32_t ___index__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::readValueStart_
	int32_t ___readValueStart__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::readValueLength_
	int32_t ___readValueLength__2;
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.ZipExtraData::newEntry_
	MemoryStream_t94973147 * ___newEntry__3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::data_
	ByteU5BU5D_t4116647657* ___data__4;

public:
	inline static int32_t get_offset_of_index__0() { return static_cast<int32_t>(offsetof(ZipExtraData_t3545003289, ___index__0)); }
	inline int32_t get_index__0() const { return ___index__0; }
	inline int32_t* get_address_of_index__0() { return &___index__0; }
	inline void set_index__0(int32_t value)
	{
		___index__0 = value;
	}

	inline static int32_t get_offset_of_readValueStart__1() { return static_cast<int32_t>(offsetof(ZipExtraData_t3545003289, ___readValueStart__1)); }
	inline int32_t get_readValueStart__1() const { return ___readValueStart__1; }
	inline int32_t* get_address_of_readValueStart__1() { return &___readValueStart__1; }
	inline void set_readValueStart__1(int32_t value)
	{
		___readValueStart__1 = value;
	}

	inline static int32_t get_offset_of_readValueLength__2() { return static_cast<int32_t>(offsetof(ZipExtraData_t3545003289, ___readValueLength__2)); }
	inline int32_t get_readValueLength__2() const { return ___readValueLength__2; }
	inline int32_t* get_address_of_readValueLength__2() { return &___readValueLength__2; }
	inline void set_readValueLength__2(int32_t value)
	{
		___readValueLength__2 = value;
	}

	inline static int32_t get_offset_of_newEntry__3() { return static_cast<int32_t>(offsetof(ZipExtraData_t3545003289, ___newEntry__3)); }
	inline MemoryStream_t94973147 * get_newEntry__3() const { return ___newEntry__3; }
	inline MemoryStream_t94973147 ** get_address_of_newEntry__3() { return &___newEntry__3; }
	inline void set_newEntry__3(MemoryStream_t94973147 * value)
	{
		___newEntry__3 = value;
		Il2CppCodeGenWriteBarrier(&___newEntry__3, value);
	}

	inline static int32_t get_offset_of_data__4() { return static_cast<int32_t>(offsetof(ZipExtraData_t3545003289, ___data__4)); }
	inline ByteU5BU5D_t4116647657* get_data__4() const { return ___data__4; }
	inline ByteU5BU5D_t4116647657** get_address_of_data__4() { return &___data__4; }
	inline void set_data__4(ByteU5BU5D_t4116647657* value)
	{
		___data__4 = value;
		Il2CppCodeGenWriteBarrier(&___data__4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
