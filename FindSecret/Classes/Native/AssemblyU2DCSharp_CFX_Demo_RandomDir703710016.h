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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CFX_Demo_RandomDir
struct  CFX_Demo_RandomDir_t703710016  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 CFX_Demo_RandomDir::min
	Vector3_t3722313464  ___min_2;
	// UnityEngine.Vector3 CFX_Demo_RandomDir::max
	Vector3_t3722313464  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(CFX_Demo_RandomDir_t703710016, ___min_2)); }
	inline Vector3_t3722313464  get_min_2() const { return ___min_2; }
	inline Vector3_t3722313464 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector3_t3722313464  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(CFX_Demo_RandomDir_t703710016, ___max_3)); }
	inline Vector3_t3722313464  get_max_3() const { return ___max_3; }
	inline Vector3_t3722313464 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector3_t3722313464  value)
	{
		___max_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
