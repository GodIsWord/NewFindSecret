#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.StateObject
struct  StateObject_t3201166400  : public Il2CppObject
{
public:
	// System.Net.Sockets.TcpClient ZGGame.StateObject::client
	TcpClient_t822906377 * ___client_0;
	// System.Byte[] ZGGame.StateObject::buffer
	ByteU5BU5D_t4116647657* ___buffer_2;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(StateObject_t3201166400, ___client_0)); }
	inline TcpClient_t822906377 * get_client_0() const { return ___client_0; }
	inline TcpClient_t822906377 ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t822906377 * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier(&___client_0, value);
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(StateObject_t3201166400, ___buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
