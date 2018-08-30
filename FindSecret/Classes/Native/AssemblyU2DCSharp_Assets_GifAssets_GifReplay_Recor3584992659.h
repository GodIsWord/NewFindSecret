#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "SimpleGif_SimpleGif_Enums_MasterPalette862144925.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// Assets.GifAssets.PowerGif.AnimatedImage
struct AnimatedImage_t455440388;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t1017553631;
// System.Byte[]
struct ByteU5BU5D_t4116647657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.GifReplay.Recorder
struct  Recorder_t3584992659  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera Assets.GifAssets.GifReplay.Recorder::Camera
	Camera_t4157153871 * ___Camera_2;
	// UnityEngine.Canvas Assets.GifAssets.GifReplay.Recorder::Canvas
	Canvas_t3310196443 * ___Canvas_3;
	// System.Int32 Assets.GifAssets.GifReplay.Recorder::Width
	int32_t ___Width_4;
	// System.Int32 Assets.GifAssets.GifReplay.Recorder::Height
	int32_t ___Height_5;
	// System.Int32 Assets.GifAssets.GifReplay.Recorder::FramesPerSecond
	int32_t ___FramesPerSecond_6;
	// System.Single Assets.GifAssets.GifReplay.Recorder::MaxDuration
	float ___MaxDuration_7;
	// System.Boolean Assets.GifAssets.GifReplay.Recorder::CaptureUI
	bool ___CaptureUI_8;
	// SimpleGif.Enums.MasterPalette Assets.GifAssets.GifReplay.Recorder::MasterPalette
	int32_t ___MasterPalette_9;
	// UnityEngine.UI.Text Assets.GifAssets.GifReplay.Recorder::Status
	Text_t1901882714 * ___Status_10;
	// UnityEngine.UI.Image Assets.GifAssets.GifReplay.Recorder::Progress
	Image_t2670269651 * ___Progress_11;
	// Assets.GifAssets.PowerGif.AnimatedImage Assets.GifAssets.GifReplay.Recorder::AnimatedImage
	AnimatedImage_t455440388 * ___AnimatedImage_12;
	// System.Single Assets.GifAssets.GifReplay.Recorder::_duration
	float ____duration_13;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Assets.GifAssets.GifReplay.Recorder::_textures
	List_1_t1017553631 * ____textures_14;
	// System.Byte[] Assets.GifAssets.GifReplay.Recorder::<Binary>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CBinaryU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Camera_2)); }
	inline Camera_t4157153871 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t4157153871 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t4157153871 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_Canvas_3() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Canvas_3)); }
	inline Canvas_t3310196443 * get_Canvas_3() const { return ___Canvas_3; }
	inline Canvas_t3310196443 ** get_address_of_Canvas_3() { return &___Canvas_3; }
	inline void set_Canvas_3(Canvas_t3310196443 * value)
	{
		___Canvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___Canvas_3, value);
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Width_4)); }
	inline int32_t get_Width_4() const { return ___Width_4; }
	inline int32_t* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(int32_t value)
	{
		___Width_4 = value;
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Height_5)); }
	inline int32_t get_Height_5() const { return ___Height_5; }
	inline int32_t* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(int32_t value)
	{
		___Height_5 = value;
	}

	inline static int32_t get_offset_of_FramesPerSecond_6() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___FramesPerSecond_6)); }
	inline int32_t get_FramesPerSecond_6() const { return ___FramesPerSecond_6; }
	inline int32_t* get_address_of_FramesPerSecond_6() { return &___FramesPerSecond_6; }
	inline void set_FramesPerSecond_6(int32_t value)
	{
		___FramesPerSecond_6 = value;
	}

	inline static int32_t get_offset_of_MaxDuration_7() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___MaxDuration_7)); }
	inline float get_MaxDuration_7() const { return ___MaxDuration_7; }
	inline float* get_address_of_MaxDuration_7() { return &___MaxDuration_7; }
	inline void set_MaxDuration_7(float value)
	{
		___MaxDuration_7 = value;
	}

	inline static int32_t get_offset_of_CaptureUI_8() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___CaptureUI_8)); }
	inline bool get_CaptureUI_8() const { return ___CaptureUI_8; }
	inline bool* get_address_of_CaptureUI_8() { return &___CaptureUI_8; }
	inline void set_CaptureUI_8(bool value)
	{
		___CaptureUI_8 = value;
	}

	inline static int32_t get_offset_of_MasterPalette_9() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___MasterPalette_9)); }
	inline int32_t get_MasterPalette_9() const { return ___MasterPalette_9; }
	inline int32_t* get_address_of_MasterPalette_9() { return &___MasterPalette_9; }
	inline void set_MasterPalette_9(int32_t value)
	{
		___MasterPalette_9 = value;
	}

	inline static int32_t get_offset_of_Status_10() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Status_10)); }
	inline Text_t1901882714 * get_Status_10() const { return ___Status_10; }
	inline Text_t1901882714 ** get_address_of_Status_10() { return &___Status_10; }
	inline void set_Status_10(Text_t1901882714 * value)
	{
		___Status_10 = value;
		Il2CppCodeGenWriteBarrier(&___Status_10, value);
	}

	inline static int32_t get_offset_of_Progress_11() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___Progress_11)); }
	inline Image_t2670269651 * get_Progress_11() const { return ___Progress_11; }
	inline Image_t2670269651 ** get_address_of_Progress_11() { return &___Progress_11; }
	inline void set_Progress_11(Image_t2670269651 * value)
	{
		___Progress_11 = value;
		Il2CppCodeGenWriteBarrier(&___Progress_11, value);
	}

	inline static int32_t get_offset_of_AnimatedImage_12() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___AnimatedImage_12)); }
	inline AnimatedImage_t455440388 * get_AnimatedImage_12() const { return ___AnimatedImage_12; }
	inline AnimatedImage_t455440388 ** get_address_of_AnimatedImage_12() { return &___AnimatedImage_12; }
	inline void set_AnimatedImage_12(AnimatedImage_t455440388 * value)
	{
		___AnimatedImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___AnimatedImage_12, value);
	}

	inline static int32_t get_offset_of__duration_13() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ____duration_13)); }
	inline float get__duration_13() const { return ____duration_13; }
	inline float* get_address_of__duration_13() { return &____duration_13; }
	inline void set__duration_13(float value)
	{
		____duration_13 = value;
	}

	inline static int32_t get_offset_of__textures_14() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ____textures_14)); }
	inline List_1_t1017553631 * get__textures_14() const { return ____textures_14; }
	inline List_1_t1017553631 ** get_address_of__textures_14() { return &____textures_14; }
	inline void set__textures_14(List_1_t1017553631 * value)
	{
		____textures_14 = value;
		Il2CppCodeGenWriteBarrier(&____textures_14, value);
	}

	inline static int32_t get_offset_of_U3CBinaryU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Recorder_t3584992659, ___U3CBinaryU3Ek__BackingField_15)); }
	inline ByteU5BU5D_t4116647657* get_U3CBinaryU3Ek__BackingField_15() const { return ___U3CBinaryU3Ek__BackingField_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CBinaryU3Ek__BackingField_15() { return &___U3CBinaryU3Ek__BackingField_15; }
	inline void set_U3CBinaryU3Ek__BackingField_15(ByteU5BU5D_t4116647657* value)
	{
		___U3CBinaryU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBinaryU3Ek__BackingField_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
