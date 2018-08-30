#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_LOD4109493171.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Cul2212228863.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Cull591122161.h"
#include "UnityEngine_UnityEngine_Matrix4x41817901843.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_Experimental_Rendering_Refl658301893.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.CullingParameters
struct  CullingParameters_t3871114805 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::isOrthographic
	int32_t ___isOrthographic_0;
	// UnityEngine.Experimental.Rendering.LODParameters UnityEngine.Experimental.Rendering.CullingParameters::lodParameters
	LODParameters_t4109493171  ___lodParameters_1;
	// UnityEngine.Experimental.Rendering.CullingParameters/<_cullingPlanes>__FixedBuffer0 UnityEngine.Experimental.Rendering.CullingParameters::_cullingPlanes
	U3C_cullingPlanesU3E__FixedBuffer0_t2212228863  ____cullingPlanes_2;
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::cullingPlaneCount
	int32_t ___cullingPlaneCount_3;
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::cullingMask
	int32_t ___cullingMask_4;
	// UnityEngine.Experimental.Rendering.CullingParameters/<_layerFarCullDistances>__FixedBuffer1 UnityEngine.Experimental.Rendering.CullingParameters::_layerFarCullDistances
	U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161  ____layerFarCullDistances_5;
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::layerCull
	int32_t ___layerCull_6;
	// UnityEngine.Matrix4x4 UnityEngine.Experimental.Rendering.CullingParameters::cullingMatrix
	Matrix4x4_t1817901843  ___cullingMatrix_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.CullingParameters::position
	Vector3_t3722313464  ___position_8;
	// System.Single UnityEngine.Experimental.Rendering.CullingParameters::shadowDistance
	float ___shadowDistance_9;
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::_cullingFlags
	int32_t ____cullingFlags_10;
	// System.Int32 UnityEngine.Experimental.Rendering.CullingParameters::_cameraInstanceID
	int32_t ____cameraInstanceID_11;
	// UnityEngine.Experimental.Rendering.ReflectionProbeSortOptions UnityEngine.Experimental.Rendering.CullingParameters::reflectionProbeSortOptions
	int32_t ___reflectionProbeSortOptions_12;

