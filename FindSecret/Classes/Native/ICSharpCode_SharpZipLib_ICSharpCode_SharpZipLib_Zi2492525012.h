#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t1589715067;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
struct  Tree_t2492525012  : public Il2CppObject
{
public:
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::freqs
	Int16U5BU5D_t3686840178* ___freqs_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::length
	ByteU5BU5D_t4116647657* ___length_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::minNumCodes
	int32_t ___minNumCodes_2;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::numCodes
	int32_t ___numCodes_3;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::codes
	Int16U5BU5D_t3686840178* ___codes_4;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::bl_counts
	Int32U5BU5D_t385246372* ___bl_counts_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::maxLength
	int32_t ___maxLength_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::dh
	DeflaterHuffman_t1589715067 * ___dh_7;

public:
	inline static int32_t get_offset_of_freqs_0() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___freqs_0)); }
	inline Int16U5BU5D_t3686840178* get_freqs_0() const { return ___freqs_0; }
	inline Int16U5BU5D_t3686840178** get_address_of_freqs_0() { return &___freqs_0; }
	inline void set_freqs_0(Int16U5BU5D_t3686840178* value)
	{
		___freqs_0 = value;
		Il2CppCodeGenWriteBarrier(&___freqs_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___length_1)); }
	inline ByteU5BU5D_t4116647657* get_length_1() const { return ___length_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(ByteU5BU5D_t4116647657* value)
	{
		___length_1 = value;
		Il2CppCodeGenWriteBarrier(&___length_1, value);
	}

	inline static int32_t get_offset_of_minNumCodes_2() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___minNumCodes_2)); }
	inline int32_t get_minNumCodes_2() const { return ___minNumCodes_2; }
	inline int32_t* get_address_of_minNumCodes_2() { return &___minNumCodes_2; }
	inline void set_minNumCodes_2(int32_t value)
	{
		___minNumCodes_2 = value;
	}

	inline static int32_t get_offset_of_numCodes_3() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___numCodes_3)); }
	inline int32_t get_numCodes_3() const { return ___numCodes_3; }
	inline int32_t* get_address_of_numCodes_3() { return &___numCodes_3; }
	inline void set_numCodes_3(int32_t value)
	{
		___numCodes_3 = value;
	}

	inline static int32_t get_offset_of_codes_4() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___codes_4)); }
	inline Int16U5BU5D_t3686840178* get_codes_4() const { return ___codes_4; }
	inline Int16U5BU5D_t3686840178** get_address_of_codes_4() { return &___codes_4; }
	inline void set_codes_4(Int16U5BU5D_t3686840178* value)
	{
		___codes_4 = value;
		Il2CppCodeGenWriteBarrier(&___codes_4, value);
	}

	inline static int32_t get_offset_of_bl_counts_5() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___bl_counts_5)); }
	inline Int32U5BU5D_t385246372* get_bl_counts_5() const { return ___bl_counts_5; }
	inline Int32U5BU5D_t385246372** get_address_of_bl_counts_5() { return &___bl_counts_5; }
	inline void set_bl_counts_5(Int32U5BU5D_t385246372* value)
	{
		___bl_counts_5 = value;
		Il2CppCodeGenWriteBarrier(&___bl_counts_5, value);
	}

	inline static int32_t get_offset_of_maxLength_6() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___maxLength_6)); }
	inline int32_t get_maxLength_6() const { return ___maxLength_6; }
	inline int32_t* get_address_of_maxLength_6() { return &___maxLength_6; }
	inline void set_maxLength_6(int32_t value)
	{
		___maxLength_6 = value;
	}

	inline static int32_t get_offset_of_dh_7() { return static_cast<int32_t>(offsetof(Tree_t2492525012, ___dh_7)); }
	inline DeflaterHuffman_t1589715067 * get_dh_7() const { return ___dh_7; }
	inline DeflaterHuffman_t1589715067 ** get_address_of_dh_7() { return &___dh_7; }
	inline void set_dh_7(DeflaterHuffman_t1589715067 * value)
	{
		___dh_7 = value;
		Il2CppCodeGenWriteBarrier(&___dh_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
