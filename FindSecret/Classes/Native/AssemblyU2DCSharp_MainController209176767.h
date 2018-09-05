#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyAR_CloudRecognizerBehaviour3755081683.h"
#include "AssemblyU2DCSharp_Mode2989995043.h"

// MainController
struct MainController_t209176767;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Shader
struct Shader_t4151988712;
// RealImageTarget
struct RealImageTarget_t23565925;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle>
struct Dictionary_2_t939163551;
// System.Collections.Generic.List`1<RealImageTarget>
struct List_1_t1495640667;
// EasyAR.ImageTarget
struct ImageTarget_t46103797;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t1286104214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainController
struct  MainController_t209176767  : public CloudRecognizerBehaviour_t3755081683
{
public:
	// UnityEngine.Camera MainController::ARCam
	Camera_t4157153871 * ___ARCam_13;
	// UnityEngine.Camera MainController::FreeCam
	Camera_t4157153871 * ___FreeCam_14;
	// UnityEngine.Shader MainController::flip
	Shader_t4151988712 * ___flip_15;
	// UnityEngine.Shader MainController::normal
	Shader_t4151988712 * ___normal_16;
	// RealImageTarget MainController::<currentTarget>k__BackingField
	RealImageTarget_t23565925 * ___U3CcurrentTargetU3Ek__BackingField_17;
	// Mode MainController::curMod
	int32_t ___curMod_18;
	// System.String MainController::curTargetUid
	String_t* ___curTargetUid_19;
	// System.String MainController::AudioGIFPath
	String_t* ___AudioGIFPath_20;
	// System.String MainController::LoadingGIFPath
	String_t* ___LoadingGIFPath_21;
	// System.Boolean MainController::isScanSuccess
	bool ___isScanSuccess_22;
	// System.Int32 MainController::progress
	int32_t ___progress_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MainController::bufferGo
	List_1_t2585711361 * ___bufferGo_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AssetBundle> MainController::abBuffer
	Dictionary_2_t939163551 * ___abBuffer_25;
	// System.Collections.Generic.List`1<RealImageTarget> MainController::bufferTarget
	List_1_t1495640667 * ___bufferTarget_26;
	// EasyAR.ImageTarget MainController::curCloudImageTarget
	ImageTarget_t46103797 * ___curCloudImageTarget_27;
	// System.Boolean MainController::isFind
	bool ___isFind_28;

public:
	inline static int32_t get_offset_of_ARCam_13() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___ARCam_13)); }
	inline Camera_t4157153871 * get_ARCam_13() const { return ___ARCam_13; }
	inline Camera_t4157153871 ** get_address_of_ARCam_13() { return &___ARCam_13; }
	inline void set_ARCam_13(Camera_t4157153871 * value)
	{
		___ARCam_13 = value;
		Il2CppCodeGenWriteBarrier(&___ARCam_13, value);
	}

	inline static int32_t get_offset_of_FreeCam_14() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___FreeCam_14)); }
	inline Camera_t4157153871 * get_FreeCam_14() const { return ___FreeCam_14; }
	inline Camera_t4157153871 ** get_address_of_FreeCam_14() { return &___FreeCam_14; }
	inline void set_FreeCam_14(Camera_t4157153871 * value)
	{
		___FreeCam_14 = value;
		Il2CppCodeGenWriteBarrier(&___FreeCam_14, value);
	}

	inline static int32_t get_offset_of_flip_15() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___flip_15)); }
	inline Shader_t4151988712 * get_flip_15() const { return ___flip_15; }
	inline Shader_t4151988712 ** get_address_of_flip_15() { return &___flip_15; }
	inline void set_flip_15(Shader_t4151988712 * value)
	{
		___flip_15 = value;
		Il2CppCodeGenWriteBarrier(&___flip_15, value);
	}

	inline static int32_t get_offset_of_normal_16() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___normal_16)); }
	inline Shader_t4151988712 * get_normal_16() const { return ___normal_16; }
	inline Shader_t4151988712 ** get_address_of_normal_16() { return &___normal_16; }
	inline void set_normal_16(Shader_t4151988712 * value)
	{
		___normal_16 = value;
		Il2CppCodeGenWriteBarrier(&___normal_16, value);
	}

	inline static int32_t get_offset_of_U3CcurrentTargetU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___U3CcurrentTargetU3Ek__BackingField_17)); }
	inline RealImageTarget_t23565925 * get_U3CcurrentTargetU3Ek__BackingField_17() const { return ___U3CcurrentTargetU3Ek__BackingField_17; }
	inline RealImageTarget_t23565925 ** get_address_of_U3CcurrentTargetU3Ek__BackingField_17() { return &___U3CcurrentTargetU3Ek__BackingField_17; }
	inline void set_U3CcurrentTargetU3Ek__BackingField_17(RealImageTarget_t23565925 * value)
	{
		___U3CcurrentTargetU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcurrentTargetU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_curMod_18() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___curMod_18)); }
	inline int32_t get_curMod_18() const { return ___curMod_18; }
	inline int32_t* get_address_of_curMod_18() { return &___curMod_18; }
	inline void set_curMod_18(int32_t value)
	{
		___curMod_18 = value;
	}

	inline static int32_t get_offset_of_curTargetUid_19() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___curTargetUid_19)); }
	inline String_t* get_curTargetUid_19() const { return ___curTargetUid_19; }
	inline String_t** get_address_of_curTargetUid_19() { return &___curTargetUid_19; }
	inline void set_curTargetUid_19(String_t* value)
	{
		___curTargetUid_19 = value;
		Il2CppCodeGenWriteBarrier(&___curTargetUid_19, value);
	}

	inline static int32_t get_offset_of_AudioGIFPath_20() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___AudioGIFPath_20)); }
	inline String_t* get_AudioGIFPath_20() const { return ___AudioGIFPath_20; }
	inline String_t** get_address_of_AudioGIFPath_20() { return &___AudioGIFPath_20; }
	inline void set_AudioGIFPath_20(String_t* value)
	{
		___AudioGIFPath_20 = value;
		Il2CppCodeGenWriteBarrier(&___AudioGIFPath_20, value);
	}

	inline static int32_t get_offset_of_LoadingGIFPath_21() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___LoadingGIFPath_21)); }
	inline String_t* get_LoadingGIFPath_21() const { return ___LoadingGIFPath_21; }
	inline String_t** get_address_of_LoadingGIFPath_21() { return &___LoadingGIFPath_21; }
	inline void set_LoadingGIFPath_21(String_t* value)
	{
		___LoadingGIFPath_21 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingGIFPath_21, value);
	}

	inline static int32_t get_offset_of_isScanSuccess_22() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___isScanSuccess_22)); }
	inline bool get_isScanSuccess_22() const { return ___isScanSuccess_22; }
	inline bool* get_address_of_isScanSuccess_22() { return &___isScanSuccess_22; }
	inline void set_isScanSuccess_22(bool value)
	{
		___isScanSuccess_22 = value;
	}

	inline static int32_t get_offset_of_progress_23() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___progress_23)); }
	inline int32_t get_progress_23() const { return ___progress_23; }
	inline int32_t* get_address_of_progress_23() { return &___progress_23; }
	inline void set_progress_23(int32_t value)
	{
		___progress_23 = value;
	}

	inline static int32_t get_offset_of_bufferGo_24() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___bufferGo_24)); }
	inline List_1_t2585711361 * get_bufferGo_24() const { return ___bufferGo_24; }
	inline List_1_t2585711361 ** get_address_of_bufferGo_24() { return &___bufferGo_24; }
	inline void set_bufferGo_24(List_1_t2585711361 * value)
	{
		___bufferGo_24 = value;
		Il2CppCodeGenWriteBarrier(&___bufferGo_24, value);
	}

	inline static int32_t get_offset_of_abBuffer_25() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___abBuffer_25)); }
	inline Dictionary_2_t939163551 * get_abBuffer_25() const { return ___abBuffer_25; }
	inline Dictionary_2_t939163551 ** get_address_of_abBuffer_25() { return &___abBuffer_25; }
	inline void set_abBuffer_25(Dictionary_2_t939163551 * value)
	{
		___abBuffer_25 = value;
		Il2CppCodeGenWriteBarrier(&___abBuffer_25, value);
	}

	inline static int32_t get_offset_of_bufferTarget_26() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___bufferTarget_26)); }
	inline List_1_t1495640667 * get_bufferTarget_26() const { return ___bufferTarget_26; }
	inline List_1_t1495640667 ** get_address_of_bufferTarget_26() { return &___bufferTarget_26; }
	inline void set_bufferTarget_26(List_1_t1495640667 * value)
	{
		___bufferTarget_26 = value;
		Il2CppCodeGenWriteBarrier(&___bufferTarget_26, value);
	}

	inline static int32_t get_offset_of_curCloudImageTarget_27() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___curCloudImageTarget_27)); }
	inline ImageTarget_t46103797 * get_curCloudImageTarget_27() const { return ___curCloudImageTarget_27; }
	inline ImageTarget_t46103797 ** get_address_of_curCloudImageTarget_27() { return &___curCloudImageTarget_27; }
	inline void set_curCloudImageTarget_27(ImageTarget_t46103797 * value)
	{
		___curCloudImageTarget_27 = value;
		Il2CppCodeGenWriteBarrier(&___curCloudImageTarget_27, value);
	}

	inline static int32_t get_offset_of_isFind_28() { return static_cast<int32_t>(offsetof(MainController_t209176767, ___isFind_28)); }
	inline bool get_isFind_28() const { return ___isFind_28; }
	inline bool* get_address_of_isFind_28() { return &___isFind_28; }
	inline void set_isFind_28(bool value)
	{
		___isFind_28 = value;
	}
};

