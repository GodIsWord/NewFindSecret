﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Networking_Match_Request2696089890.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID4216585621.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2347816311.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DropConnectionRequest
struct  DropConnectionRequest_t2647317937  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_7;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnetworkIdU3Ek__BackingField_7)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_7() const { return ___U3CnetworkIdU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_7() { return &___U3CnetworkIdU3Ek__BackingField_7; }
	inline void set_U3CnetworkIdU3Ek__BackingField_7(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnodeIdU3Ek__BackingField_8)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_8() const { return ___U3CnodeIdU3Ek__BackingField_8; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_8() { return &___U3CnodeIdU3Ek__BackingField_8; }
	inline void set_U3CnodeIdU3Ek__BackingField_8(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
