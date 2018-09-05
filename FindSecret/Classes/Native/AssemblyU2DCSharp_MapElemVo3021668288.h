#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapElemVo
struct  MapElemVo_t3021668288  : public Il2CppObject
{
public:
	// System.String MapElemVo::id
	String_t* ___id_0;
	// System.Int32 MapElemVo::index
	int32_t ___index_1;
	// System.String MapElemVo::name
	String_t* ___name_2;
	// System.String MapElemVo::code
	String_t* ___code_3;
	// System.String MapElemVo::desc
	String_t* ___desc_4;
	// System.String MapElemVo::address
	String_t* ___address_5;
	// System.String MapElemVo::phone
	String_t* ___phone_6;
	// System.Int32 MapElemVo::distance
	int32_t ___distance_7;
	// System.Double MapElemVo::latitude
	double ___latitude_8;
	// System.Double MapElemVo::longitude
	double ___longitude_9;
	// System.Single MapElemVo::rate
	float ___rate_10;
	// System.String MapElemVo::image
	String_t* ___image_11;
	// System.Boolean MapElemVo::arEnabled
	bool ___arEnabled_12;
	// System.Double MapElemVo::dirAngle
	double ___dirAngle_13;
	// UnityEngine.Vector2 MapElemVo::anglePos
	Vector2_t2156229523  ___anglePos_14;
	// UnityEngine.Vector2 MapElemVo::radarPos
	Vector2_t2156229523  ___radarPos_15;
	// UnityEngine.Transform MapElemVo::trans
	Transform_t3600365921 * ___trans_16;
	// System.Double MapElemVo::selfAngle
	double ___selfAngle_17;
	// UnityEngine.Vector2 MapElemVo::uiPos
	Vector2_t2156229523  ___uiPos_18;
	// System.Boolean MapElemVo::visible
	bool ___visible_19;
	// System.Single MapElemVo::selfLatitude
	float ___selfLatitude_20;
	// System.Single MapElemVo::selfLongitude
	float ___selfLongitude_21;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_code_3() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___code_3)); }
	inline String_t* get_code_3() const { return ___code_3; }
	inline String_t** get_address_of_code_3() { return &___code_3; }
	inline void set_code_3(String_t* value)
	{
		___code_3 = value;
		Il2CppCodeGenWriteBarrier(&___code_3, value);
	}

	inline static int32_t get_offset_of_desc_4() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___desc_4)); }
	inline String_t* get_desc_4() const { return ___desc_4; }
	inline String_t** get_address_of_desc_4() { return &___desc_4; }
	inline void set_desc_4(String_t* value)
	{
		___desc_4 = value;
		Il2CppCodeGenWriteBarrier(&___desc_4, value);
	}

	inline static int32_t get_offset_of_address_5() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___address_5)); }
	inline String_t* get_address_5() const { return ___address_5; }
	inline String_t** get_address_of_address_5() { return &___address_5; }
	inline void set_address_5(String_t* value)
	{
		___address_5 = value;
		Il2CppCodeGenWriteBarrier(&___address_5, value);
	}

	inline static int32_t get_offset_of_phone_6() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___phone_6)); }
	inline String_t* get_phone_6() const { return ___phone_6; }
	inline String_t** get_address_of_phone_6() { return &___phone_6; }
	inline void set_phone_6(String_t* value)
	{
		___phone_6 = value;
		Il2CppCodeGenWriteBarrier(&___phone_6, value);
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___distance_7)); }
	inline int32_t get_distance_7() const { return ___distance_7; }
	inline int32_t* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(int32_t value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_latitude_8() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___latitude_8)); }
	inline double get_latitude_8() const { return ___latitude_8; }
	inline double* get_address_of_latitude_8() { return &___latitude_8; }
	inline void set_latitude_8(double value)
	{
		___latitude_8 = value;
	}

	inline static int32_t get_offset_of_longitude_9() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___longitude_9)); }
	inline double get_longitude_9() const { return ___longitude_9; }
	inline double* get_address_of_longitude_9() { return &___longitude_9; }
	inline void set_longitude_9(double value)
	{
		___longitude_9 = value;
	}

	inline static int32_t get_offset_of_rate_10() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___rate_10)); }
	inline float get_rate_10() const { return ___rate_10; }
	inline float* get_address_of_rate_10() { return &___rate_10; }
	inline void set_rate_10(float value)
	{
		___rate_10 = value;
	}

	inline static int32_t get_offset_of_image_11() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___image_11)); }
	inline String_t* get_image_11() const { return ___image_11; }
	inline String_t** get_address_of_image_11() { return &___image_11; }
	inline void set_image_11(String_t* value)
	{
		___image_11 = value;
		Il2CppCodeGenWriteBarrier(&___image_11, value);
	}

	inline static int32_t get_offset_of_arEnabled_12() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___arEnabled_12)); }
	inline bool get_arEnabled_12() const { return ___arEnabled_12; }
	inline bool* get_address_of_arEnabled_12() { return &___arEnabled_12; }
	inline void set_arEnabled_12(bool value)
	{
		___arEnabled_12 = value;
	}

	inline static int32_t get_offset_of_dirAngle_13() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___dirAngle_13)); }
	inline double get_dirAngle_13() const { return ___dirAngle_13; }
	inline double* get_address_of_dirAngle_13() { return &___dirAngle_13; }
	inline void set_dirAngle_13(double value)
	{
		___dirAngle_13 = value;
	}

	inline static int32_t get_offset_of_anglePos_14() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___anglePos_14)); }
	inline Vector2_t2156229523  get_anglePos_14() const { return ___anglePos_14; }
	inline Vector2_t2156229523 * get_address_of_anglePos_14() { return &___anglePos_14; }
	inline void set_anglePos_14(Vector2_t2156229523  value)
	{
		___anglePos_14 = value;
	}

	inline static int32_t get_offset_of_radarPos_15() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___radarPos_15)); }
	inline Vector2_t2156229523  get_radarPos_15() const { return ___radarPos_15; }
	inline Vector2_t2156229523 * get_address_of_radarPos_15() { return &___radarPos_15; }
	inline void set_radarPos_15(Vector2_t2156229523  value)
	{
		___radarPos_15 = value;
	}

	inline static int32_t get_offset_of_trans_16() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___trans_16)); }
	inline Transform_t3600365921 * get_trans_16() const { return ___trans_16; }
	inline Transform_t3600365921 ** get_address_of_trans_16() { return &___trans_16; }
	inline void set_trans_16(Transform_t3600365921 * value)
	{
		___trans_16 = value;
		Il2CppCodeGenWriteBarrier(&___trans_16, value);
	}

	inline static int32_t get_offset_of_selfAngle_17() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___selfAngle_17)); }
	inline double get_selfAngle_17() const { return ___selfAngle_17; }
	inline double* get_address_of_selfAngle_17() { return &___selfAngle_17; }
	inline void set_selfAngle_17(double value)
	{
		___selfAngle_17 = value;
	}

	inline static int32_t get_offset_of_uiPos_18() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___uiPos_18)); }
	inline Vector2_t2156229523  get_uiPos_18() const { return ___uiPos_18; }
	inline Vector2_t2156229523 * get_address_of_uiPos_18() { return &___uiPos_18; }
	inline void set_uiPos_18(Vector2_t2156229523  value)
	{
		___uiPos_18 = value;
	}

	inline static int32_t get_offset_of_visible_19() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___visible_19)); }
	inline bool get_visible_19() const { return ___visible_19; }
	inline bool* get_address_of_visible_19() { return &___visible_19; }
	inline void set_visible_19(bool value)
	{
		___visible_19 = value;
	}

	inline static int32_t get_offset_of_selfLatitude_20() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___selfLatitude_20)); }
	inline float get_selfLatitude_20() const { return ___selfLatitude_20; }
	inline float* get_address_of_selfLatitude_20() { return &___selfLatitude_20; }
	inline void set_selfLatitude_20(float value)
	{
		___selfLatitude_20 = value;
	}

	inline static int32_t get_offset_of_selfLongitude_21() { return static_cast<int32_t>(offsetof(MapElemVo_t3021668288, ___selfLongitude_21)); }
	inline float get_selfLongitude_21() const { return ___selfLongitude_21; }
	inline float* get_address_of_selfLongitude_21() { return &___selfLongitude_21; }
	inline void set_selfLongitude_21(float value)
	{
		___selfLongitude_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
