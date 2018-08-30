#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject2528358522.h"

// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_t4228359453;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t3411787513;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3081694049;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3081694049  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t3411787513 * ___m_PlayerEditorConnectionEvents_3;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t128053199 * ___m_connectedPlayers_4;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_5;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_PlayerEditorConnectionEvents_3)); }
	inline PlayerEditorConnectionEvents_t3411787513 * get_m_PlayerEditorConnectionEvents_3() const { return ___m_PlayerEditorConnectionEvents_3; }
	inline PlayerEditorConnectionEvents_t3411787513 ** get_address_of_m_PlayerEditorConnectionEvents_3() { return &___m_PlayerEditorConnectionEvents_3; }
	inline void set_m_PlayerEditorConnectionEvents_3(PlayerEditorConnectionEvents_t3411787513 * value)
	{
		___m_PlayerEditorConnectionEvents_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerEditorConnectionEvents_3, value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_connectedPlayers_4)); }
	inline List_1_t128053199 * get_m_connectedPlayers_4() const { return ___m_connectedPlayers_4; }
	inline List_1_t128053199 ** get_address_of_m_connectedPlayers_4() { return &___m_connectedPlayers_4; }
	inline void set_m_connectedPlayers_4(List_1_t128053199 * value)
	{
		___m_connectedPlayers_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectedPlayers_4, value);
	}

	inline static int32_t get_offset_of_m_IsInitilized_5() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049, ___m_IsInitilized_5)); }
	inline bool get_m_IsInitilized_5() const { return ___m_IsInitilized_5; }
	inline bool* get_address_of_m_IsInitilized_5() { return &___m_IsInitilized_5; }
	inline void set_m_IsInitilized_5(bool value)
	{
		___m_IsInitilized_5 = value;
	}
};

struct PlayerConnection_t3081694049_StaticFields
{
public:
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	Il2CppObject * ___connectionNative_2;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3081694049 * ___s_Instance_6;

public:
	inline static int32_t get_offset_of_connectionNative_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___connectionNative_2)); }
	inline Il2CppObject * get_connectionNative_2() const { return ___connectionNative_2; }
	inline Il2CppObject ** get_address_of_connectionNative_2() { return &___connectionNative_2; }
	inline void set_connectionNative_2(Il2CppObject * value)
	{
		___connectionNative_2 = value;
		Il2CppCodeGenWriteBarrier(&___connectionNative_2, value);
	}

	inline static int32_t get_offset_of_s_Instance_6() { return static_cast<int32_t>(offsetof(PlayerConnection_t3081694049_StaticFields, ___s_Instance_6)); }
	inline PlayerConnection_t3081694049 * get_s_Instance_6() const { return ___s_Instance_6; }
	inline PlayerConnection_t3081694049 ** get_address_of_s_Instance_6() { return &___s_Instance_6; }
	inline void set_s_Instance_6(PlayerConnection_t3081694049 * value)
	{
		___s_Instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