public:
	inline static int32_t get_offset_of_isOrthographic_0() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___isOrthographic_0)); }
	inline int32_t get_isOrthographic_0() const { return ___isOrthographic_0; }
	inline int32_t* get_address_of_isOrthographic_0() { return &___isOrthographic_0; }
	inline void set_isOrthographic_0(int32_t value)
	{
		___isOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_lodParameters_1() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___lodParameters_1)); }
	inline LODParameters_t4109493171  get_lodParameters_1() const { return ___lodParameters_1; }
	inline LODParameters_t4109493171 * get_address_of_lodParameters_1() { return &___lodParameters_1; }
	inline void set_lodParameters_1(LODParameters_t4109493171  value)
	{
		___lodParameters_1 = value;
	}

	inline static int32_t get_offset_of__cullingPlanes_2() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ____cullingPlanes_2)); }
	inline U3C_cullingPlanesU3E__FixedBuffer0_t2212228863  get__cullingPlanes_2() const { return ____cullingPlanes_2; }
	inline U3C_cullingPlanesU3E__FixedBuffer0_t2212228863 * get_address_of__cullingPlanes_2() { return &____cullingPlanes_2; }
	inline void set__cullingPlanes_2(U3C_cullingPlanesU3E__FixedBuffer0_t2212228863  value)
	{
		____cullingPlanes_2 = value;
	}

	inline static int32_t get_offset_of_cullingPlaneCount_3() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___cullingPlaneCount_3)); }
	inline int32_t get_cullingPlaneCount_3() const { return ___cullingPlaneCount_3; }
	inline int32_t* get_address_of_cullingPlaneCount_3() { return &___cullingPlaneCount_3; }
	inline void set_cullingPlaneCount_3(int32_t value)
	{
		___cullingPlaneCount_3 = value;
	}

	inline static int32_t get_offset_of_cullingMask_4() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___cullingMask_4)); }
	inline int32_t get_cullingMask_4() const { return ___cullingMask_4; }
	inline int32_t* get_address_of_cullingMask_4() { return &___cullingMask_4; }
	inline void set_cullingMask_4(int32_t value)
	{
		___cullingMask_4 = value;
	}

	inline static int32_t get_offset_of__layerFarCullDistances_5() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ____layerFarCullDistances_5)); }
	inline U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161  get__layerFarCullDistances_5() const { return ____layerFarCullDistances_5; }
	inline U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161 * get_address_of__layerFarCullDistances_5() { return &____layerFarCullDistances_5; }
	inline void set__layerFarCullDistances_5(U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161  value)
	{
		____layerFarCullDistances_5 = value;
	}

	inline static int32_t get_offset_of_layerCull_6() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___layerCull_6)); }
	inline int32_t get_layerCull_6() const { return ___layerCull_6; }
	inline int32_t* get_address_of_layerCull_6() { return &___layerCull_6; }
	inline void set_layerCull_6(int32_t value)
	{
		___layerCull_6 = value;
	}

	inline static int32_t get_offset_of_cullingMatrix_7() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___cullingMatrix_7)); }
	inline Matrix4x4_t1817901843  get_cullingMatrix_7() const { return ___cullingMatrix_7; }
	inline Matrix4x4_t1817901843 * get_address_of_cullingMatrix_7() { return &___cullingMatrix_7; }
	inline void set_cullingMatrix_7(Matrix4x4_t1817901843  value)
	{
		___cullingMatrix_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___position_8)); }
	inline Vector3_t3722313464  get_position_8() const { return ___position_8; }
	inline Vector3_t3722313464 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector3_t3722313464  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_shadowDistance_9() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___shadowDistance_9)); }
	inline float get_shadowDistance_9() const { return ___shadowDistance_9; }
	inline float* get_address_of_shadowDistance_9() { return &___shadowDistance_9; }
	inline void set_shadowDistance_9(float value)
	{
		___shadowDistance_9 = value;
	}

	inline static int32_t get_offset_of__cullingFlags_10() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ____cullingFlags_10)); }
	inline int32_t get__cullingFlags_10() const { return ____cullingFlags_10; }
	inline int32_t* get_address_of__cullingFlags_10() { return &____cullingFlags_10; }
	inline void set__cullingFlags_10(int32_t value)
	{
		____cullingFlags_10 = value;
	}

	inline static int32_t get_offset_of__cameraInstanceID_11() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ____cameraInstanceID_11)); }
	inline int32_t get__cameraInstanceID_11() const { return ____cameraInstanceID_11; }
	inline int32_t* get_address_of__cameraInstanceID_11() { return &____cameraInstanceID_11; }
	inline void set__cameraInstanceID_11(int32_t value)
	{
		____cameraInstanceID_11 = value;
	}

	inline static int32_t get_offset_of_reflectionProbeSortOptions_12() { return static_cast<int32_t>(offsetof(CullingParameters_t3871114805, ___reflectionProbeSortOptions_12)); }
	inline int32_t get_reflectionProbeSortOptions_12() const { return ___reflectionProbeSortOptions_12; }
	inline int32_t* get_address_of_reflectionProbeSortOptions_12() { return &___reflectionProbeSortOptions_12; }
	inline void set_reflectionProbeSortOptions_12(int32_t value)
	{
		___reflectionProbeSortOptions_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.CullingParameters
struct CullingParameters_t3871114805_marshaled_pinvoke
{
	int32_t ___isOrthographic_0;
	LODParameters_t4109493171_marshaled_pinvoke ___lodParameters_1;
	U3C_cullingPlanesU3E__FixedBuffer0_t2212228863  ____cullingPlanes_2;
	int32_t ___cullingPlaneCount_3;
	int32_t ___cullingMask_4;
	U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161  ____layerFarCullDistances_5;
	int32_t ___layerCull_6;
	Matrix4x4_t1817901843  ___cullingMatrix_7;
	Vector3_t3722313464  ___position_8;
	float ___shadowDistance_9;
	int32_t ____cullingFlags_10;
	int32_t ____cameraInstanceID_11;
	int32_t ___reflectionProbeSortOptions_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.CullingParameters
struct CullingParameters_t3871114805_marshaled_com
{
	int32_t ___isOrthographic_0;
	LODParameters_t4109493171_marshaled_com ___lodParameters_1;
	U3C_cullingPlanesU3E__FixedBuffer0_t2212228863  ____cullingPlanes_2;
	int32_t ___cullingPlaneCount_3;
	int32_t ___cullingMask_4;
	U3C_layerFarCullDistancesU3E__FixedBuffer1_t591122161  ____layerFarCullDistances_5;
	int32_t ___layerCull_6;
	Matrix4x4_t1817901843  ___cullingMatrix_7;
	Vector3_t3722313464  ___position_8;
	float ___shadowDistance_9;
	int32_t ____cullingFlags_10;
	int32_t ____cameraInstanceID_11;
	int32_t ___reflectionProbeSortOptions_12;
};
