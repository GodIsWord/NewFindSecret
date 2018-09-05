#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "DOTween_DG_Tweening_PathType3777299409.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "mscorlib_System_Nullable_1_gen1149908250.h"
#include "UnityEngine_UnityEngine_Color2555686324.h"

// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t2053048079;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t2708327777;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t1567961855;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t2613982196;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.Path
struct  Path_t3614338981  : public Il2CppObject
{
public:
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_2;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_3;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_4;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_t1718750761* ___wps_5;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t1567961855* ___controlPoints_6;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_7;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t1444911251* ___wpLengths_8;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_9;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t1444911251* ___timesTable_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t1444911251* ___lengthsTable_11;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_12;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t2613982196 * ____decoder_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_14;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_t1718750761* ___nonLinearDrawWps_15;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t3722313464  ___targetPosition_16;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t1149908250  ___lookAtPosition_17;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t2555686324  ___gizmoColor_18;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_3() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___subdivisionsXSegment_3)); }
	inline int32_t get_subdivisionsXSegment_3() const { return ___subdivisionsXSegment_3; }
	inline int32_t* get_address_of_subdivisionsXSegment_3() { return &___subdivisionsXSegment_3; }
	inline void set_subdivisionsXSegment_3(int32_t value)
	{
		___subdivisionsXSegment_3 = value;
	}

	inline static int32_t get_offset_of_subdivisions_4() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___subdivisions_4)); }
	inline int32_t get_subdivisions_4() const { return ___subdivisions_4; }
	inline int32_t* get_address_of_subdivisions_4() { return &___subdivisions_4; }
	inline void set_subdivisions_4(int32_t value)
	{
		___subdivisions_4 = value;
	}

	inline static int32_t get_offset_of_wps_5() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___wps_5)); }
	inline Vector3U5BU5D_t1718750761* get_wps_5() const { return ___wps_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_wps_5() { return &___wps_5; }
	inline void set_wps_5(Vector3U5BU5D_t1718750761* value)
	{
		___wps_5 = value;
		Il2CppCodeGenWriteBarrier(&___wps_5, value);
	}

	inline static int32_t get_offset_of_controlPoints_6() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___controlPoints_6)); }
	inline ControlPointU5BU5D_t1567961855* get_controlPoints_6() const { return ___controlPoints_6; }
	inline ControlPointU5BU5D_t1567961855** get_address_of_controlPoints_6() { return &___controlPoints_6; }
	inline void set_controlPoints_6(ControlPointU5BU5D_t1567961855* value)
	{
		___controlPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___controlPoints_6, value);
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_wpLengths_8() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___wpLengths_8)); }
	inline SingleU5BU5D_t1444911251* get_wpLengths_8() const { return ___wpLengths_8; }
	inline SingleU5BU5D_t1444911251** get_address_of_wpLengths_8() { return &___wpLengths_8; }
	inline void set_wpLengths_8(SingleU5BU5D_t1444911251* value)
	{
		___wpLengths_8 = value;
		Il2CppCodeGenWriteBarrier(&___wpLengths_8, value);
	}

	inline static int32_t get_offset_of_isFinalized_9() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___isFinalized_9)); }
	inline bool get_isFinalized_9() const { return ___isFinalized_9; }
	inline bool* get_address_of_isFinalized_9() { return &___isFinalized_9; }
	inline void set_isFinalized_9(bool value)
	{
		___isFinalized_9 = value;
	}

	inline static int32_t get_offset_of_timesTable_10() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___timesTable_10)); }
	inline SingleU5BU5D_t1444911251* get_timesTable_10() const { return ___timesTable_10; }
	inline SingleU5BU5D_t1444911251** get_address_of_timesTable_10() { return &___timesTable_10; }
	inline void set_timesTable_10(SingleU5BU5D_t1444911251* value)
	{
		___timesTable_10 = value;
		Il2CppCodeGenWriteBarrier(&___timesTable_10, value);
	}

	inline static int32_t get_offset_of_lengthsTable_11() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___lengthsTable_11)); }
	inline SingleU5BU5D_t1444911251* get_lengthsTable_11() const { return ___lengthsTable_11; }
	inline SingleU5BU5D_t1444911251** get_address_of_lengthsTable_11() { return &___lengthsTable_11; }
	inline void set_lengthsTable_11(SingleU5BU5D_t1444911251* value)
	{
		___lengthsTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___lengthsTable_11, value);
	}

	inline static int32_t get_offset_of_linearWPIndex_12() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___linearWPIndex_12)); }
	inline int32_t get_linearWPIndex_12() const { return ___linearWPIndex_12; }
	inline int32_t* get_address_of_linearWPIndex_12() { return &___linearWPIndex_12; }
	inline void set_linearWPIndex_12(int32_t value)
	{
		___linearWPIndex_12 = value;
	}

	inline static int32_t get_offset_of__decoder_13() { return static_cast<int32_t>(offsetof(Path_t3614338981, ____decoder_13)); }
	inline ABSPathDecoder_t2613982196 * get__decoder_13() const { return ____decoder_13; }
	inline ABSPathDecoder_t2613982196 ** get_address_of__decoder_13() { return &____decoder_13; }
	inline void set__decoder_13(ABSPathDecoder_t2613982196 * value)
	{
		____decoder_13 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_13, value);
	}

	inline static int32_t get_offset_of__changed_14() { return static_cast<int32_t>(offsetof(Path_t3614338981, ____changed_14)); }
	inline bool get__changed_14() const { return ____changed_14; }
	inline bool* get_address_of__changed_14() { return &____changed_14; }
	inline void set__changed_14(bool value)
	{
		____changed_14 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_15() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___nonLinearDrawWps_15)); }
	inline Vector3U5BU5D_t1718750761* get_nonLinearDrawWps_15() const { return ___nonLinearDrawWps_15; }
	inline Vector3U5BU5D_t1718750761** get_address_of_nonLinearDrawWps_15() { return &___nonLinearDrawWps_15; }
	inline void set_nonLinearDrawWps_15(Vector3U5BU5D_t1718750761* value)
	{
		___nonLinearDrawWps_15 = value;
		Il2CppCodeGenWriteBarrier(&___nonLinearDrawWps_15, value);
	}

	inline static int32_t get_offset_of_targetPosition_16() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___targetPosition_16)); }
	inline Vector3_t3722313464  get_targetPosition_16() const { return ___targetPosition_16; }
	inline Vector3_t3722313464 * get_address_of_targetPosition_16() { return &___targetPosition_16; }
	inline void set_targetPosition_16(Vector3_t3722313464  value)
	{
		___targetPosition_16 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_17() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___lookAtPosition_17)); }
	inline Nullable_1_t1149908250  get_lookAtPosition_17() const { return ___lookAtPosition_17; }
	inline Nullable_1_t1149908250 * get_address_of_lookAtPosition_17() { return &___lookAtPosition_17; }
	inline void set_lookAtPosition_17(Nullable_1_t1149908250  value)
	{
		___lookAtPosition_17 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_18() { return static_cast<int32_t>(offsetof(Path_t3614338981, ___gizmoColor_18)); }
	inline Color_t2555686324  get_gizmoColor_18() const { return ___gizmoColor_18; }
	inline Color_t2555686324 * get_address_of_gizmoColor_18() { return &___gizmoColor_18; }
	inline void set_gizmoColor_18(Color_t2555686324  value)
	{
		___gizmoColor_18 = value;
	}
};

struct Path_t3614338981_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_t2053048079 * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_t2708327777 * ____linearDecoder_1;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_t3614338981_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_t2053048079 * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_t2053048079 ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_t2053048079 * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier(&____catmullRomDecoder_0, value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_t3614338981_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_t2708327777 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_t2708327777 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_t2708327777 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier(&____linearDecoder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
