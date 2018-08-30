#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.GifAssets.GifReplay.Cube
struct  Cube_t2597235108  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.MeshRenderer Assets.GifAssets.GifReplay.Cube::Renderer
	MeshRenderer_t587009260 * ___Renderer_2;

public:
	inline static int32_t get_offset_of_Renderer_2() { return static_cast<int32_t>(offsetof(Cube_t2597235108, ___Renderer_2)); }
	inline MeshRenderer_t587009260 * get_Renderer_2() const { return ___Renderer_2; }
	inline MeshRenderer_t587009260 ** get_address_of_Renderer_2() { return &___Renderer_2; }
	inline void set_Renderer_2(MeshRenderer_t587009260 * value)
	{
		___Renderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
