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
#include "UnityEngine_UnityEngine_Vector43319028937.h"

// UnityEngine.Texture2D
struct Texture2D_t3840446185;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SplatPrototype
struct  SplatPrototype_t495568237  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D UnityEngine.SplatPrototype::m_Texture
	Texture2D_t3840446185 * ___m_Texture_0;
	// UnityEngine.Texture2D UnityEngine.SplatPrototype::m_NormalMap
	Texture2D_t3840446185 * ___m_NormalMap_1;
	// UnityEngine.Vector2 UnityEngine.SplatPrototype::m_TileSize
	Vector2_t2156229523  ___m_TileSize_2;
	// UnityEngine.Vector2 UnityEngine.SplatPrototype::m_TileOffset
	Vector2_t2156229523  ___m_TileOffset_3;
	// UnityEngine.Vector4 UnityEngine.SplatPrototype::m_SpecularMetallic
	Vector4_t3319028937  ___m_SpecularMetallic_4;
	// System.Single UnityEngine.SplatPrototype::m_Smoothness
	float ___m_Smoothness_5;

public:
	inline static int32_t get_offset_of_m_Texture_0() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_Texture_0)); }
	inline Texture2D_t3840446185 * get_m_Texture_0() const { return ___m_Texture_0; }
	inline Texture2D_t3840446185 ** get_address_of_m_Texture_0() { return &___m_Texture_0; }
	inline void set_m_Texture_0(Texture2D_t3840446185 * value)
	{
		___m_Texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_0, value);
	}

	inline static int32_t get_offset_of_m_NormalMap_1() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_NormalMap_1)); }
	inline Texture2D_t3840446185 * get_m_NormalMap_1() const { return ___m_NormalMap_1; }
	inline Texture2D_t3840446185 ** get_address_of_m_NormalMap_1() { return &___m_NormalMap_1; }
	inline void set_m_NormalMap_1(Texture2D_t3840446185 * value)
	{
		___m_NormalMap_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_NormalMap_1, value);
	}

	inline static int32_t get_offset_of_m_TileSize_2() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_TileSize_2)); }
	inline Vector2_t2156229523  get_m_TileSize_2() const { return ___m_TileSize_2; }
	inline Vector2_t2156229523 * get_address_of_m_TileSize_2() { return &___m_TileSize_2; }
	inline void set_m_TileSize_2(Vector2_t2156229523  value)
	{
		___m_TileSize_2 = value;
	}

	inline static int32_t get_offset_of_m_TileOffset_3() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_TileOffset_3)); }
	inline Vector2_t2156229523  get_m_TileOffset_3() const { return ___m_TileOffset_3; }
	inline Vector2_t2156229523 * get_address_of_m_TileOffset_3() { return &___m_TileOffset_3; }
	inline void set_m_TileOffset_3(Vector2_t2156229523  value)
	{
		___m_TileOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_SpecularMetallic_4() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_SpecularMetallic_4)); }
	inline Vector4_t3319028937  get_m_SpecularMetallic_4() const { return ___m_SpecularMetallic_4; }
	inline Vector4_t3319028937 * get_address_of_m_SpecularMetallic_4() { return &___m_SpecularMetallic_4; }
	inline void set_m_SpecularMetallic_4(Vector4_t3319028937  value)
	{
		___m_SpecularMetallic_4 = value;
	}

	inline static int32_t get_offset_of_m_Smoothness_5() { return static_cast<int32_t>(offsetof(SplatPrototype_t495568237, ___m_Smoothness_5)); }
	inline float get_m_Smoothness_5() const { return ___m_Smoothness_5; }
	inline float* get_address_of_m_Smoothness_5() { return &___m_Smoothness_5; }
	inline void set_m_Smoothness_5(float value)
	{
		___m_Smoothness_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SplatPrototype
struct SplatPrototype_t495568237_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___m_Texture_0;
	Texture2D_t3840446185 * ___m_NormalMap_1;
	Vector2_t2156229523  ___m_TileSize_2;
	Vector2_t2156229523  ___m_TileOffset_3;
	Vector4_t3319028937  ___m_SpecularMetallic_4;
	float ___m_Smoothness_5;
};
// Native definition for COM marshalling of UnityEngine.SplatPrototype
struct SplatPrototype_t495568237_marshaled_com
{
	Texture2D_t3840446185 * ___m_Texture_0;
	Texture2D_t3840446185 * ___m_NormalMap_1;
	Vector2_t2156229523  ___m_TileSize_2;
	Vector2_t2156229523  ___m_TileOffset_3;
	Vector4_t3319028937  ___m_SpecularMetallic_4;
	float ___m_Smoothness_5;
};
