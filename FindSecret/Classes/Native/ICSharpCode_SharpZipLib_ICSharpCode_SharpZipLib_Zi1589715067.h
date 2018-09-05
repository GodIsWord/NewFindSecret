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
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t48501436;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
struct Tree_t2492525012;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct  DeflaterHuffman_t1589715067  : public Il2CppObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::pending
	DeflaterPending_t48501436 * ___pending_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::literalTree
	Tree_t2492525012 * ___literalTree_7;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::distTree
	Tree_t2492525012 * ___distTree_8;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::blTree
	Tree_t2492525012 * ___blTree_9;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::d_buf
	Int16U5BU5D_t3686840178* ___d_buf_10;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::l_buf
	ByteU5BU5D_t4116647657* ___l_buf_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::last_lit
	int32_t ___last_lit_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::extra_bits
	int32_t ___extra_bits_13;

public:
	inline static int32_t get_offset_of_pending_6() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___pending_6)); }
	inline DeflaterPending_t48501436 * get_pending_6() const { return ___pending_6; }
	inline DeflaterPending_t48501436 ** get_address_of_pending_6() { return &___pending_6; }
	inline void set_pending_6(DeflaterPending_t48501436 * value)
	{
		___pending_6 = value;
		Il2CppCodeGenWriteBarrier(&___pending_6, value);
	}

	inline static int32_t get_offset_of_literalTree_7() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___literalTree_7)); }
	inline Tree_t2492525012 * get_literalTree_7() const { return ___literalTree_7; }
	inline Tree_t2492525012 ** get_address_of_literalTree_7() { return &___literalTree_7; }
	inline void set_literalTree_7(Tree_t2492525012 * value)
	{
		___literalTree_7 = value;
		Il2CppCodeGenWriteBarrier(&___literalTree_7, value);
	}

	inline static int32_t get_offset_of_distTree_8() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___distTree_8)); }
	inline Tree_t2492525012 * get_distTree_8() const { return ___distTree_8; }
	inline Tree_t2492525012 ** get_address_of_distTree_8() { return &___distTree_8; }
	inline void set_distTree_8(Tree_t2492525012 * value)
	{
		___distTree_8 = value;
		Il2CppCodeGenWriteBarrier(&___distTree_8, value);
	}

	inline static int32_t get_offset_of_blTree_9() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___blTree_9)); }
	inline Tree_t2492525012 * get_blTree_9() const { return ___blTree_9; }
	inline Tree_t2492525012 ** get_address_of_blTree_9() { return &___blTree_9; }
	inline void set_blTree_9(Tree_t2492525012 * value)
	{
		___blTree_9 = value;
		Il2CppCodeGenWriteBarrier(&___blTree_9, value);
	}

	inline static int32_t get_offset_of_d_buf_10() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___d_buf_10)); }
	inline Int16U5BU5D_t3686840178* get_d_buf_10() const { return ___d_buf_10; }
	inline Int16U5BU5D_t3686840178** get_address_of_d_buf_10() { return &___d_buf_10; }
	inline void set_d_buf_10(Int16U5BU5D_t3686840178* value)
	{
		___d_buf_10 = value;
		Il2CppCodeGenWriteBarrier(&___d_buf_10, value);
	}

	inline static int32_t get_offset_of_l_buf_11() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___l_buf_11)); }
	inline ByteU5BU5D_t4116647657* get_l_buf_11() const { return ___l_buf_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_l_buf_11() { return &___l_buf_11; }
	inline void set_l_buf_11(ByteU5BU5D_t4116647657* value)
	{
		___l_buf_11 = value;
		Il2CppCodeGenWriteBarrier(&___l_buf_11, value);
	}

	inline static int32_t get_offset_of_last_lit_12() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___last_lit_12)); }
	inline int32_t get_last_lit_12() const { return ___last_lit_12; }
	inline int32_t* get_address_of_last_lit_12() { return &___last_lit_12; }
	inline void set_last_lit_12(int32_t value)
	{
		___last_lit_12 = value;
	}

	inline static int32_t get_offset_of_extra_bits_13() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067, ___extra_bits_13)); }
	inline int32_t get_extra_bits_13() const { return ___extra_bits_13; }
	inline int32_t* get_address_of_extra_bits_13() { return &___extra_bits_13; }
	inline void set_extra_bits_13(int32_t value)
	{
		___extra_bits_13 = value;
	}
};

