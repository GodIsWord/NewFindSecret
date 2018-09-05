#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// CFX_SpawnSystem
struct CFX_SpawnSystem_t3632654792;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t1474424692;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CFX_SpawnSystem
struct  CFX_SpawnSystem_t3632654792  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] CFX_SpawnSystem::objectsToPreload
	GameObjectU5BU5D_t3328599146* ___objectsToPreload_3;
	// System.Int32[] CFX_SpawnSystem::objectsToPreloadTimes
	Int32U5BU5D_t385246372* ___objectsToPreloadTimes_4;
	// System.Boolean CFX_SpawnSystem::hideObjectsInHierarchy
	bool ___hideObjectsInHierarchy_5;
	// System.Boolean CFX_SpawnSystem::allObjectsLoaded
	bool ___allObjectsLoaded_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>> CFX_SpawnSystem::instantiatedObjects
	Dictionary_2_t1474424692 * ___instantiatedObjects_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CFX_SpawnSystem::poolCursors
	Dictionary_2_t1839659084 * ___poolCursors_8;

public:
	inline static int32_t get_offset_of_objectsToPreload_3() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___objectsToPreload_3)); }
	inline GameObjectU5BU5D_t3328599146* get_objectsToPreload_3() const { return ___objectsToPreload_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_objectsToPreload_3() { return &___objectsToPreload_3; }
	inline void set_objectsToPreload_3(GameObjectU5BU5D_t3328599146* value)
	{
		___objectsToPreload_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToPreload_3, value);
	}

	inline static int32_t get_offset_of_objectsToPreloadTimes_4() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___objectsToPreloadTimes_4)); }
	inline Int32U5BU5D_t385246372* get_objectsToPreloadTimes_4() const { return ___objectsToPreloadTimes_4; }
	inline Int32U5BU5D_t385246372** get_address_of_objectsToPreloadTimes_4() { return &___objectsToPreloadTimes_4; }
	inline void set_objectsToPreloadTimes_4(Int32U5BU5D_t385246372* value)
	{
		___objectsToPreloadTimes_4 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToPreloadTimes_4, value);
	}

	inline static int32_t get_offset_of_hideObjectsInHierarchy_5() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___hideObjectsInHierarchy_5)); }
	inline bool get_hideObjectsInHierarchy_5() const { return ___hideObjectsInHierarchy_5; }
	inline bool* get_address_of_hideObjectsInHierarchy_5() { return &___hideObjectsInHierarchy_5; }
	inline void set_hideObjectsInHierarchy_5(bool value)
	{
		___hideObjectsInHierarchy_5 = value;
	}

	inline static int32_t get_offset_of_allObjectsLoaded_6() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___allObjectsLoaded_6)); }
	inline bool get_allObjectsLoaded_6() const { return ___allObjectsLoaded_6; }
	inline bool* get_address_of_allObjectsLoaded_6() { return &___allObjectsLoaded_6; }
	inline void set_allObjectsLoaded_6(bool value)
	{
		___allObjectsLoaded_6 = value;
	}

	inline static int32_t get_offset_of_instantiatedObjects_7() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___instantiatedObjects_7)); }
	inline Dictionary_2_t1474424692 * get_instantiatedObjects_7() const { return ___instantiatedObjects_7; }
	inline Dictionary_2_t1474424692 ** get_address_of_instantiatedObjects_7() { return &___instantiatedObjects_7; }
	inline void set_instantiatedObjects_7(Dictionary_2_t1474424692 * value)
	{
		___instantiatedObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___instantiatedObjects_7, value);
	}

	inline static int32_t get_offset_of_poolCursors_8() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792, ___poolCursors_8)); }
	inline Dictionary_2_t1839659084 * get_poolCursors_8() const { return ___poolCursors_8; }
	inline Dictionary_2_t1839659084 ** get_address_of_poolCursors_8() { return &___poolCursors_8; }
	inline void set_poolCursors_8(Dictionary_2_t1839659084 * value)
	{
		___poolCursors_8 = value;
		Il2CppCodeGenWriteBarrier(&___poolCursors_8, value);
	}
};

struct CFX_SpawnSystem_t3632654792_StaticFields
{
public:
	// CFX_SpawnSystem CFX_SpawnSystem::instance
	CFX_SpawnSystem_t3632654792 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CFX_SpawnSystem_t3632654792_StaticFields, ___instance_2)); }
	inline CFX_SpawnSystem_t3632654792 * get_instance_2() const { return ___instance_2; }
	inline CFX_SpawnSystem_t3632654792 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CFX_SpawnSystem_t3632654792 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
