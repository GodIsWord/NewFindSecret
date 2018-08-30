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
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t4201143916;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t874853933;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t616422011;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t1978394600;
// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t2099134918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct  Inflater_t642114133  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::mode
	int32_t ___mode_4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_6;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repLength
	int32_t ___repLength_7;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repDist
	int32_t ___repDist_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_10;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_11;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_12;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::noHeader
	bool ___noHeader_13;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator ICSharpCode.SharpZipLib.Zip.Compression.Inflater::input
	StreamManipulator_t4201143916 * ___input_14;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow ICSharpCode.SharpZipLib.Zip.Compression.Inflater::outputWindow
	OutputWindow_t874853933 * ___outputWindow_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader ICSharpCode.SharpZipLib.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_t616422011 * ___dynHeader_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_t1978394600 * ___litlenTree_17;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_t1978394600 * ___distTree_18;
	// ICSharpCode.SharpZipLib.Checksums.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::adler
	Adler32_t2099134918 * ___adler_19;

public:
	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_readAdler_5() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___readAdler_5)); }
	inline int32_t get_readAdler_5() const { return ___readAdler_5; }
	inline int32_t* get_address_of_readAdler_5() { return &___readAdler_5; }
	inline void set_readAdler_5(int32_t value)
	{
		___readAdler_5 = value;
	}

	inline static int32_t get_offset_of_neededBits_6() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___neededBits_6)); }
	inline int32_t get_neededBits_6() const { return ___neededBits_6; }
	inline int32_t* get_address_of_neededBits_6() { return &___neededBits_6; }
	inline void set_neededBits_6(int32_t value)
	{
		___neededBits_6 = value;
	}

	inline static int32_t get_offset_of_repLength_7() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___repLength_7)); }
	inline int32_t get_repLength_7() const { return ___repLength_7; }
	inline int32_t* get_address_of_repLength_7() { return &___repLength_7; }
	inline void set_repLength_7(int32_t value)
	{
		___repLength_7 = value;
	}

	inline static int32_t get_offset_of_repDist_8() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___repDist_8)); }
	inline int32_t get_repDist_8() const { return ___repDist_8; }
	inline int32_t* get_address_of_repDist_8() { return &___repDist_8; }
	inline void set_repDist_8(int32_t value)
	{
		___repDist_8 = value;
	}

	inline static int32_t get_offset_of_uncomprLen_9() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___uncomprLen_9)); }
	inline int32_t get_uncomprLen_9() const { return ___uncomprLen_9; }
	inline int32_t* get_address_of_uncomprLen_9() { return &___uncomprLen_9; }
	inline void set_uncomprLen_9(int32_t value)
	{
		___uncomprLen_9 = value;
	}

	inline static int32_t get_offset_of_isLastBlock_10() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___isLastBlock_10)); }
	inline bool get_isLastBlock_10() const { return ___isLastBlock_10; }
	inline bool* get_address_of_isLastBlock_10() { return &___isLastBlock_10; }
	inline void set_isLastBlock_10(bool value)
	{
		___isLastBlock_10 = value;
	}

	inline static int32_t get_offset_of_totalOut_11() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___totalOut_11)); }
	inline int64_t get_totalOut_11() const { return ___totalOut_11; }
	inline int64_t* get_address_of_totalOut_11() { return &___totalOut_11; }
	inline void set_totalOut_11(int64_t value)
	{
		___totalOut_11 = value;
	}

	inline static int32_t get_offset_of_totalIn_12() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___totalIn_12)); }
	inline int64_t get_totalIn_12() const { return ___totalIn_12; }
	inline int64_t* get_address_of_totalIn_12() { return &___totalIn_12; }
	inline void set_totalIn_12(int64_t value)
	{
		___totalIn_12 = value;
	}

	inline static int32_t get_offset_of_noHeader_13() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___noHeader_13)); }
	inline bool get_noHeader_13() const { return ___noHeader_13; }
	inline bool* get_address_of_noHeader_13() { return &___noHeader_13; }
	inline void set_noHeader_13(bool value)
	{
		___noHeader_13 = value;
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___input_14)); }
	inline StreamManipulator_t4201143916 * get_input_14() const { return ___input_14; }
	inline StreamManipulator_t4201143916 ** get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(StreamManipulator_t4201143916 * value)
	{
		___input_14 = value;
		Il2CppCodeGenWriteBarrier(&___input_14, value);
	}

	inline static int32_t get_offset_of_outputWindow_15() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___outputWindow_15)); }
	inline OutputWindow_t874853933 * get_outputWindow_15() const { return ___outputWindow_15; }
	inline OutputWindow_t874853933 ** get_address_of_outputWindow_15() { return &___outputWindow_15; }
	inline void set_outputWindow_15(OutputWindow_t874853933 * value)
	{
		___outputWindow_15 = value;
		Il2CppCodeGenWriteBarrier(&___outputWindow_15, value);
	}

	inline static int32_t get_offset_of_dynHeader_16() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___dynHeader_16)); }
	inline InflaterDynHeader_t616422011 * get_dynHeader_16() const { return ___dynHeader_16; }
	inline InflaterDynHeader_t616422011 ** get_address_of_dynHeader_16() { return &___dynHeader_16; }
	inline void set_dynHeader_16(InflaterDynHeader_t616422011 * value)
	{
		___dynHeader_16 = value;
		Il2CppCodeGenWriteBarrier(&___dynHeader_16, value);
	}

	inline static int32_t get_offset_of_litlenTree_17() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___litlenTree_17)); }
	inline InflaterHuffmanTree_t1978394600 * get_litlenTree_17() const { return ___litlenTree_17; }
	inline InflaterHuffmanTree_t1978394600 ** get_address_of_litlenTree_17() { return &___litlenTree_17; }
	inline void set_litlenTree_17(InflaterHuffmanTree_t1978394600 * value)
	{
		___litlenTree_17 = value;
		Il2CppCodeGenWriteBarrier(&___litlenTree_17, value);
	}

	inline static int32_t get_offset_of_distTree_18() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___distTree_18)); }
	inline InflaterHuffmanTree_t1978394600 * get_distTree_18() const { return ___distTree_18; }
	inline InflaterHuffmanTree_t1978394600 ** get_address_of_distTree_18() { return &___distTree_18; }
	inline void set_distTree_18(InflaterHuffmanTree_t1978394600 * value)
	{
		___distTree_18 = value;
		Il2CppCodeGenWriteBarrier(&___distTree_18, value);
	}

	inline static int32_t get_offset_of_adler_19() { return static_cast<int32_t>(offsetof(Inflater_t642114133, ___adler_19)); }
	inline Adler32_t2099134918 * get_adler_19() const { return ___adler_19; }
	inline Adler32_t2099134918 ** get_address_of_adler_19() { return &___adler_19; }
	inline void set_adler_19(Adler32_t2099134918 * value)
	{
		___adler_19 = value;
		Il2CppCodeGenWriteBarrier(&___adler_19, value);
	}
};