struct DeflaterHuffman_t1589715067_StaticFields
{
public:
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::BL_ORDER
	Int32U5BU5D_t385246372* ___BL_ORDER_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::bit4Reverse
	ByteU5BU5D_t4116647657* ___bit4Reverse_1;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticLCodes
	Int16U5BU5D_t3686840178* ___staticLCodes_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticLLength
	ByteU5BU5D_t4116647657* ___staticLLength_3;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticDCodes
	Int16U5BU5D_t3686840178* ___staticDCodes_4;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticDLength
	ByteU5BU5D_t4116647657* ___staticDLength_5;

public:
	inline static int32_t get_offset_of_BL_ORDER_0() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___BL_ORDER_0)); }
	inline Int32U5BU5D_t385246372* get_BL_ORDER_0() const { return ___BL_ORDER_0; }
	inline Int32U5BU5D_t385246372** get_address_of_BL_ORDER_0() { return &___BL_ORDER_0; }
	inline void set_BL_ORDER_0(Int32U5BU5D_t385246372* value)
	{
		___BL_ORDER_0 = value;
		Il2CppCodeGenWriteBarrier(&___BL_ORDER_0, value);
	}

	inline static int32_t get_offset_of_bit4Reverse_1() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___bit4Reverse_1)); }
	inline ByteU5BU5D_t4116647657* get_bit4Reverse_1() const { return ___bit4Reverse_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_bit4Reverse_1() { return &___bit4Reverse_1; }
	inline void set_bit4Reverse_1(ByteU5BU5D_t4116647657* value)
	{
		___bit4Reverse_1 = value;
		Il2CppCodeGenWriteBarrier(&___bit4Reverse_1, value);
	}

	inline static int32_t get_offset_of_staticLCodes_2() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___staticLCodes_2)); }
	inline Int16U5BU5D_t3686840178* get_staticLCodes_2() const { return ___staticLCodes_2; }
	inline Int16U5BU5D_t3686840178** get_address_of_staticLCodes_2() { return &___staticLCodes_2; }
	inline void set_staticLCodes_2(Int16U5BU5D_t3686840178* value)
	{
		___staticLCodes_2 = value;
		Il2CppCodeGenWriteBarrier(&___staticLCodes_2, value);
	}

	inline static int32_t get_offset_of_staticLLength_3() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___staticLLength_3)); }
	inline ByteU5BU5D_t4116647657* get_staticLLength_3() const { return ___staticLLength_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_staticLLength_3() { return &___staticLLength_3; }
	inline void set_staticLLength_3(ByteU5BU5D_t4116647657* value)
	{
		___staticLLength_3 = value;
		Il2CppCodeGenWriteBarrier(&___staticLLength_3, value);
	}

	inline static int32_t get_offset_of_staticDCodes_4() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___staticDCodes_4)); }
	inline Int16U5BU5D_t3686840178* get_staticDCodes_4() const { return ___staticDCodes_4; }
	inline Int16U5BU5D_t3686840178** get_address_of_staticDCodes_4() { return &___staticDCodes_4; }
	inline void set_staticDCodes_4(Int16U5BU5D_t3686840178* value)
	{
		___staticDCodes_4 = value;
		Il2CppCodeGenWriteBarrier(&___staticDCodes_4, value);
	}

	inline static int32_t get_offset_of_staticDLength_5() { return static_cast<int32_t>(offsetof(DeflaterHuffman_t1589715067_StaticFields, ___staticDLength_5)); }
	inline ByteU5BU5D_t4116647657* get_staticDLength_5() const { return ___staticDLength_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_staticDLength_5() { return &___staticDLength_5; }
	inline void set_staticDLength_5(ByteU5BU5D_t4116647657* value)
	{
		___staticDLength_5 = value;
		Il2CppCodeGenWriteBarrier(&___staticDLength_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
