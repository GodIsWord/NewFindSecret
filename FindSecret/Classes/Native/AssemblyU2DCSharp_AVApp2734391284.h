#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_AppBase2538546352.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// ZGGame.GPSBehaviour
struct GPSBehaviour_t1815371760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AVApp
struct  AVApp_t2734391284  : public AppBase_t2538546352
{
public:
	// UnityEngine.Transform AVApp::traRoot
	Transform_t3600365921 * ___traRoot_6;
	// ZGGame.GPSBehaviour AVApp::gps
	GPSBehaviour_t1815371760 * ___gps_7;

public:
	inline static int32_t get_offset_of_traRoot_6() { return static_cast<int32_t>(offsetof(AVApp_t2734391284, ___traRoot_6)); }
	inline Transform_t3600365921 * get_traRoot_6() const { return ___traRoot_6; }
	inline Transform_t3600365921 ** get_address_of_traRoot_6() { return &___traRoot_6; }
	inline void set_traRoot_6(Transform_t3600365921 * value)
	{
		___traRoot_6 = value;
		Il2CppCodeGenWriteBarrier(&___traRoot_6, value);
	}

	inline static int32_t get_offset_of_gps_7() { return static_cast<int32_t>(offsetof(AVApp_t2734391284, ___gps_7)); }
	inline GPSBehaviour_t1815371760 * get_gps_7() const { return ___gps_7; }
	inline GPSBehaviour_t1815371760 ** get_address_of_gps_7() { return &___gps_7; }
	inline void set_gps_7(GPSBehaviour_t1815371760 * value)
	{
		___gps_7 = value;
		Il2CppCodeGenWriteBarrier(&___gps_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
