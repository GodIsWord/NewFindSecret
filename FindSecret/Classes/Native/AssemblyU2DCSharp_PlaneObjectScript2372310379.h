#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.TextMesh
struct TextMesh_t1536577757;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaneObjectScript
struct  PlaneObjectScript_t2372310379  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh PlaneObjectScript::tm
	TextMesh_t1536577757 * ___tm_2;

public:
	inline static int32_t get_offset_of_tm_2() { return static_cast<int32_t>(offsetof(PlaneObjectScript_t2372310379, ___tm_2)); }
	inline TextMesh_t1536577757 * get_tm_2() const { return ___tm_2; }
	inline TextMesh_t1536577757 ** get_address_of_tm_2() { return &___tm_2; }
	inline void set_tm_2(TextMesh_t1536577757 * value)
	{
		___tm_2 = value;
		Il2CppCodeGenWriteBarrier(&___tm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
