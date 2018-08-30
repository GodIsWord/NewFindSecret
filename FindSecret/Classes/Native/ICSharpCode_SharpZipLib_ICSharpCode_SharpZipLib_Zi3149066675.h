#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2939957086.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1809637001.h"

// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t48501436;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t1589715067;
// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t2099134918;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct  DeflaterEngine_t3149066675  : public DeflaterConstants_t2939957086
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::ins_h
	int32_t ___ins_h_6;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::head
	Int16U5BU5D_t3686840178* ___head_7;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::prev
	Int16U5BU5D_t3686840178* ___prev_8;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::matchStart
	int32_t ___matchStart_9;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::matchLen
	int32_t ___matchLen_10;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::prevAvailable
	bool ___prevAvailable_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::blockStart
	int32_t ___blockStart_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::strstart
	int32_t ___strstart_13;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::lookahead
	int32_t ___lookahead_14;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::window
	ByteU5BU5D_t4116647657* ___window_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::strategy
	int32_t ___strategy_16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::max_chain
	int32_t ___max_chain_17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::max_lazy
	int32_t ___max_lazy_18;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::niceLength
	int32_t ___niceLength_19;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::goodLength
	int32_t ___goodLength_20;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::compressionFunction
	int32_t ___compressionFunction_21;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputBuf
	ByteU5BU5D_t4116647657* ___inputBuf_22;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::totalIn
	int64_t ___totalIn_23;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputOff
	int32_t ___inputOff_24;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputEnd
	int32_t ___inputEnd_25;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::pending
	DeflaterPending_t48501436 * ___pending_26;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::huffman
	DeflaterHuffman_t1589715067 * ___huffman_27;
	// ICSharpCode.SharpZipLib.Checksums.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::adler
	Adler32_t2099134918 * ___adler_28;

