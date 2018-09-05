#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t3089334924;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CFX_ShurikenThreadFix
struct  CFX_ShurikenThreadFix_t3300879551  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ParticleSystem[] CFX_ShurikenThreadFix::systems
	ParticleSystemU5BU5D_t3089334924* ___systems_2;

public:
	inline static int32_t get_offset_of_systems_2() { return static_cast<int32_t>(offsetof(CFX_ShurikenThreadFix_t3300879551, ___systems_2)); }
	inline ParticleSystemU5BU5D_t3089334924* get_systems_2() const { return ___systems_2; }
	inline ParticleSystemU5BU5D_t3089334924** get_address_of_systems_2() { return &___systems_2; }
	inline void set_systems_2(ParticleSystemU5BU5D_t3089334924* value)
	{
		___systems_2 = value;
		Il2CppCodeGenWriteBarrier(&___systems_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
