#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream1273022909.h"

// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t668001208;
// System.IO.Stream
struct Stream_t1273022909;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct  DeflaterOutputStream_t939764091  : public Stream_t1273022909
{
public:
	// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::password
	String_t* ___password_2;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::cryptoTransform_
	Il2CppObject * ___cryptoTransform__3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::buffer_
	ByteU5BU5D_t4116647657* ___buffer__4;
	// ICSharpCode.SharpZipLib.Zip.Compression.Deflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::deflater_
	Deflater_t668001208 * ___deflater__5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::baseOutputStream_
	Stream_t1273022909 * ___baseOutputStream__6;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isClosed_
	bool ___isClosed__7;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isStreamOwner_
	bool ___isStreamOwner__8;

public:
	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier(&___password_2, value);
	}

	inline static int32_t get_offset_of_cryptoTransform__3() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___cryptoTransform__3)); }
	inline Il2CppObject * get_cryptoTransform__3() const { return ___cryptoTransform__3; }
	inline Il2CppObject ** get_address_of_cryptoTransform__3() { return &___cryptoTransform__3; }
	inline void set_cryptoTransform__3(Il2CppObject * value)
	{
		___cryptoTransform__3 = value;
		Il2CppCodeGenWriteBarrier(&___cryptoTransform__3, value);
	}

	inline static int32_t get_offset_of_buffer__4() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___buffer__4)); }
	inline ByteU5BU5D_t4116647657* get_buffer__4() const { return ___buffer__4; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer__4() { return &___buffer__4; }
	inline void set_buffer__4(ByteU5BU5D_t4116647657* value)
	{
		___buffer__4 = value;
		Il2CppCodeGenWriteBarrier(&___buffer__4, value);
	}

	inline static int32_t get_offset_of_deflater__5() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___deflater__5)); }
	inline Deflater_t668001208 * get_deflater__5() const { return ___deflater__5; }
	inline Deflater_t668001208 ** get_address_of_deflater__5() { return &___deflater__5; }
	inline void set_deflater__5(Deflater_t668001208 * value)
	{
		___deflater__5 = value;
		Il2CppCodeGenWriteBarrier(&___deflater__5, value);
	}

	inline static int32_t get_offset_of_baseOutputStream__6() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___baseOutputStream__6)); }
	inline Stream_t1273022909 * get_baseOutputStream__6() const { return ___baseOutputStream__6; }
	inline Stream_t1273022909 ** get_address_of_baseOutputStream__6() { return &___baseOutputStream__6; }
	inline void set_baseOutputStream__6(Stream_t1273022909 * value)
	{
		___baseOutputStream__6 = value;
		Il2CppCodeGenWriteBarrier(&___baseOutputStream__6, value);
	}

	inline static int32_t get_offset_of_isClosed__7() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___isClosed__7)); }
	inline bool get_isClosed__7() const { return ___isClosed__7; }
	inline bool* get_address_of_isClosed__7() { return &___isClosed__7; }
	inline void set_isClosed__7(bool value)
	{
		___isClosed__7 = value;
	}

	inline static int32_t get_offset_of_isStreamOwner__8() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t939764091, ___isStreamOwner__8)); }
	inline bool get_isStreamOwner__8() const { return ___isStreamOwner__8; }
	inline bool* get_address_of_isStreamOwner__8() { return &___isStreamOwner__8; }
	inline void set_isStreamOwner__8(bool value)
	{
		___isStreamOwner__8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
