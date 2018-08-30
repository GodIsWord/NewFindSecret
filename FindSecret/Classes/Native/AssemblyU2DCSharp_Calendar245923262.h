#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;
// UnityEngine.Material
struct Material_t340375123;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Calendar
struct  Calendar_t245923262  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture[] Calendar::textu
	TextureU5BU5D_t908295702* ___textu_2;
	// UnityEngine.Material Calendar::mat
	Material_t340375123 * ___mat_3;

public:
	inline static int32_t get_offset_of_textu_2() { return static_cast<int32_t>(offsetof(Calendar_t245923262, ___textu_2)); }
	inline TextureU5BU5D_t908295702* get_textu_2() const { return ___textu_2; }
	inline TextureU5BU5D_t908295702** get_address_of_textu_2() { return &___textu_2; }
	inline void set_textu_2(TextureU5BU5D_t908295702* value)
	{
		___textu_2 = value;
		Il2CppCodeGenWriteBarrier(&___textu_2, value);
	}

	inline static int32_t get_offset_of_mat_3() { return static_cast<int32_t>(offsetof(Calendar_t245923262, ___mat_3)); }
	inline Material_t340375123 * get_mat_3() const { return ___mat_3; }
	inline Material_t340375123 ** get_address_of_mat_3() { return &___mat_3; }
	inline void set_mat_3(Material_t340375123 * value)
	{
		___mat_3 = value;
		Il2CppCodeGenWriteBarrier(&___mat_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
