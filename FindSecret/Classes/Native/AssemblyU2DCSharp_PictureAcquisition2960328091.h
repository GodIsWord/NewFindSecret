#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PictureAcquisition
struct  PictureAcquisition_t2960328091  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 PictureAcquisition::Mouse_p
	Vector3_t3722313464  ___Mouse_p_2;
	// UnityEngine.GameObject[] PictureAcquisition::pictures
	GameObjectU5BU5D_t3328599146* ___pictures_3;
	// UnityEngine.Texture[] PictureAcquisition::t_pictures
	TextureU5BU5D_t908295702* ___t_pictures_4;
	// System.Int32 PictureAcquisition::number
	int32_t ___number_5;

public:
	inline static int32_t get_offset_of_Mouse_p_2() { return static_cast<int32_t>(offsetof(PictureAcquisition_t2960328091, ___Mouse_p_2)); }
	inline Vector3_t3722313464  get_Mouse_p_2() const { return ___Mouse_p_2; }
	inline Vector3_t3722313464 * get_address_of_Mouse_p_2() { return &___Mouse_p_2; }
	inline void set_Mouse_p_2(Vector3_t3722313464  value)
	{
		___Mouse_p_2 = value;
	}

	inline static int32_t get_offset_of_pictures_3() { return static_cast<int32_t>(offsetof(PictureAcquisition_t2960328091, ___pictures_3)); }
	inline GameObjectU5BU5D_t3328599146* get_pictures_3() const { return ___pictures_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_pictures_3() { return &___pictures_3; }
	inline void set_pictures_3(GameObjectU5BU5D_t3328599146* value)
	{
		___pictures_3 = value;
		Il2CppCodeGenWriteBarrier(&___pictures_3, value);
	}

	inline static int32_t get_offset_of_t_pictures_4() { return static_cast<int32_t>(offsetof(PictureAcquisition_t2960328091, ___t_pictures_4)); }
	inline TextureU5BU5D_t908295702* get_t_pictures_4() const { return ___t_pictures_4; }
	inline TextureU5BU5D_t908295702** get_address_of_t_pictures_4() { return &___t_pictures_4; }
	inline void set_t_pictures_4(TextureU5BU5D_t908295702* value)
	{
		___t_pictures_4 = value;
		Il2CppCodeGenWriteBarrier(&___t_pictures_4, value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(PictureAcquisition_t2960328091, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
