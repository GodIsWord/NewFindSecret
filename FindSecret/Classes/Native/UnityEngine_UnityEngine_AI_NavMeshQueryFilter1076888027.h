#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// System.Single[]
struct SingleU5BU5D_t1444911251;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshQueryFilter
struct  NavMeshQueryFilter_t1076888027 
{
public:
	// System.Int32 UnityEngine.AI.NavMeshQueryFilter::m_AreaMask
	int32_t ___m_AreaMask_1;
	// System.Int32 UnityEngine.AI.NavMeshQueryFilter::m_AgentTypeID
	int32_t ___m_AgentTypeID_2;
	// System.Single[] UnityEngine.AI.NavMeshQueryFilter::m_AreaCost
	SingleU5BU5D_t1444911251* ___m_AreaCost_3;

public:
	inline static int32_t get_offset_of_m_AreaMask_1() { return static_cast<int32_t>(offsetof(NavMeshQueryFilter_t1076888027, ___m_AreaMask_1)); }
	inline int32_t get_m_AreaMask_1() const { return ___m_AreaMask_1; }
	inline int32_t* get_address_of_m_AreaMask_1() { return &___m_AreaMask_1; }
	inline void set_m_AreaMask_1(int32_t value)
	{
		___m_AreaMask_1 = value;
	}

	inline static int32_t get_offset_of_m_AgentTypeID_2() { return static_cast<int32_t>(offsetof(NavMeshQueryFilter_t1076888027, ___m_AgentTypeID_2)); }
	inline int32_t get_m_AgentTypeID_2() const { return ___m_AgentTypeID_2; }
	inline int32_t* get_address_of_m_AgentTypeID_2() { return &___m_AgentTypeID_2; }
	inline void set_m_AgentTypeID_2(int32_t value)
	{
		___m_AgentTypeID_2 = value;
	}

	inline static int32_t get_offset_of_m_AreaCost_3() { return static_cast<int32_t>(offsetof(NavMeshQueryFilter_t1076888027, ___m_AreaCost_3)); }
	inline SingleU5BU5D_t1444911251* get_m_AreaCost_3() const { return ___m_AreaCost_3; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_AreaCost_3() { return &___m_AreaCost_3; }
	inline void set_m_AreaCost_3(SingleU5BU5D_t1444911251* value)
	{
		___m_AreaCost_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AreaCost_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshQueryFilter
struct NavMeshQueryFilter_t1076888027_marshaled_pinvoke
{
	int32_t ___m_AreaMask_1;
	int32_t ___m_AgentTypeID_2;
	float* ___m_AreaCost_3;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshQueryFilter
struct NavMeshQueryFilter_t1076888027_marshaled_com
{
	int32_t ___m_AreaMask_1;
	int32_t ___m_AgentTypeID_2;
	float* ___m_AreaCost_3;
};
