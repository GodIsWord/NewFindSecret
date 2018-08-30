#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "UnityEngine_UnityEngine_RenderBuffer586150500.h"
#include "UnityEngine_UnityEngine_CubemapFace1358225318.h"
#include "UnityEngine_UnityEngine_Rendering_RenderBufferLoad2221251489.h"
#include "UnityEngine_UnityEngine_Rendering_RenderBufferStor1747813666.h"

// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t1615831949;
// UnityEngine.Rendering.RenderBufferLoadAction[]
struct RenderBufferLoadActionU5BU5D_t648152252;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_t2825152535;
struct RenderBuffer_t586150500 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTargetSetup
struct  RenderTargetSetup_t371939463 
{
public:
	// UnityEngine.RenderBuffer[] UnityEngine.RenderTargetSetup::color
	RenderBufferU5BU5D_t1615831949* ___color_0;
	// UnityEngine.RenderBuffer UnityEngine.RenderTargetSetup::depth
	RenderBuffer_t586150500  ___depth_1;
	// System.Int32 UnityEngine.RenderTargetSetup::mipLevel
	int32_t ___mipLevel_2;
	// UnityEngine.CubemapFace UnityEngine.RenderTargetSetup::cubemapFace
	int32_t ___cubemapFace_3;
	// System.Int32 UnityEngine.RenderTargetSetup::depthSlice
	int32_t ___depthSlice_4;
	// UnityEngine.Rendering.RenderBufferLoadAction[] UnityEngine.RenderTargetSetup::colorLoad
	RenderBufferLoadActionU5BU5D_t648152252* ___colorLoad_5;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.RenderTargetSetup::colorStore
	RenderBufferStoreActionU5BU5D_t2825152535* ___colorStore_6;
	// UnityEngine.Rendering.RenderBufferLoadAction UnityEngine.RenderTargetSetup::depthLoad
	int32_t ___depthLoad_7;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.RenderTargetSetup::depthStore
	int32_t ___depthStore_8;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___color_0)); }
	inline RenderBufferU5BU5D_t1615831949* get_color_0() const { return ___color_0; }
	inline RenderBufferU5BU5D_t1615831949** get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(RenderBufferU5BU5D_t1615831949* value)
	{
		___color_0 = value;
		Il2CppCodeGenWriteBarrier(&___color_0, value);
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___depth_1)); }
	inline RenderBuffer_t586150500  get_depth_1() const { return ___depth_1; }
	inline RenderBuffer_t586150500 * get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(RenderBuffer_t586150500  value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_mipLevel_2() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___mipLevel_2)); }
	inline int32_t get_mipLevel_2() const { return ___mipLevel_2; }
	inline int32_t* get_address_of_mipLevel_2() { return &___mipLevel_2; }
	inline void set_mipLevel_2(int32_t value)
	{
		___mipLevel_2 = value;
	}

	inline static int32_t get_offset_of_cubemapFace_3() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___cubemapFace_3)); }
	inline int32_t get_cubemapFace_3() const { return ___cubemapFace_3; }
	inline int32_t* get_address_of_cubemapFace_3() { return &___cubemapFace_3; }
	inline void set_cubemapFace_3(int32_t value)
	{
		___cubemapFace_3 = value;
	}

	inline static int32_t get_offset_of_depthSlice_4() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___depthSlice_4)); }
	inline int32_t get_depthSlice_4() const { return ___depthSlice_4; }
	inline int32_t* get_address_of_depthSlice_4() { return &___depthSlice_4; }
	inline void set_depthSlice_4(int32_t value)
	{
		___depthSlice_4 = value;
	}

	inline static int32_t get_offset_of_colorLoad_5() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___colorLoad_5)); }
	inline RenderBufferLoadActionU5BU5D_t648152252* get_colorLoad_5() const { return ___colorLoad_5; }
	inline RenderBufferLoadActionU5BU5D_t648152252** get_address_of_colorLoad_5() { return &___colorLoad_5; }
	inline void set_colorLoad_5(RenderBufferLoadActionU5BU5D_t648152252* value)
	{
		___colorLoad_5 = value;
		Il2CppCodeGenWriteBarrier(&___colorLoad_5, value);
	}

	inline static int32_t get_offset_of_colorStore_6() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___colorStore_6)); }
	inline RenderBufferStoreActionU5BU5D_t2825152535* get_colorStore_6() const { return ___colorStore_6; }
	inline RenderBufferStoreActionU5BU5D_t2825152535** get_address_of_colorStore_6() { return &___colorStore_6; }
	inline void set_colorStore_6(RenderBufferStoreActionU5BU5D_t2825152535* value)
	{
		___colorStore_6 = value;
		Il2CppCodeGenWriteBarrier(&___colorStore_6, value);
	}

	inline static int32_t get_offset_of_depthLoad_7() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___depthLoad_7)); }
	inline int32_t get_depthLoad_7() const { return ___depthLoad_7; }
	inline int32_t* get_address_of_depthLoad_7() { return &___depthLoad_7; }
	inline void set_depthLoad_7(int32_t value)
	{
		___depthLoad_7 = value;
	}

	inline static int32_t get_offset_of_depthStore_8() { return static_cast<int32_t>(offsetof(RenderTargetSetup_t371939463, ___depthStore_8)); }
	inline int32_t get_depthStore_8() const { return ___depthStore_8; }
	inline int32_t* get_address_of_depthStore_8() { return &___depthStore_8; }
	inline void set_depthStore_8(int32_t value)
	{
		___depthStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RenderTargetSetup
struct RenderTargetSetup_t371939463_marshaled_pinvoke
{
	RenderBuffer_t586150500 * ___color_0;
	RenderBuffer_t586150500  ___depth_1;
	int32_t ___mipLevel_2;
	int32_t ___cubemapFace_3;
	int32_t ___depthSlice_4;
	int32_t* ___colorLoad_5;
	int32_t* ___colorStore_6;
	int32_t ___depthLoad_7;
	int32_t ___depthStore_8;
};
// Native definition for COM marshalling of UnityEngine.RenderTargetSetup
struct RenderTargetSetup_t371939463_marshaled_com
{
	RenderBuffer_t586150500 * ___color_0;
	RenderBuffer_t586150500  ___depth_1;
	int32_t ___mipLevel_2;
	int32_t ___cubemapFace_3;
	int32_t ___depthSlice_4;
	int32_t* ___colorLoad_5;
	int32_t* ___colorStore_6;
	int32_t ___depthLoad_7;
	int32_t ___depthStore_8;
};
