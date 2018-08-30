#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "AssemblyU2DCSharp_ZGGame_TimeStatus1347902738.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZGGame.TimeData
struct  TimeData_t3443309391  : public Il2CppObject
{
public:
	// System.String ZGGame.TimeData::id
	String_t* ___id_0;
	// System.Double ZGGame.TimeData::totalTime
	double ___totalTime_1;
	// System.Double ZGGame.TimeData::lastTime
	double ___lastTime_2;
	// System.Double ZGGame.TimeData::currentTime
	double ___currentTime_3;
	// ZGGame.TimeStatus ZGGame.TimeData::_status
	int32_t ____status_4;
	// System.Single ZGGame.TimeData::tickInterval
	float ___tickInterval_5;
	// System.Int32 ZGGame.TimeData::tickTimes
	int32_t ___tickTimes_6;
	// System.Boolean ZGGame.TimeData::baseOnServer
	bool ___baseOnServer_7;
	// System.Double ZGGame.TimeData::startTimeOnServer
	double ___startTimeOnServer_8;
	// System.Boolean ZGGame.TimeData::isLoop
	bool ___isLoop_9;
	// System.Int32 ZGGame.TimeData::loopTimes
	int32_t ___loopTimes_10;
	// System.Object ZGGame.TimeData::tag
	Il2CppObject * ___tag_11;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_totalTime_1() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___totalTime_1)); }
	inline double get_totalTime_1() const { return ___totalTime_1; }
	inline double* get_address_of_totalTime_1() { return &___totalTime_1; }
	inline void set_totalTime_1(double value)
	{
		___totalTime_1 = value;
	}

	inline static int32_t get_offset_of_lastTime_2() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___lastTime_2)); }
	inline double get_lastTime_2() const { return ___lastTime_2; }
	inline double* get_address_of_lastTime_2() { return &___lastTime_2; }
	inline void set_lastTime_2(double value)
	{
		___lastTime_2 = value;
	}

	inline static int32_t get_offset_of_currentTime_3() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___currentTime_3)); }
	inline double get_currentTime_3() const { return ___currentTime_3; }
	inline double* get_address_of_currentTime_3() { return &___currentTime_3; }
	inline void set_currentTime_3(double value)
	{
		___currentTime_3 = value;
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}

	inline static int32_t get_offset_of_tickInterval_5() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___tickInterval_5)); }
	inline float get_tickInterval_5() const { return ___tickInterval_5; }
	inline float* get_address_of_tickInterval_5() { return &___tickInterval_5; }
	inline void set_tickInterval_5(float value)
	{
		___tickInterval_5 = value;
	}

	inline static int32_t get_offset_of_tickTimes_6() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___tickTimes_6)); }
	inline int32_t get_tickTimes_6() const { return ___tickTimes_6; }
	inline int32_t* get_address_of_tickTimes_6() { return &___tickTimes_6; }
	inline void set_tickTimes_6(int32_t value)
	{
		___tickTimes_6 = value;
	}

	inline static int32_t get_offset_of_baseOnServer_7() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___baseOnServer_7)); }
	inline bool get_baseOnServer_7() const { return ___baseOnServer_7; }
	inline bool* get_address_of_baseOnServer_7() { return &___baseOnServer_7; }
	inline void set_baseOnServer_7(bool value)
	{
		___baseOnServer_7 = value;
	}

	inline static int32_t get_offset_of_startTimeOnServer_8() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___startTimeOnServer_8)); }
	inline double get_startTimeOnServer_8() const { return ___startTimeOnServer_8; }
	inline double* get_address_of_startTimeOnServer_8() { return &___startTimeOnServer_8; }
	inline void set_startTimeOnServer_8(double value)
	{
		___startTimeOnServer_8 = value;
	}

	inline static int32_t get_offset_of_isLoop_9() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___isLoop_9)); }
	inline bool get_isLoop_9() const { return ___isLoop_9; }
	inline bool* get_address_of_isLoop_9() { return &___isLoop_9; }
	inline void set_isLoop_9(bool value)
	{
		___isLoop_9 = value;
	}

	inline static int32_t get_offset_of_loopTimes_10() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___loopTimes_10)); }
	inline int32_t get_loopTimes_10() const { return ___loopTimes_10; }
	inline int32_t* get_address_of_loopTimes_10() { return &___loopTimes_10; }
	inline void set_loopTimes_10(int32_t value)
	{
		___loopTimes_10 = value;
	}

	inline static int32_t get_offset_of_tag_11() { return static_cast<int32_t>(offsetof(TimeData_t3443309391, ___tag_11)); }
	inline Il2CppObject * get_tag_11() const { return ___tag_11; }
	inline Il2CppObject ** get_address_of_tag_11() { return &___tag_11; }
	inline void set_tag_11(Il2CppObject * value)
	{
		___tag_11 = value;
		Il2CppCodeGenWriteBarrier(&___tag_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
