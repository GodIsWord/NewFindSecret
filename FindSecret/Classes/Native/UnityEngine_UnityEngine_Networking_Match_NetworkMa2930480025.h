#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Uri
struct Uri_t100236324;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch
struct  NetworkMatch_t2930480025  : public MonoBehaviour_t3962482529
{
public:
	// System.Uri UnityEngine.Networking.Match.NetworkMatch::m_BaseUri
	Uri_t100236324 * ___m_BaseUri_2;

public:
	inline static int32_t get_offset_of_m_BaseUri_2() { return static_cast<int32_t>(offsetof(NetworkMatch_t2930480025, ___m_BaseUri_2)); }
	inline Uri_t100236324 * get_m_BaseUri_2() const { return ___m_BaseUri_2; }
	inline Uri_t100236324 ** get_address_of_m_BaseUri_2() { return &___m_BaseUri_2; }
	inline void set_m_BaseUri_2(Uri_t100236324 * value)
	{
		___m_BaseUri_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseUri_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
