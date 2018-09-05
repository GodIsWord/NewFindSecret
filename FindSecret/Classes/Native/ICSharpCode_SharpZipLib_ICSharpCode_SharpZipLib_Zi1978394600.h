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
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1978394600;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct  InflaterHuffmanTree_t1978394600  : public Il2CppObject
{
public:
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::tree
	Int16U5BU5D_t3686840178* ___tree_0;

public:
	inline static int32_t get_offset_of_tree_0() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t1978394600, ___tree_0)); }
	inline Int16U5BU5D_t3686840178* get_tree_0() const { return ___tree_0; }
	inline Int16U5BU5D_t3686840178** get_address_of_tree_0() { return &___tree_0; }
	inline void set_tree_0(Int16U5BU5D_t3686840178* value)
	{
		___tree_0 = value;
		Il2CppCodeGenWriteBarrier(&___tree_0, value);
	}
};

struct InflaterHuffmanTree_t1978394600_StaticFields
{
public:
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::defLitLenTree
	InflaterHuffmanTree_t1978394600 * ___defLitLenTree_1;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::defDistTree
	InflaterHuffmanTree_t1978394600 * ___defDistTree_2;

public:
	inline static int32_t get_offset_of_defLitLenTree_1() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t1978394600_StaticFields, ___defLitLenTree_1)); }
	inline InflaterHuffmanTree_t1978394600 * get_defLitLenTree_1() const { return ___defLitLenTree_1; }
	inline InflaterHuffmanTree_t1978394600 ** get_address_of_defLitLenTree_1() { return &___defLitLenTree_1; }
	inline void set_defLitLenTree_1(InflaterHuffmanTree_t1978394600 * value)
	{
		___defLitLenTree_1 = value;
		Il2CppCodeGenWriteBarrier(&___defLitLenTree_1, value);
	}

	inline static int32_t get_offset_of_defDistTree_2() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t1978394600_StaticFields, ___defDistTree_2)); }
	inline InflaterHuffmanTree_t1978394600 * get_defDistTree_2() const { return ___defDistTree_2; }
	inline InflaterHuffmanTree_t1978394600 ** get_address_of_defDistTree_2() { return &___defDistTree_2; }
	inline void set_defDistTree_2(InflaterHuffmanTree_t1978394600 * value)
	{
		___defDistTree_2 = value;
		Il2CppCodeGenWriteBarrier(&___defDistTree_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