struct Inflater_t642114133_StaticFields
{
public:
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t385246372* ___CPLENS_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t385246372* ___CPLEXT_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t385246372* ___CPDIST_2;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t385246372* ___CPDEXT_3;

public:
	inline static int32_t get_offset_of_CPLENS_0() { return static_cast<int32_t>(offsetof(Inflater_t642114133_StaticFields, ___CPLENS_0)); }
	inline Int32U5BU5D_t385246372* get_CPLENS_0() const { return ___CPLENS_0; }
	inline Int32U5BU5D_t385246372** get_address_of_CPLENS_0() { return &___CPLENS_0; }
	inline void set_CPLENS_0(Int32U5BU5D_t385246372* value)
	{
		___CPLENS_0 = value;
		Il2CppCodeGenWriteBarrier(&___CPLENS_0, value);
	}

	inline static int32_t get_offset_of_CPLEXT_1() { return static_cast<int32_t>(offsetof(Inflater_t642114133_StaticFields, ___CPLEXT_1)); }
	inline Int32U5BU5D_t385246372* get_CPLEXT_1() const { return ___CPLEXT_1; }
	inline Int32U5BU5D_t385246372** get_address_of_CPLEXT_1() { return &___CPLEXT_1; }
	inline void set_CPLEXT_1(Int32U5BU5D_t385246372* value)
	{
		___CPLEXT_1 = value;
		Il2CppCodeGenWriteBarrier(&___CPLEXT_1, value);
	}

	inline static int32_t get_offset_of_CPDIST_2() { return static_cast<int32_t>(offsetof(Inflater_t642114133_StaticFields, ___CPDIST_2)); }
	inline Int32U5BU5D_t385246372* get_CPDIST_2() const { return ___CPDIST_2; }
	inline Int32U5BU5D_t385246372** get_address_of_CPDIST_2() { return &___CPDIST_2; }
	inline void set_CPDIST_2(Int32U5BU5D_t385246372* value)
	{
		___CPDIST_2 = value;
		Il2CppCodeGenWriteBarrier(&___CPDIST_2, value);
	}

	inline static int32_t get_offset_of_CPDEXT_3() { return static_cast<int32_t>(offsetof(Inflater_t642114133_StaticFields, ___CPDEXT_3)); }
	inline Int32U5BU5D_t385246372* get_CPDEXT_3() const { return ___CPDEXT_3; }
	inline Int32U5BU5D_t385246372** get_address_of_CPDEXT_3() { return &___CPDEXT_3; }
	inline void set_CPDEXT_3(Int32U5BU5D_t385246372* value)
	{
		___CPDEXT_3 = value;
		Il2CppCodeGenWriteBarrier(&___CPDEXT_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
