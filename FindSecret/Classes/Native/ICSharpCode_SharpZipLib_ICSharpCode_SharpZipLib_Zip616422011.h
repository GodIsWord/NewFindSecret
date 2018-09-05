#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1978394600;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct  InflaterDynHeader_t616422011  : public Il2CppObject
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blLens
	ByteU5BU5D_t4116647657* ___blLens_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::litdistLens
	ByteU5BU5D_t4116647657* ___litdistLens_4;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blTree
	InflaterHuffmanTree_t1978394600 * ___blTree_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::mode
	int32_t ___mode_6;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lnum
	int32_t ___lnum_7;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::dnum
	int32_t ___dnum_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blnum
	int32_t ___blnum_9;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::num
	int32_t ___num_10;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repSymbol
	int32_t ___repSymbol_11;
	// System.Byte ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lastLen
	uint8_t ___lastLen_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::ptr
	int32_t ___ptr_13;

public:
	inline static int32_t get_offset_of_blLens_3() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___blLens_3)); }
	inline ByteU5BU5D_t4116647657* get_blLens_3() const { return ___blLens_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_blLens_3() { return &___blLens_3; }
	inline void set_blLens_3(ByteU5BU5D_t4116647657* value)
	{
		___blLens_3 = value;
		Il2CppCodeGenWriteBarrier(&___blLens_3, value);
	}

	inline static int32_t get_offset_of_litdistLens_4() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___litdistLens_4)); }
	inline ByteU5BU5D_t4116647657* get_litdistLens_4() const { return ___litdistLens_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_litdistLens_4() { return &___litdistLens_4; }
	inline void set_litdistLens_4(ByteU5BU5D_t4116647657* value)
	{
		___litdistLens_4 = value;
		Il2CppCodeGenWriteBarrier(&___litdistLens_4, value);
	}

	inline static int32_t get_offset_of_blTree_5() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___blTree_5)); }
	inline InflaterHuffmanTree_t1978394600 * get_blTree_5() const { return ___blTree_5; }
	inline InflaterHuffmanTree_t1978394600 ** get_address_of_blTree_5() { return &___blTree_5; }
	inline void set_blTree_5(InflaterHuffmanTree_t1978394600 * value)
	{
		___blTree_5 = value;
		Il2CppCodeGenWriteBarrier(&___blTree_5, value);
	}

	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_lnum_7() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___lnum_7)); }
	inline int32_t get_lnum_7() const { return ___lnum_7; }
	inline int32_t* get_address_of_lnum_7() { return &___lnum_7; }
	inline void set_lnum_7(int32_t value)
	{
		___lnum_7 = value;
	}

	inline static int32_t get_offset_of_dnum_8() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___dnum_8)); }
	inline int32_t get_dnum_8() const { return ___dnum_8; }
	inline int32_t* get_address_of_dnum_8() { return &___dnum_8; }
	inline void set_dnum_8(int32_t value)
	{
		___dnum_8 = value;
	}

	inline static int32_t get_offset_of_blnum_9() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___blnum_9)); }
	inline int32_t get_blnum_9() const { return ___blnum_9; }
	inline int32_t* get_address_of_blnum_9() { return &___blnum_9; }
	inline void set_blnum_9(int32_t value)
	{
		___blnum_9 = value;
	}

	inline static int32_t get_offset_of_num_10() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___num_10)); }
	inline int32_t get_num_10() const { return ___num_10; }
	inline int32_t* get_address_of_num_10() { return &___num_10; }
	inline void set_num_10(int32_t value)
	{
		___num_10 = value;
	}

	inline static int32_t get_offset_of_repSymbol_11() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___repSymbol_11)); }
	inline int32_t get_repSymbol_11() const { return ___repSymbol_11; }
	inline int32_t* get_address_of_repSymbol_11() { return &___repSymbol_11; }
	inline void set_repSymbol_11(int32_t value)
	{
		___repSymbol_11 = value;
	}

	inline static int32_t get_offset_of_lastLen_12() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___lastLen_12)); }
	inline uint8_t get_lastLen_12() const { return ___lastLen_12; }
	inline uint8_t* get_address_of_lastLen_12() { return &___lastLen_12; }
	inline void set_lastLen_12(uint8_t value)
	{
		___lastLen_12 = value;
	}

	inline static int32_t get_offset_of_ptr_13() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011, ___ptr_13)); }
	inline int32_t get_ptr_13() const { return ___ptr_13; }
	inline int32_t* get_address_of_ptr_13() { return &___ptr_13; }
	inline void set_ptr_13(int32_t value)
	{
		___ptr_13 = value;
	}
};

struct InflaterDynHeader_t616422011_StaticFields
{
public:
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repMin
	Int32U5BU5D_t385246372* ___repMin_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repBits
	Int32U5BU5D_t385246372* ___repBits_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BL_ORDER
	Int32U5BU5D_t385246372* ___BL_ORDER_2;

public:
	inline static int32_t get_offset_of_repMin_0() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011_StaticFields, ___repMin_0)); }
	inline Int32U5BU5D_t385246372* get_repMin_0() const { return ___repMin_0; }
	inline Int32U5BU5D_t385246372** get_address_of_repMin_0() { return &___repMin_0; }
	inline void set_repMin_0(Int32U5BU5D_t385246372* value)
	{
		___repMin_0 = value;
		Il2CppCodeGenWriteBarrier(&___repMin_0, value);
	}

	inline static int32_t get_offset_of_repBits_1() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011_StaticFields, ___repBits_1)); }
	inline Int32U5BU5D_t385246372* get_repBits_1() const { return ___repBits_1; }
	inline Int32U5BU5D_t385246372** get_address_of_repBits_1() { return &___repBits_1; }
	inline void set_repBits_1(Int32U5BU5D_t385246372* value)
	{
		___repBits_1 = value;
		Il2CppCodeGenWriteBarrier(&___repBits_1, value);
	}

	inline static int32_t get_offset_of_BL_ORDER_2() { return static_cast<int32_t>(offsetof(InflaterDynHeader_t616422011_StaticFields, ___BL_ORDER_2)); }
	inline Int32U5BU5D_t385246372* get_BL_ORDER_2() const { return ___BL_ORDER_2; }
	inline Int32U5BU5D_t385246372** get_address_of_BL_ORDER_2() { return &___BL_ORDER_2; }
	inline void set_BL_ORDER_2(Int32U5BU5D_t385246372* value)
	{
		___BL_ORDER_2 = value;
		Il2CppCodeGenWriteBarrier(&___BL_ORDER_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
