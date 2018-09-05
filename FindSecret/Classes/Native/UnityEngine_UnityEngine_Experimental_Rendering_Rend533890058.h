#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject2528358522.h"

// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.IRenderPipeline>
struct List_1_t2329883747;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineAsset
struct  RenderPipelineAsset_t533890058  : public ScriptableObject_t2528358522
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.IRenderPipeline> UnityEngine.Experimental.Rendering.RenderPipelineAsset::m_CreatedPipelines
	List_1_t2329883747 * ___m_CreatedPipelines_2;

public:
	inline static int32_t get_offset_of_m_CreatedPipelines_2() { return static_cast<int32_t>(offsetof(RenderPipelineAsset_t533890058, ___m_CreatedPipelines_2)); }
	inline List_1_t2329883747 * get_m_CreatedPipelines_2() const { return ___m_CreatedPipelines_2; }
	inline List_1_t2329883747 ** get_address_of_m_CreatedPipelines_2() { return &___m_CreatedPipelines_2; }
	inline void set_m_CreatedPipelines_2(List_1_t2329883747 * value)
	{
		___m_CreatedPipelines_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_CreatedPipelines_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
