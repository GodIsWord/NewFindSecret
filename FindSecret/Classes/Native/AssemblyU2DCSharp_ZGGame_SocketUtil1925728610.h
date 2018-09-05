#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Collections.Generic.Dictionary`2<System.String,ZGGame.SocketUtil>
struct Dictionary_2_t1710984909;
// ZGGame.AddressData
struct AddressData_t523041859;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t4071955934;
// System.Collections.Generic.List`1<ZGGame.NetInfoData>
struct List_1_t2251688414;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.SocketUtil
struct  SocketUtil_t1925728610  : public Il2CppObject
{
public:
	// ZGGame.AddressData ZGGame.SocketUtil::address
	AddressData_t523041859 * ___address_1;
	// System.Net.Sockets.TcpClient ZGGame.SocketUtil::tcp
	TcpClient_t822906377 * ___tcp_2;
	// System.Net.Sockets.NetworkStream ZGGame.SocketUtil::workStream
	NetworkStream_t4071955934 * ___workStream_3;
	// System.Collections.Generic.List`1<ZGGame.NetInfoData> ZGGame.SocketUtil::readCacheData
	List_1_t2251688414 * ___readCacheData_4;
	// System.Collections.Generic.List`1<ZGGame.NetInfoData> ZGGame.SocketUtil::castCacheData
	List_1_t2251688414 * ___castCacheData_5;
	// System.Byte[] ZGGame.SocketUtil::currentReciveBytes
	ByteU5BU5D_t4116647657* ___currentReciveBytes_6;
	// System.Boolean ZGGame.SocketUtil::_connected
	bool ____connected_7;

public:
	inline static int32_t get_offset_of_address_1() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___address_1)); }
	inline AddressData_t523041859 * get_address_1() const { return ___address_1; }
	inline AddressData_t523041859 ** get_address_of_address_1() { return &___address_1; }
	inline void set_address_1(AddressData_t523041859 * value)
	{
		___address_1 = value;
		Il2CppCodeGenWriteBarrier(&___address_1, value);
	}

	inline static int32_t get_offset_of_tcp_2() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___tcp_2)); }
	inline TcpClient_t822906377 * get_tcp_2() const { return ___tcp_2; }
	inline TcpClient_t822906377 ** get_address_of_tcp_2() { return &___tcp_2; }
	inline void set_tcp_2(TcpClient_t822906377 * value)
	{
		___tcp_2 = value;
		Il2CppCodeGenWriteBarrier(&___tcp_2, value);
	}

	inline static int32_t get_offset_of_workStream_3() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___workStream_3)); }
	inline NetworkStream_t4071955934 * get_workStream_3() const { return ___workStream_3; }
	inline NetworkStream_t4071955934 ** get_address_of_workStream_3() { return &___workStream_3; }
	inline void set_workStream_3(NetworkStream_t4071955934 * value)
	{
		___workStream_3 = value;
		Il2CppCodeGenWriteBarrier(&___workStream_3, value);
	}

	inline static int32_t get_offset_of_readCacheData_4() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___readCacheData_4)); }
	inline List_1_t2251688414 * get_readCacheData_4() const { return ___readCacheData_4; }
	inline List_1_t2251688414 ** get_address_of_readCacheData_4() { return &___readCacheData_4; }
	inline void set_readCacheData_4(List_1_t2251688414 * value)
	{
		___readCacheData_4 = value;
		Il2CppCodeGenWriteBarrier(&___readCacheData_4, value);
	}

	inline static int32_t get_offset_of_castCacheData_5() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___castCacheData_5)); }
	inline List_1_t2251688414 * get_castCacheData_5() const { return ___castCacheData_5; }
	inline List_1_t2251688414 ** get_address_of_castCacheData_5() { return &___castCacheData_5; }
	inline void set_castCacheData_5(List_1_t2251688414 * value)
	{
		___castCacheData_5 = value;
		Il2CppCodeGenWriteBarrier(&___castCacheData_5, value);
	}

	inline static int32_t get_offset_of_currentReciveBytes_6() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ___currentReciveBytes_6)); }
	inline ByteU5BU5D_t4116647657* get_currentReciveBytes_6() const { return ___currentReciveBytes_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_currentReciveBytes_6() { return &___currentReciveBytes_6; }
	inline void set_currentReciveBytes_6(ByteU5BU5D_t4116647657* value)
	{
		___currentReciveBytes_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentReciveBytes_6, value);
	}

	inline static int32_t get_offset_of__connected_7() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610, ____connected_7)); }
	inline bool get__connected_7() const { return ____connected_7; }
	inline bool* get_address_of__connected_7() { return &____connected_7; }
	inline void set__connected_7(bool value)
	{
		____connected_7 = value;
	}
};

struct SocketUtil_t1925728610_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ZGGame.SocketUtil> ZGGame.SocketUtil::_socketInsDic
	Dictionary_2_t1710984909 * ____socketInsDic_0;

public:
	inline static int32_t get_offset_of__socketInsDic_0() { return static_cast<int32_t>(offsetof(SocketUtil_t1925728610_StaticFields, ____socketInsDic_0)); }
	inline Dictionary_2_t1710984909 * get__socketInsDic_0() const { return ____socketInsDic_0; }
	inline Dictionary_2_t1710984909 ** get_address_of__socketInsDic_0() { return &____socketInsDic_0; }
	inline void set__socketInsDic_0(Dictionary_2_t1710984909 * value)
	{
		____socketInsDic_0 = value;
		Il2CppCodeGenWriteBarrier(&____socketInsDic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
