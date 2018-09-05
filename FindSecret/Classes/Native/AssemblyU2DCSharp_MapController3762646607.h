#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ZGGame_Controller243582048.h"

// ZGGame.GPSBehaviour
struct GPSBehaviour_t1815371760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapController
struct  MapController_t3762646607  : public Controller_t243582048
{
public:
	// ZGGame.GPSBehaviour MapController::gps
	GPSBehaviour_t1815371760 * ___gps_2;
	// System.Single MapController::viewAngle
	float ___viewAngle_3;
	// System.Single MapController::currentNorth
	float ___currentNorth_4;

public:
	inline static int32_t get_offset_of_gps_2() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___gps_2)); }
	inline GPSBehaviour_t1815371760 * get_gps_2() const { return ___gps_2; }
	inline GPSBehaviour_t1815371760 ** get_address_of_gps_2() { return &___gps_2; }
	inline void set_gps_2(GPSBehaviour_t1815371760 * value)
	{
		___gps_2 = value;
		Il2CppCodeGenWriteBarrier(&___gps_2, value);
	}

	inline static int32_t get_offset_of_viewAngle_3() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___viewAngle_3)); }
	inline float get_viewAngle_3() const { return ___viewAngle_3; }
	inline float* get_address_of_viewAngle_3() { return &___viewAngle_3; }
	inline void set_viewAngle_3(float value)
	{
		___viewAngle_3 = value;
	}

	inline static int32_t get_offset_of_currentNorth_4() { return static_cast<int32_t>(offsetof(MapController_t3762646607, ___currentNorth_4)); }
	inline float get_currentNorth_4() const { return ___currentNorth_4; }
	inline float* get_address_of_currentNorth_4() { return &___currentNorth_4; }
	inline void set_currentNorth_4(float value)
	{
		___currentNorth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
