#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
struct Vector3_t3722313464 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AI.NavMeshTriangulation
struct  NavMeshTriangulation_t72801518 
{
public:
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshTriangulation::vertices
	Vector3U5BU5D_t1718750761* ___vertices_0;
	// System.Int32[] UnityEngine.AI.NavMeshTriangulation::indices
	Int32U5BU5D_t385246372* ___indices_1;
	// System.Int32[] UnityEngine.AI.NavMeshTriangulation::areas
	Int32U5BU5D_t385246372* ___areas_2;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(NavMeshTriangulation_t72801518, ___vertices_0)); }
	inline Vector3U5BU5D_t1718750761* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t1718750761* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_indices_1() { return static_cast<int32_t>(offsetof(NavMeshTriangulation_t72801518, ___indices_1)); }
	inline Int32U5BU5D_t385246372* get_indices_1() const { return ___indices_1; }
	inline Int32U5BU5D_t385246372** get_address_of_indices_1() { return &___indices_1; }
	inline void set_indices_1(Int32U5BU5D_t385246372* value)
	{
		___indices_1 = value;
		Il2CppCodeGenWriteBarrier(&___indices_1, value);
	}

	inline static int32_t get_offset_of_areas_2() { return static_cast<int32_t>(offsetof(NavMeshTriangulation_t72801518, ___areas_2)); }
	inline Int32U5BU5D_t385246372* get_areas_2() const { return ___areas_2; }
	inline Int32U5BU5D_t385246372** get_address_of_areas_2() { return &___areas_2; }
	inline void set_areas_2(Int32U5BU5D_t385246372* value)
	{
		___areas_2 = value;
		Il2CppCodeGenWriteBarrier(&___areas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshTriangulation
struct NavMeshTriangulation_t72801518_marshaled_pinvoke
{
	Vector3_t3722313464 * ___vertices_0;
	int32_t* ___indices_1;
	int32_t* ___areas_2;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshTriangulation
struct NavMeshTriangulation_t72801518_marshaled_com
{
	Vector3_t3722313464 * ___vertices_0;
	int32_t* ___indices_1;
	int32_t* ___areas_2;
};
