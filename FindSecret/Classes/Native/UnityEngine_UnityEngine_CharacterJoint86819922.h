#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Joint1358886274.h"
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_JointDrive1135608026.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterJoint
struct  CharacterJoint_t86819922  : public Joint_t1358886274
{
public:
	// UnityEngine.Quaternion UnityEngine.CharacterJoint::targetRotation
	Quaternion_t2301928331  ___targetRotation_2;
	// UnityEngine.Vector3 UnityEngine.CharacterJoint::targetAngularVelocity
	Vector3_t3722313464  ___targetAngularVelocity_3;
	// UnityEngine.JointDrive UnityEngine.CharacterJoint::rotationDrive
	JointDrive_t1135608026  ___rotationDrive_4;

public:
	inline static int32_t get_offset_of_targetRotation_2() { return static_cast<int32_t>(offsetof(CharacterJoint_t86819922, ___targetRotation_2)); }
	inline Quaternion_t2301928331  get_targetRotation_2() const { return ___targetRotation_2; }
	inline Quaternion_t2301928331 * get_address_of_targetRotation_2() { return &___targetRotation_2; }
	inline void set_targetRotation_2(Quaternion_t2301928331  value)
	{
		___targetRotation_2 = value;
	}

	inline static int32_t get_offset_of_targetAngularVelocity_3() { return static_cast<int32_t>(offsetof(CharacterJoint_t86819922, ___targetAngularVelocity_3)); }
	inline Vector3_t3722313464  get_targetAngularVelocity_3() const { return ___targetAngularVelocity_3; }
	inline Vector3_t3722313464 * get_address_of_targetAngularVelocity_3() { return &___targetAngularVelocity_3; }
	inline void set_targetAngularVelocity_3(Vector3_t3722313464  value)
	{
		___targetAngularVelocity_3 = value;
	}

	inline static int32_t get_offset_of_rotationDrive_4() { return static_cast<int32_t>(offsetof(CharacterJoint_t86819922, ___rotationDrive_4)); }
	inline JointDrive_t1135608026  get_rotationDrive_4() const { return ___rotationDrive_4; }
	inline JointDrive_t1135608026 * get_address_of_rotationDrive_4() { return &___rotationDrive_4; }
	inline void set_rotationDrive_4(JointDrive_t1135608026  value)
	{
		___rotationDrive_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
