#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t48501436;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct DeflaterEngine_t3149066675;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct  Deflater_t668001208  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::level
	int32_t ___level_0;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::noZlibHeaderOrFooter
	bool ___noZlibHeaderOrFooter_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::state
	int32_t ___state_2;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::totalOut
	int64_t ___totalOut_3;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.Deflater::pending
	DeflaterPending_t48501436 * ___pending_4;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine ICSharpCode.SharpZipLib.Zip.Compression.Deflater::engine
	DeflaterEngine_t3149066675 * ___engine_5;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_noZlibHeaderOrFooter_1() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___noZlibHeaderOrFooter_1)); }
	inline bool get_noZlibHeaderOrFooter_1() const { return ___noZlibHeaderOrFooter_1; }
	inline bool* get_address_of_noZlibHeaderOrFooter_1() { return &___noZlibHeaderOrFooter_1; }
	inline void set_noZlibHeaderOrFooter_1(bool value)
	{
		___noZlibHeaderOrFooter_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_totalOut_3() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___totalOut_3)); }
	inline int64_t get_totalOut_3() const { return ___totalOut_3; }
	inline int64_t* get_address_of_totalOut_3() { return &___totalOut_3; }
	inline void set_totalOut_3(int64_t value)
	{
		___totalOut_3 = value;
	}

	inline static int32_t get_offset_of_pending_4() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___pending_4)); }
	inline DeflaterPending_t48501436 * get_pending_4() const { return ___pending_4; }
	inline DeflaterPending_t48501436 ** get_address_of_pending_4() { return &___pending_4; }
	inline void set_pending_4(DeflaterPending_t48501436 * value)
	{
		___pending_4 = value;
		Il2CppCodeGenWriteBarrier(&___pending_4, value);
	}

	inline static int32_t get_offset_of_engine_5() { return static_cast<int32_t>(offsetof(Deflater_t668001208, ___engine_5)); }
	inline DeflaterEngine_t3149066675 * get_engine_5() const { return ___engine_5; }
	inline DeflaterEngine_t3149066675 ** get_address_of_engine_5() { return &___engine_5; }
	inline void set_engine_5(DeflaterEngine_t3149066675 * value)
	{
		___engine_5 = value;
		Il2CppCodeGenWriteBarrier(&___engine_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