struct MainController_t209176767_StaticFields
{
public:
	// MainController MainController::<Instance>k__BackingField
	MainController_t209176767 * ___U3CInstanceU3Ek__BackingField_12;
	// System.Action`1<UnityEngine.GameObject> MainController::<>f__am$cache0
	Action_1_t1286104214 * ___U3CU3Ef__amU24cache0_29;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MainController_t209176767_StaticFields, ___U3CInstanceU3Ek__BackingField_12)); }
	inline MainController_t209176767 * get_U3CInstanceU3Ek__BackingField_12() const { return ___U3CInstanceU3Ek__BackingField_12; }
	inline MainController_t209176767 ** get_address_of_U3CInstanceU3Ek__BackingField_12() { return &___U3CInstanceU3Ek__BackingField_12; }
	inline void set_U3CInstanceU3Ek__BackingField_12(MainController_t209176767 * value)
	{
		___U3CInstanceU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_29() { return static_cast<int32_t>(offsetof(MainController_t209176767_StaticFields, ___U3CU3Ef__amU24cache0_29)); }
	inline Action_1_t1286104214 * get_U3CU3Ef__amU24cache0_29() const { return ___U3CU3Ef__amU24cache0_29; }
	inline Action_1_t1286104214 ** get_address_of_U3CU3Ef__amU24cache0_29() { return &___U3CU3Ef__amU24cache0_29; }
	inline void set_U3CU3Ef__amU24cache0_29(Action_1_t1286104214 * value)
	{
		___U3CU3Ef__amU24cache0_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
