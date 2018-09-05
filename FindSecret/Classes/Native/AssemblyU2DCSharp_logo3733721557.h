#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Texture
struct Texture_t3661962703;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// logo
struct  logo_t3733721557  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture logo::_logo
	Texture_t3661962703 * ____logo_2;
	// System.Single logo::Width
	float ___Width_3;
	// System.Single logo::Height
	float ___Height_4;
	// System.Single logo::ScreenWidth
	float ___ScreenWidth_5;

public:
	inline static int32_t get_offset_of__logo_2() { return static_cast<int32_t>(offsetof(logo_t3733721557, ____logo_2)); }
	inline Texture_t3661962703 * get__logo_2() const { return ____logo_2; }
	inline Texture_t3661962703 ** get_address_of__logo_2() { return &____logo_2; }
	inline void set__logo_2(Texture_t3661962703 * value)
	{
		____logo_2 = value;
		Il2CppCodeGenWriteBarrier(&____logo_2, value);
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(logo_t3733721557, ___Width_3)); }
	inline float get_Width_3() const { return ___Width_3; }
	inline float* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(float value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(logo_t3733721557, ___Height_4)); }
	inline float get_Height_4() const { return ___Height_4; }
	inline float* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(float value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_ScreenWidth_5() { return static_cast<int32_t>(offsetof(logo_t3733721557, ___ScreenWidth_5)); }
	inline float get_ScreenWidth_5() const { return ___ScreenWidth_5; }
	inline float* get_address_of_ScreenWidth_5() { return &___ScreenWidth_5; }
	inline void set_ScreenWidth_5(float value)
	{
		___ScreenWidth_5 = value;
	}
};

struct logo_t3733721557_StaticFields
{
public:
	// System.Boolean logo::display
	bool ___display_6;

public:
	inline static int32_t get_offset_of_display_6() { return static_cast<int32_t>(offsetof(logo_t3733721557_StaticFields, ___display_6)); }
	inline bool get_display_6() const { return ___display_6; }
	inline bool* get_address_of_display_6() { return &___display_6; }
	inline void set_display_6(bool value)
	{
		___display_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
