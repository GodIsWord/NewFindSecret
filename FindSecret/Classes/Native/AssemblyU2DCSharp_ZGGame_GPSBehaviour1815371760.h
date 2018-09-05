#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.GPSBehaviour
struct  GPSBehaviour_t1815371760  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ZGGame.GPSBehaviour::isStartContinue
	bool ___isStartContinue_4;
	// System.Int32 ZGGame.GPSBehaviour::frame
	int32_t ___frame_5;

public:
	inline static int32_t get_offset_of_isStartContinue_4() { return static_cast<int32_t>(offsetof(GPSBehaviour_t1815371760, ___isStartContinue_4)); }
	inline bool get_isStartContinue_4() const { return ___isStartContinue_4; }
	inline bool* get_address_of_isStartContinue_4() { return &___isStartContinue_4; }
	inline void set_isStartContinue_4(bool value)
	{
		___isStartContinue_4 = value;
	}

	inline static int32_t get_offset_of_frame_5() { return static_cast<int32_t>(offsetof(GPSBehaviour_t1815371760, ___frame_5)); }
	inline int32_t get_frame_5() const { return ___frame_5; }
	inline int32_t* get_address_of_frame_5() { return &___frame_5; }
	inline void set_frame_5(int32_t value)
	{
		___frame_5 = value;
	}
};

struct GPSBehaviour_t1815371760_StaticFields
{
public:
	// System.Double ZGGame.GPSBehaviour::_latitude
	double ____latitude_2;
	// System.Double ZGGame.GPSBehaviour::_longitude
	double ____longitude_3;

public:
	inline static int32_t get_offset_of__latitude_2() { return static_cast<int32_t>(offsetof(GPSBehaviour_t1815371760_StaticFields, ____latitude_2)); }
	inline double get__latitude_2() const { return ____latitude_2; }
	inline double* get_address_of__latitude_2() { return &____latitude_2; }
	inline void set__latitude_2(double value)
	{
		____latitude_2 = value;
	}

	inline static int32_t get_offset_of__longitude_3() { return static_cast<int32_t>(offsetof(GPSBehaviour_t1815371760_StaticFields, ____longitude_3)); }
	inline double get__longitude_3() const { return ____longitude_3; }
	inline double* get_address_of__longitude_3() { return &____longitude_3; }
	inline void set__longitude_3(double value)
	{
		____longitude_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
