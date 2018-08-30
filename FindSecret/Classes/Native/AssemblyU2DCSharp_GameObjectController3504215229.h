#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// GameObjectController
struct GameObjectController_t3504215229;
// UnityEngine.GameObject
struct GameObject_t1113636619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectController
struct  GameObjectController_t3504215229  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject GameObjectController::Core
	GameObject_t1113636619 * ___Core_3;

public:
	inline static int32_t get_offset_of_Core_3() { return static_cast<int32_t>(offsetof(GameObjectController_t3504215229, ___Core_3)); }
	inline GameObject_t1113636619 * get_Core_3() const { return ___Core_3; }
	inline GameObject_t1113636619 ** get_address_of_Core_3() { return &___Core_3; }
	inline void set_Core_3(GameObject_t1113636619 * value)
	{
		___Core_3 = value;
		Il2CppCodeGenWriteBarrier(&___Core_3, value);
	}
};

struct GameObjectController_t3504215229_StaticFields
{
public:
	// GameObjectController GameObjectController::GameObject_Controller
	GameObjectController_t3504215229 * ___GameObject_Controller_2;

public:
	inline static int32_t get_offset_of_GameObject_Controller_2() { return static_cast<int32_t>(offsetof(GameObjectController_t3504215229_StaticFields, ___GameObject_Controller_2)); }
	inline GameObjectController_t3504215229 * get_GameObject_Controller_2() const { return ___GameObject_Controller_2; }
	inline GameObjectController_t3504215229 ** get_address_of_GameObject_Controller_2() { return &___GameObject_Controller_2; }
	inline void set_GameObject_Controller_2(GameObjectController_t3504215229 * value)
	{
		___GameObject_Controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___GameObject_Controller_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
