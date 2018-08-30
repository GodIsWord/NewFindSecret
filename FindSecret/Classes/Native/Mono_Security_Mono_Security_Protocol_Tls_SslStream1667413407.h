#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream1273022909.h"
#include "mscorlib_System_Boolean97287965.h"

// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// Mono.Security.Protocol.Tls.Context
struct Context_t3971234707;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3759049701;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1667413407  : public Stream_t1273022909
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t1273022909 * ___innerStream_4;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t94973147 * ___inputBuffer_5;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t3971234707 * ___context_6;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t3759049701 * ___protocol_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_9;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Il2CppObject * ___negotiate_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Il2CppObject * ___read_12;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Il2CppObject * ___write_13;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t451242010 * ___negotiationComplete_14;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t4116647657* ___recbuf_15;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t94973147 * ___recordStream_16;

public:
	inline static int32_t get_offset_of_innerStream_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___innerStream_4)); }
	inline Stream_t1273022909 * get_innerStream_4() const { return ___innerStream_4; }
	inline Stream_t1273022909 ** get_address_of_innerStream_4() { return &___innerStream_4; }
	inline void set_innerStream_4(Stream_t1273022909 * value)
	{
		___innerStream_4 = value;
		Il2CppCodeGenWriteBarrier(&___innerStream_4, value);
	}

	inline static int32_t get_offset_of_inputBuffer_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___inputBuffer_5)); }
	inline MemoryStream_t94973147 * get_inputBuffer_5() const { return ___inputBuffer_5; }
	inline MemoryStream_t94973147 ** get_address_of_inputBuffer_5() { return &___inputBuffer_5; }
	inline void set_inputBuffer_5(MemoryStream_t94973147 * value)
	{
		___inputBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___inputBuffer_5, value);
	}

	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___context_6)); }
	inline Context_t3971234707 * get_context_6() const { return ___context_6; }
	inline Context_t3971234707 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(Context_t3971234707 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier(&___context_6, value);
	}

	inline static int32_t get_offset_of_protocol_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___protocol_7)); }
	inline RecordProtocol_t3759049701 * get_protocol_7() const { return ___protocol_7; }
	inline RecordProtocol_t3759049701 ** get_address_of_protocol_7() { return &___protocol_7; }
	inline void set_protocol_7(RecordProtocol_t3759049701 * value)
	{
		___protocol_7 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_7, value);
	}

	inline static int32_t get_offset_of_ownsStream_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___ownsStream_8)); }
	inline bool get_ownsStream_8() const { return ___ownsStream_8; }
	inline bool* get_address_of_ownsStream_8() { return &___ownsStream_8; }
	inline void set_ownsStream_8(bool value)
	{
		___ownsStream_8 = value;
	}

	inline static int32_t get_offset_of_disposed_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___disposed_9)); }
	inline bool get_disposed_9() const { return ___disposed_9; }
	inline bool* get_address_of_disposed_9() { return &___disposed_9; }
	inline void set_disposed_9(bool value)
	{
		___disposed_9 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___checkCertRevocationStatus_10)); }
	inline bool get_checkCertRevocationStatus_10() const { return ___checkCertRevocationStatus_10; }
	inline bool* get_address_of_checkCertRevocationStatus_10() { return &___checkCertRevocationStatus_10; }
	inline void set_checkCertRevocationStatus_10(bool value)
	{
		___checkCertRevocationStatus_10 = value;
	}

	inline static int32_t get_offset_of_negotiate_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___negotiate_11)); }
	inline Il2CppObject * get_negotiate_11() const { return ___negotiate_11; }
	inline Il2CppObject ** get_address_of_negotiate_11() { return &___negotiate_11; }
	inline void set_negotiate_11(Il2CppObject * value)
	{
		___negotiate_11 = value;
		Il2CppCodeGenWriteBarrier(&___negotiate_11, value);
	}

	inline static int32_t get_offset_of_read_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___read_12)); }
	inline Il2CppObject * get_read_12() const { return ___read_12; }
	inline Il2CppObject ** get_address_of_read_12() { return &___read_12; }
	inline void set_read_12(Il2CppObject * value)
	{
		___read_12 = value;
		Il2CppCodeGenWriteBarrier(&___read_12, value);
	}

	inline static int32_t get_offset_of_write_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___write_13)); }
	inline Il2CppObject * get_write_13() const { return ___write_13; }
	inline Il2CppObject ** get_address_of_write_13() { return &___write_13; }
	inline void set_write_13(Il2CppObject * value)
	{
		___write_13 = value;
		Il2CppCodeGenWriteBarrier(&___write_13, value);
	}

	inline static int32_t get_offset_of_negotiationComplete_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___negotiationComplete_14)); }
	inline ManualResetEvent_t451242010 * get_negotiationComplete_14() const { return ___negotiationComplete_14; }
	inline ManualResetEvent_t451242010 ** get_address_of_negotiationComplete_14() { return &___negotiationComplete_14; }
	inline void set_negotiationComplete_14(ManualResetEvent_t451242010 * value)
	{
		___negotiationComplete_14 = value;
		Il2CppCodeGenWriteBarrier(&___negotiationComplete_14, value);
	}

	inline static int32_t get_offset_of_recbuf_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___recbuf_15)); }
	inline ByteU5BU5D_t4116647657* get_recbuf_15() const { return ___recbuf_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_recbuf_15() { return &___recbuf_15; }
	inline void set_recbuf_15(ByteU5BU5D_t4116647657* value)
	{
		___recbuf_15 = value;
		Il2CppCodeGenWriteBarrier(&___recbuf_15, value);
	}

	inline static int32_t get_offset_of_recordStream_16() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___recordStream_16)); }
	inline MemoryStream_t94973147 * get_recordStream_16() const { return ___recordStream_16; }
	inline MemoryStream_t94973147 ** get_address_of_recordStream_16() { return &___recordStream_16; }
	inline void set_recordStream_16(MemoryStream_t94973147 * value)
	{
		___recordStream_16 = value;
		Il2CppCodeGenWriteBarrier(&___recordStream_16, value);
	}
};

struct SslStreamBase_t1667413407_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t451242010 * ___record_processing_3;

public:
	inline static int32_t get_offset_of_record_processing_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407_StaticFields, ___record_processing_3)); }
	inline ManualResetEvent_t451242010 * get_record_processing_3() const { return ___record_processing_3; }
	inline ManualResetEvent_t451242010 ** get_address_of_record_processing_3() { return &___record_processing_3; }
	inline void set_record_processing_3(ManualResetEvent_t451242010 * value)
	{
		___record_processing_3 = value;
		Il2CppCodeGenWriteBarrier(&___record_processing_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