public:
	inline static int32_t get_offset_of_ins_h_6() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___ins_h_6)); }
	inline int32_t get_ins_h_6() const { return ___ins_h_6; }
	inline int32_t* get_address_of_ins_h_6() { return &___ins_h_6; }
	inline void set_ins_h_6(int32_t value)
	{
		___ins_h_6 = value;
	}

	inline static int32_t get_offset_of_head_7() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___head_7)); }
	inline Int16U5BU5D_t3686840178* get_head_7() const { return ___head_7; }
	inline Int16U5BU5D_t3686840178** get_address_of_head_7() { return &___head_7; }
	inline void set_head_7(Int16U5BU5D_t3686840178* value)
	{
		___head_7 = value;
		Il2CppCodeGenWriteBarrier(&___head_7, value);
	}

	inline static int32_t get_offset_of_prev_8() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___prev_8)); }
	inline Int16U5BU5D_t3686840178* get_prev_8() const { return ___prev_8; }
	inline Int16U5BU5D_t3686840178** get_address_of_prev_8() { return &___prev_8; }
	inline void set_prev_8(Int16U5BU5D_t3686840178* value)
	{
		___prev_8 = value;
		Il2CppCodeGenWriteBarrier(&___prev_8, value);
	}

	inline static int32_t get_offset_of_matchStart_9() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___matchStart_9)); }
	inline int32_t get_matchStart_9() const { return ___matchStart_9; }
	inline int32_t* get_address_of_matchStart_9() { return &___matchStart_9; }
	inline void set_matchStart_9(int32_t value)
	{
		___matchStart_9 = value;
	}

	inline static int32_t get_offset_of_matchLen_10() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___matchLen_10)); }
	inline int32_t get_matchLen_10() const { return ___matchLen_10; }
	inline int32_t* get_address_of_matchLen_10() { return &___matchLen_10; }
	inline void set_matchLen_10(int32_t value)
	{
		___matchLen_10 = value;
	}

	inline static int32_t get_offset_of_prevAvailable_11() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___prevAvailable_11)); }
	inline bool get_prevAvailable_11() const { return ___prevAvailable_11; }
	inline bool* get_address_of_prevAvailable_11() { return &___prevAvailable_11; }
	inline void set_prevAvailable_11(bool value)
	{
		___prevAvailable_11 = value;
	}

	inline static int32_t get_offset_of_blockStart_12() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___blockStart_12)); }
	inline int32_t get_blockStart_12() const { return ___blockStart_12; }
	inline int32_t* get_address_of_blockStart_12() { return &___blockStart_12; }
	inline void set_blockStart_12(int32_t value)
	{
		___blockStart_12 = value;
	}

	inline static int32_t get_offset_of_strstart_13() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___strstart_13)); }
	inline int32_t get_strstart_13() const { return ___strstart_13; }
	inline int32_t* get_address_of_strstart_13() { return &___strstart_13; }
	inline void set_strstart_13(int32_t value)
	{
		___strstart_13 = value;
	}

	inline static int32_t get_offset_of_lookahead_14() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___lookahead_14)); }
	inline int32_t get_lookahead_14() const { return ___lookahead_14; }
	inline int32_t* get_address_of_lookahead_14() { return &___lookahead_14; }
	inline void set_lookahead_14(int32_t value)
	{
		___lookahead_14 = value;
	}

	inline static int32_t get_offset_of_window_15() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___window_15)); }
	inline ByteU5BU5D_t4116647657* get_window_15() const { return ___window_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_15() { return &___window_15; }
	inline void set_window_15(ByteU5BU5D_t4116647657* value)
	{
		___window_15 = value;
		Il2CppCodeGenWriteBarrier(&___window_15, value);
	}

	inline static int32_t get_offset_of_strategy_16() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___strategy_16)); }
	inline int32_t get_strategy_16() const { return ___strategy_16; }
	inline int32_t* get_address_of_strategy_16() { return &___strategy_16; }
	inline void set_strategy_16(int32_t value)
	{
		___strategy_16 = value;
	}

	inline static int32_t get_offset_of_max_chain_17() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___max_chain_17)); }
	inline int32_t get_max_chain_17() const { return ___max_chain_17; }
	inline int32_t* get_address_of_max_chain_17() { return &___max_chain_17; }
	inline void set_max_chain_17(int32_t value)
	{
		___max_chain_17 = value;
	}

	inline static int32_t get_offset_of_max_lazy_18() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___max_lazy_18)); }
	inline int32_t get_max_lazy_18() const { return ___max_lazy_18; }
	inline int32_t* get_address_of_max_lazy_18() { return &___max_lazy_18; }
	inline void set_max_lazy_18(int32_t value)
	{
		___max_lazy_18 = value;
	}

	inline static int32_t get_offset_of_niceLength_19() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___niceLength_19)); }
	inline int32_t get_niceLength_19() const { return ___niceLength_19; }
	inline int32_t* get_address_of_niceLength_19() { return &___niceLength_19; }
	inline void set_niceLength_19(int32_t value)
	{
		___niceLength_19 = value;
	}

	inline static int32_t get_offset_of_goodLength_20() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___goodLength_20)); }
	inline int32_t get_goodLength_20() const { return ___goodLength_20; }
	inline int32_t* get_address_of_goodLength_20() { return &___goodLength_20; }
	inline void set_goodLength_20(int32_t value)
	{
		___goodLength_20 = value;
	}

	inline static int32_t get_offset_of_compressionFunction_21() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___compressionFunction_21)); }
	inline int32_t get_compressionFunction_21() const { return ___compressionFunction_21; }
	inline int32_t* get_address_of_compressionFunction_21() { return &___compressionFunction_21; }
	inline void set_compressionFunction_21(int32_t value)
	{
		___compressionFunction_21 = value;
	}

	inline static int32_t get_offset_of_inputBuf_22() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___inputBuf_22)); }
	inline ByteU5BU5D_t4116647657* get_inputBuf_22() const { return ___inputBuf_22; }
	inline ByteU5BU5D_t4116647657** get_address_of_inputBuf_22() { return &___inputBuf_22; }
	inline void set_inputBuf_22(ByteU5BU5D_t4116647657* value)
	{
		___inputBuf_22 = value;
		Il2CppCodeGenWriteBarrier(&___inputBuf_22, value);
	}

	inline static int32_t get_offset_of_totalIn_23() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___totalIn_23)); }
	inline int64_t get_totalIn_23() const { return ___totalIn_23; }
	inline int64_t* get_address_of_totalIn_23() { return &___totalIn_23; }
	inline void set_totalIn_23(int64_t value)
	{
		___totalIn_23 = value;
	}

	inline static int32_t get_offset_of_inputOff_24() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___inputOff_24)); }
	inline int32_t get_inputOff_24() const { return ___inputOff_24; }
	inline int32_t* get_address_of_inputOff_24() { return &___inputOff_24; }
	inline void set_inputOff_24(int32_t value)
	{
		___inputOff_24 = value;
	}

	inline static int32_t get_offset_of_inputEnd_25() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___inputEnd_25)); }
	inline int32_t get_inputEnd_25() const { return ___inputEnd_25; }
	inline int32_t* get_address_of_inputEnd_25() { return &___inputEnd_25; }
	inline void set_inputEnd_25(int32_t value)
	{
		___inputEnd_25 = value;
	}

	inline static int32_t get_offset_of_pending_26() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___pending_26)); }
	inline DeflaterPending_t48501436 * get_pending_26() const { return ___pending_26; }
	inline DeflaterPending_t48501436 ** get_address_of_pending_26() { return &___pending_26; }
	inline void set_pending_26(DeflaterPending_t48501436 * value)
	{
		___pending_26 = value;
		Il2CppCodeGenWriteBarrier(&___pending_26, value);
	}

	inline static int32_t get_offset_of_huffman_27() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___huffman_27)); }
	inline DeflaterHuffman_t1589715067 * get_huffman_27() const { return ___huffman_27; }
	inline DeflaterHuffman_t1589715067 ** get_address_of_huffman_27() { return &___huffman_27; }
	inline void set_huffman_27(DeflaterHuffman_t1589715067 * value)
	{
		___huffman_27 = value;
		Il2CppCodeGenWriteBarrier(&___huffman_27, value);
	}

	inline static int32_t get_offset_of_adler_28() { return static_cast<int32_t>(offsetof(DeflaterEngine_t3149066675, ___adler_28)); }
	inline Adler32_t2099134918 * get_adler_28() const { return ___adler_28; }
	inline Adler32_t2099134918 ** get_address_of_adler_28() { return &___adler_28; }
	inline void set_adler_28(Adler32_t2099134918 * value)
	{
		___adler_28 = value;
		Il2CppCodeGenWriteBarrier(&___adler_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
