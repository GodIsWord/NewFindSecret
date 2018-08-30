#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ZGGame_ViewBehaviour3242029334.h"
#include "AssemblyU2DCSharp_ZGGame_ViewUpdateBehaviour731634096.h"
#include "AssemblyU2DCSharp_ZGGame_BaseResponder900286719.h"
#include "AssemblyU2DCSharp_ZGGame_BaseSender3360968287.h"
#include "AssemblyU2DCSharp_HttpHelper1025773281.h"
#include "AssemblyU2DCSharp_ZGGame_NetInfoData779613672.h"
#include "AssemblyU2DCSharp_ZGGame_NetStatus2582784024.h"
#include "AssemblyU2DCSharp_ZGGame_NetManager1645111295.h"
#include "AssemblyU2DCSharp_ZGGame_AddressData523041859.h"
#include "AssemblyU2DCSharp_ZGGame_CoreNotifyIndex374487434.h"
#include "AssemblyU2DCSharp_ZGGame_EventDispatcher3647894359.h"
#include "AssemblyU2DCSharp_ZGGame_EventCallbackData2610731896.h"
#include "AssemblyU2DCSharp_ZGGame_GPSNotify1324481960.h"
#include "AssemblyU2DCSharp_ZGGame_GlobalNotify183697669.h"
#include "AssemblyU2DCSharp_ZGGame_TimerNotify1607951029.h"
#include "AssemblyU2DCSharp_ZGGame_Bezier2470135765.h"
#include "AssemblyU2DCSharp_ZGGame_ByteArray3229692365.h"
#include "AssemblyU2DCSharp_CallLaterUtil930640046.h"
#include "AssemblyU2DCSharp_CallLaterUtil_laterCallback804133219.h"
#include "AssemblyU2DCSharp_ZGGame_FileTools1321438649.h"
#include "AssemblyU2DCSharp_ZGGame_ZIPFileReader1191727799.h"
#include "AssemblyU2DCSharp_ZGGame_FormatUtil1735336428.h"
#include "AssemblyU2DCSharp_ZGGame_GPSUtil4263708531.h"
#include "AssemblyU2DCSharp_ZGGame_ObjectPool2599189628.h"
#include "AssemblyU2DCSharp_ZGGame_PathUtil3720089025.h"
#include "AssemblyU2DCSharp_ZGGame_RayUtil2340555042.h"
#include "AssemblyU2DCSharp_ZGGame_StringUtil1862603664.h"
#include "AssemblyU2DCSharp_ZGGame_TVInput280410716.h"
#include "AssemblyU2DCSharp_ZGGame_TVKeyCode666327987.h"
#include "AssemblyU2DCSharp_ZGGame_VectorUtil4169699629.h"
#include "AssemblyU2DCSharp_ZGGame_ZGPointerCallback2999669792.h"
#include "AssemblyU2DCSharp_ZGGame_ZGPointerEvent729856314.h"
#include "AssemblyU2DCSharp_ZGGame_AssetsUpdateStatus1375808363.h"
#include "AssemblyU2DCSharp_ZGGame_AssetsManager1015260537.h"
#include "AssemblyU2DCSharp_ZGGame_AssetLoadData599816848.h"
#include "AssemblyU2DCSharp_ZGGame_LoadManager3558014046.h"
#include "AssemblyU2DCSharp_ZGGame_UrlLoader4028468321.h"
#include "AssemblyU2DCSharp_ZGGame_AssetData303473330.h"
#include "AssemblyU2DCSharp_ZGGame_AssetListData336736458.h"
#include "AssemblyU2DCSharp_ZGGame_LoadData4179347895.h"
#include "AssemblyU2DCSharp_ZGGame_HttpUtil332077372.h"
#include "AssemblyU2DCSharp_ZGGame_RemoteRequest2051852686.h"
#include "AssemblyU2DCSharp_ZGGame_NetUtil1501759694.h"
#include "AssemblyU2DCSharp_ZGGame_SocketUtil1925728610.h"
#include "AssemblyU2DCSharp_ZGGame_StateObject3201166400.h"
#include "AssemblyU2DCSharp_ZGGame_TimeData3443309391.h"
#include "AssemblyU2DCSharp_ZGGame_TimeStatus1347902738.h"
#include "AssemblyU2DCSharp_ZGGame_TimeFormatUtil4276390442.h"
#include "AssemblyU2DCSharp_ZGGame_TimerManager1673020246.h"
#include "AssemblyU2DCSharp_ZGGame_UIManager2289068527.h"
#include "AssemblyU2DCSharp_ZGGame_UILayer1264183386.h"
#include "AssemblyU2DCSharp_UIUtil3574532613.h"
#include "AssemblyU2DCSharp_ZGGame_ZGUIEvent983099765.h"
#include "AssemblyU2DCSharp_DG_Tweening_DOTweenAnimation3459117967.h"
#include "AssemblyU2DCSharp_DG_Tweening_DOTweenAnimationExten980608231.h"
#include "AssemblyU2DCSharp_EasyAR_ARBuilder3904264120.h"
#include "AssemblyU2DCSharp_EasyAR_ARCameraBehaviour1254405434.h"
#include "AssemblyU2DCSharp_EasyAR_ARSceneBehaviour8608146.h"
#include "AssemblyU2DCSharp_EasyAR_ARSceneTrackerBehaviour3701728442.h"
#include "AssemblyU2DCSharp_EasyAR_CameraDeviceBehaviour208736500.h"
#include "AssemblyU2DCSharp_EasyAR_CloudRecognizerBehaviour3755081683.h"
#include "AssemblyU2DCSharp_EasyAR_EasyARBehaviour2785366930.h"
#include "AssemblyU2DCSharp_EasyAR_ImageTargetBehaviour4107554070.h"
#include "AssemblyU2DCSharp_EasyAR_ImageTrackerBehaviour3494472134.h"
#include "AssemblyU2DCSharp_EasyAR_ObjectTargetBehaviour3508296096.h"
#include "AssemblyU2DCSharp_EasyAR_ObjectTrackerBehaviour3994302515.h"
#include "AssemblyU2DCSharp_EasyAR_QRCodeScannerBehaviour2595137119.h"
#include "AssemblyU2DCSharp_EasyAR_RealityPlaneBehaviour4036907641.h"
#include "AssemblyU2DCSharp_EasyAR_RecorderBehaviour1084034177.h"
#include "AssemblyU2DCSharp_EasyAR_RenderCameraBehaviour1757081391.h"
#include "AssemblyU2DCSharp_EasyAR_VideoPlayerBehaviour1939602789.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Cube2597235108.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Assets943460947.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Recor3584992659.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Record158257634.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Recor1708487224.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_GifReplay_Recor1177982002.h"
#include "AssemblyU2DCSharp_NativeShare4027546635.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Animate455440388.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Animat3536498717.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Convert537948199.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Example690642745.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Example722762867.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl3725552698.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl2611976390.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl3509629578.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl3602730391.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl2949540293.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1602624778.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1321773502.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl3847581738.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl2335569659.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Example147745078.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1710376396.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Example308899077.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Exampl1923997928.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Gif3235314179.h"
#include "AssemblyU2DCSharp_Assets_GifAssets_PowerGif_Gif_U33433076517.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4000 = { sizeof (ViewBehaviour_t3242029334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4000[2] = 
{
	ViewBehaviour_t3242029334::get_offset_of_objectDic_2(),
	ViewBehaviour_t3242029334::get_offset_of__view_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4001 = { sizeof (ViewUpdateBehaviour_t731634096), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4001[1] = 
{
	ViewUpdateBehaviour_t731634096::get_offset_of__v_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4002 = { sizeof (BaseResponder_t900286719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4002[2] = 
{
	BaseResponder_t900286719::get_offset_of_reciveCode_0(),
	BaseResponder_t900286719::get_offset_of_responderData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4003 = { sizeof (BaseSender_t3360968287), -1, sizeof(BaseSender_t3360968287_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4003[8] = 
{
	BaseSender_t3360968287_StaticFields::get_offset_of_senderIntervalDic_0(),
	BaseSender_t3360968287::get_offset_of_sendCode_1(),
	BaseSender_t3360968287::get_offset_of_hostId_2(),
	BaseSender_t3360968287::get_offset_of_needStatu_3(),
	BaseSender_t3360968287::get_offset_of_needCookie_4(),
	BaseSender_t3360968287::get_offset_of_sendInterval_5(),
	BaseSender_t3360968287::get_offset_of__net_6(),
	BaseSender_t3360968287::get_offset_of_cacheMessage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4004 = { sizeof (HttpHelper_t1025773281), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4005 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4006 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4007 = { sizeof (NetInfoData_t779613672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4007[6] = 
{
	NetInfoData_t779613672::get_offset_of_length_0(),
	NetInfoData_t779613672::get_offset_of_code_1(),
	NetInfoData_t779613672::get_offset_of_status_2(),
	NetInfoData_t779613672::get_offset_of_stream_3(),
	NetInfoData_t779613672::get_offset_of_source_4(),
	NetInfoData_t779613672::get_offset_of_serverTime_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4008 = { sizeof (NetStatus_t2582784024)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4008[10] = 
{
	NetStatus_t2582784024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4009 = { sizeof (NetManager_t1645111295), -1, sizeof(NetManager_t1645111295_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4009[18] = 
{
	NetManager_t1645111295_StaticFields::get_offset_of_debug_0(),
	0,
	NetManager_t1645111295_StaticFields::get_offset_of_reciveCookieKey_2(),
	NetManager_t1645111295_StaticFields::get_offset_of_reciveHeader_3(),
	NetManager_t1645111295_StaticFields::get_offset_of_sendCookieKey_4(),
	NetManager_t1645111295_StaticFields::get_offset_of_timeout_5(),
	NetManager_t1645111295_StaticFields::get_offset_of_busytime_6(),
	NetManager_t1645111295_StaticFields::get_offset_of_loginSender_7(),
	NetManager_t1645111295_StaticFields::get_offset_of_loginCache_8(),
	NetManager_t1645111295_StaticFields::get_offset_of_addressDic_9(),
	NetManager_t1645111295_StaticFields::get_offset_of_responderPackages_10(),
	NetManager_t1645111295_StaticFields::get_offset_of_netHeader_11(),
	NetManager_t1645111295_StaticFields::get_offset_of__curCookie_12(),
	NetManager_t1645111295_StaticFields::get_offset_of__serverTime_13(),
	NetManager_t1645111295_StaticFields::get_offset_of__clientTime_14(),
	0,
	0,
	NetManager_t1645111295_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4010 = { sizeof (AddressData_t523041859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4010[3] = 
{
	AddressData_t523041859::get_offset_of_id_0(),
	AddressData_t523041859::get_offset_of_ip_1(),
	AddressData_t523041859::get_offset_of_port_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4011 = { sizeof (CoreNotifyIndex_t374487434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4011[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4012 = { sizeof (EventDispatcher_t3647894359), -1, sizeof(EventDispatcher_t3647894359_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4012[2] = 
{
	EventDispatcher_t3647894359_StaticFields::get_offset_of__eventListenerDic_0(),
	EventDispatcher_t3647894359_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4013 = { sizeof (EventCallbackData_t2610731896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4013[4] = 
{
	EventCallbackData_t2610731896::get_offset_of_type_0(),
	EventCallbackData_t2610731896::get_offset_of_callback_1(),
	EventCallbackData_t2610731896::get_offset_of_enabled_2(),
	EventCallbackData_t2610731896::get_offset_of_portait_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4014 = { sizeof (GPSNotify_t1324481960), -1, sizeof(GPSNotify_t1324481960_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4014[5] = 
{
	GPSNotify_t1324481960_StaticFields::get_offset_of_startIndex_0(),
	GPSNotify_t1324481960_StaticFields::get_offset_of_GPS_UPDATE_1(),
	GPSNotify_t1324481960_StaticFields::get_offset_of_GPS_NOTALLOWED_2(),
	GPSNotify_t1324481960_StaticFields::get_offset_of_GPS_FAILED_3(),
	GPSNotify_t1324481960_StaticFields::get_offset_of_GPS_INIT_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4015 = { sizeof (GlobalNotify_t183697669), -1, sizeof(GlobalNotify_t183697669_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4015[13] = 
{
	GlobalNotify_t183697669_StaticFields::get_offset_of_startIndex_0(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_ERROR_1(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_LOAD_ERROR_2(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_CREATED_3(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_UPDATE_4(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_DESTRYED_5(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_DISPLAY_DESTRYED_6(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_DISPLAY_ENABLE_7(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_VIEW_DISPLAY_DISABLE_8(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_TV_INPUT_9(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_UI_OPEN_10(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_UI_CLOSE_11(),
	GlobalNotify_t183697669_StaticFields::get_offset_of_NET_STATUS_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4016 = { sizeof (TimerNotify_t1607951029), -1, sizeof(TimerNotify_t1607951029_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4016[4] = 
{
	TimerNotify_t1607951029_StaticFields::get_offset_of_startIndex_0(),
	TimerNotify_t1607951029_StaticFields::get_offset_of_TICK_1(),
	TimerNotify_t1607951029_StaticFields::get_offset_of_COMPLETE_2(),
	TimerNotify_t1607951029_StaticFields::get_offset_of_STATUS_CHANGE_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4017 = { sizeof (Bezier_t2470135765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4017[17] = 
{
	Bezier_t2470135765::get_offset_of_p0_0(),
	Bezier_t2470135765::get_offset_of_p1_1(),
	Bezier_t2470135765::get_offset_of_p2_2(),
	Bezier_t2470135765::get_offset_of_p3_3(),
	Bezier_t2470135765::get_offset_of_b0_4(),
	Bezier_t2470135765::get_offset_of_b1_5(),
	Bezier_t2470135765::get_offset_of_b2_6(),
	Bezier_t2470135765::get_offset_of_b3_7(),
	Bezier_t2470135765::get_offset_of_Ax_8(),
	Bezier_t2470135765::get_offset_of_Ay_9(),
	Bezier_t2470135765::get_offset_of_Az_10(),
	Bezier_t2470135765::get_offset_of_Bx_11(),
	Bezier_t2470135765::get_offset_of_By_12(),
	Bezier_t2470135765::get_offset_of_Bz_13(),
	Bezier_t2470135765::get_offset_of_Cx_14(),
	Bezier_t2470135765::get_offset_of_Cy_15(),
	Bezier_t2470135765::get_offset_of_Cz_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4018 = { sizeof (ByteArray_t3229692365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4018[4] = 
{
	ByteArray_t3229692365::get_offset_of__bytes_0(),
	ByteArray_t3229692365::get_offset_of_readOffset_1(),
	ByteArray_t3229692365::get_offset_of_writeOffset_2(),
	ByteArray_t3229692365::get_offset_of_count_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4019 = { sizeof (CallLaterUtil_t930640046), -1, sizeof(CallLaterUtil_t930640046_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4019[1] = 
{
	CallLaterUtil_t930640046_StaticFields::get_offset_of_dicCallback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4020 = { sizeof (laterCallback_t804133219), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4021 = { sizeof (FileTools_t1321438649), -1, sizeof(FileTools_t1321438649_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4021[1] = 
{
	FileTools_t1321438649_StaticFields::get_offset_of_packLevel_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4022 = { sizeof (ZIPFileReader_t1191727799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4022[7] = 
{
	ZIPFileReader_t1191727799::get_offset_of_data_0(),
	ZIPFileReader_t1191727799::get_offset_of_fileName_1(),
	ZIPFileReader_t1191727799::get_offset_of_fileFullName_2(),
	ZIPFileReader_t1191727799::get_offset_of_zs_3(),
	ZIPFileReader_t1191727799::get_offset_of_zn_4(),
	ZIPFileReader_t1191727799::get_offset_of_completed_5(),
	ZIPFileReader_t1191727799::get_offset_of__p_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4023 = { sizeof (FormatUtil_t1735336428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4023[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4024 = { sizeof (GPSUtil_t4263708531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4024[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4025 = { sizeof (ObjectPool_t2599189628), -1, sizeof(ObjectPool_t2599189628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4025[1] = 
{
	ObjectPool_t2599189628_StaticFields::get_offset_of_pool_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4026 = { sizeof (PathUtil_t3720089025), -1, sizeof(PathUtil_t3720089025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4026[7] = 
{
	PathUtil_t3720089025_StaticFields::get_offset_of_cfgExt_0(),
	PathUtil_t3720089025_StaticFields::get_offset_of_resExt_1(),
	PathUtil_t3720089025_StaticFields::get_offset_of_versionExt_2(),
	PathUtil_t3720089025_StaticFields::get_offset_of_versionMd5Ext_3(),
	PathUtil_t3720089025_StaticFields::get_offset_of_streamingUrl_4(),
	PathUtil_t3720089025_StaticFields::get_offset_of_peristentUrl_5(),
	PathUtil_t3720089025_StaticFields::get_offset_of_pathUrl_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4027 = { sizeof (RayUtil_t2340555042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4028 = { sizeof (StringUtil_t1862603664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4029 = { sizeof (TVInput_t280410716), -1, sizeof(TVInput_t280410716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4029[1] = 
{
	TVInput_t280410716_StaticFields::get_offset_of_currentCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4030 = { sizeof (TVKeyCode_t666327987)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4030[7] = 
{
	TVKeyCode_t666327987::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4031 = { sizeof (VectorUtil_t4169699629), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4032 = { sizeof (ZGPointerCallback_t2999669792), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4033 = { sizeof (ZGPointerEvent_t729856314), -1, sizeof(ZGPointerEvent_t729856314_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4033[16] = 
{
	ZGPointerEvent_t729856314_StaticFields::get_offset_of_currentObject_2(),
	ZGPointerEvent_t729856314_StaticFields::get_offset_of_allObject_3(),
	ZGPointerEvent_t729856314_StaticFields::get_offset_of_lastObject_4(),
	ZGPointerEvent_t729856314_StaticFields::get_offset_of_localPostion_5(),
	ZGPointerEvent_t729856314_StaticFields::get_offset_of_worldPostion_6(),
	ZGPointerEvent_t729856314_StaticFields::get_offset_of__ignoreBlock_7(),
	ZGPointerEvent_t729856314::get_offset_of_onPress_8(),
	ZGPointerEvent_t729856314::get_offset_of_onUp_9(),
	ZGPointerEvent_t729856314::get_offset_of_onClick_10(),
	ZGPointerEvent_t729856314::get_offset_of_onDragStart_11(),
	ZGPointerEvent_t729856314::get_offset_of_onDragMove_12(),
	ZGPointerEvent_t729856314::get_offset_of_onDragEnd_13(),
	ZGPointerEvent_t729856314::get_offset_of_pressPostion_14(),
	ZGPointerEvent_t729856314::get_offset_of_pressed_15(),
	ZGPointerEvent_t729856314::get_offset_of_dragStarted_16(),
	ZGPointerEvent_t729856314::get_offset_of_dragMovePostion_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4034 = { sizeof (AssetsUpdateStatus_t1375808363)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4034[2] = 
{
	AssetsUpdateStatus_t1375808363::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4035 = { sizeof (AssetsManager_t1015260537), -1, sizeof(AssetsManager_t1015260537_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4035[20] = 
{
	AssetsManager_t1015260537_StaticFields::get_offset_of__ftpServer_0(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_localVersionMd5_1(),
	AssetsManager_t1015260537_StaticFields::get_offset_of__rate_2(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_localVerFiles_3(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_serverVerTempFiles_4(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_updateFiles_5(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_loadingAssets_6(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_assetsConfigInfo_7(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_assetsLoadGroup_8(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_loadDataDic_9(),
	AssetsManager_t1015260537_StaticFields::get_offset_of__groupIndex_10(),
	AssetsManager_t1015260537_StaticFields::get_offset_of__ready_11(),
	AssetsManager_t1015260537_StaticFields::get_offset_of__assetsReadyHandler_12(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_13(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_14(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_15(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_16(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_17(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_18(),
	AssetsManager_t1015260537_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4036 = { sizeof (AssetLoadData_t599816848), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4036[8] = 
{
	AssetLoadData_t599816848::get_offset_of_assetName_0(),
	AssetLoadData_t599816848::get_offset_of_tag_1(),
	AssetLoadData_t599816848::get_offset_of_deployAssets_2(),
	AssetLoadData_t599816848::get_offset_of_groupId_3(),
	AssetLoadData_t599816848::get_offset_of_oneComplete_4(),
	AssetLoadData_t599816848::get_offset_of_groupComplete_5(),
	AssetLoadData_t599816848::get_offset_of_complete_6(),
	AssetLoadData_t599816848::get_offset_of_ld_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4037 = { sizeof (LoadManager_t3558014046), -1, sizeof(LoadManager_t3558014046_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4037[9] = 
{
	LoadManager_t3558014046_StaticFields::get_offset_of__inst_0(),
	LoadManager_t3558014046::get_offset_of_maxLoad_1(),
	LoadManager_t3558014046::get_offset_of_loadingLst_2(),
	LoadManager_t3558014046::get_offset_of_waiteLst_3(),
	LoadManager_t3558014046::get_offset_of_recordPath_4(),
	LoadManager_t3558014046::get_offset_of_loadedCache_5(),
	LoadManager_t3558014046::get_offset_of_cacheResPath_6(),
	LoadManager_t3558014046::get_offset_of_loadOneCallbacks_7(),
	LoadManager_t3558014046::get_offset_of_loadMultiCallbacks_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4038 = { sizeof (UrlLoader_t4028468321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4038[4] = 
{
	UrlLoader_t4028468321::get_offset_of_w_0(),
	UrlLoader_t4028468321::get_offset_of_path_1(),
	UrlLoader_t4028468321::get_offset_of_portrait_2(),
	UrlLoader_t4028468321::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4039 = { sizeof (AssetData_t303473330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4039[2] = 
{
	AssetData_t303473330::get_offset_of_completeCalls_0(),
	AssetData_t303473330::get_offset_of_tags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4040 = { sizeof (AssetListData_t336736458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4040[4] = 
{
	AssetListData_t336736458::get_offset_of_waitForLoadLst_0(),
	AssetListData_t336736458::get_offset_of_completeCall_1(),
	AssetListData_t336736458::get_offset_of_dataLst_2(),
	AssetListData_t336736458::get_offset_of_tagLst_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4041 = { sizeof (LoadData_t4179347895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4041[10] = 
{
	LoadData_t4179347895::get_offset_of_fileName_0(),
	LoadData_t4179347895::get_offset_of_fileExt_1(),
	LoadData_t4179347895::get_offset_of_filePath_2(),
	LoadData_t4179347895::get_offset_of_assetBundle_3(),
	LoadData_t4179347895::get_offset_of_bytesData_4(),
	LoadData_t4179347895::get_offset_of_text_5(),
	LoadData_t4179347895::get_offset_of_texture_6(),
	LoadData_t4179347895::get_offset_of_isError_7(),
	LoadData_t4179347895::get_offset_of_errorMsg_8(),
	LoadData_t4179347895::get_offset_of_tag_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4042 = { sizeof (HttpUtil_t332077372), -1, sizeof(HttpUtil_t332077372_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4042[4] = 
{
	HttpUtil_t332077372_StaticFields::get_offset_of__instance_0(),
	HttpUtil_t332077372::get_offset_of_address_1(),
	HttpUtil_t332077372::get_offset_of_netChannel_2(),
	HttpUtil_t332077372::get_offset_of__connected_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4043 = { sizeof (RemoteRequest_t2051852686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4043[2] = 
{
	RemoteRequest_t2051852686::get_offset_of_w_0(),
	RemoteRequest_t2051852686::get_offset_of_enabled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4044 = { sizeof (NetUtil_t1501759694), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4045 = { sizeof (SocketUtil_t1925728610), -1, sizeof(SocketUtil_t1925728610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4045[8] = 
{
	SocketUtil_t1925728610_StaticFields::get_offset_of__socketInsDic_0(),
	SocketUtil_t1925728610::get_offset_of_address_1(),
	SocketUtil_t1925728610::get_offset_of_tcp_2(),
	SocketUtil_t1925728610::get_offset_of_workStream_3(),
	SocketUtil_t1925728610::get_offset_of_readCacheData_4(),
	SocketUtil_t1925728610::get_offset_of_castCacheData_5(),
	SocketUtil_t1925728610::get_offset_of_currentReciveBytes_6(),
	SocketUtil_t1925728610::get_offset_of__connected_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4046 = { sizeof (StateObject_t3201166400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4046[3] = 
{
	StateObject_t3201166400::get_offset_of_client_0(),
	0,
	StateObject_t3201166400::get_offset_of_buffer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4047 = { sizeof (TimeData_t3443309391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4047[12] = 
{
	TimeData_t3443309391::get_offset_of_id_0(),
	TimeData_t3443309391::get_offset_of_totalTime_1(),
	TimeData_t3443309391::get_offset_of_lastTime_2(),
	TimeData_t3443309391::get_offset_of_currentTime_3(),
	TimeData_t3443309391::get_offset_of__status_4(),
	TimeData_t3443309391::get_offset_of_tickInterval_5(),
	TimeData_t3443309391::get_offset_of_tickTimes_6(),
	TimeData_t3443309391::get_offset_of_baseOnServer_7(),
	TimeData_t3443309391::get_offset_of_startTimeOnServer_8(),
	TimeData_t3443309391::get_offset_of_isLoop_9(),
	TimeData_t3443309391::get_offset_of_loopTimes_10(),
	TimeData_t3443309391::get_offset_of_tag_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4048 = { sizeof (TimeStatus_t1347902738)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4048[4] = 
{
	TimeStatus_t1347902738::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4049 = { sizeof (TimeFormatUtil_t4276390442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4049[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4050 = { sizeof (TimerManager_t1673020246), -1, sizeof(TimerManager_t1673020246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4050[2] = 
{
	TimerManager_t1673020246_StaticFields::get_offset_of__updateBehaviour_0(),
	TimerManager_t1673020246_StaticFields::get_offset_of__dic_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4051 = { sizeof (UIManager_t2289068527), -1, sizeof(UIManager_t2289068527_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4051[13] = 
{
	UIManager_t2289068527_StaticFields::get_offset_of__layers_0(),
	UIManager_t2289068527_StaticFields::get_offset_of_listHistoryVIew_1(),
	UIManager_t2289068527_StaticFields::get_offset_of__closedUIDic_2(),
	UIManager_t2289068527_StaticFields::get_offset_of__openUIDic_3(),
	UIManager_t2289068527_StaticFields::get_offset_of__root_4(),
	UIManager_t2289068527_StaticFields::get_offset_of__esy_5(),
	UIManager_t2289068527_StaticFields::get_offset_of__uiCamera_6(),
	UIManager_t2289068527_StaticFields::get_offset_of__uiScreen_7(),
	UIManager_t2289068527_StaticFields::get_offset_of__uiScaler_8(),
	UIManager_t2289068527_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_9(),
	UIManager_t2289068527_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_10(),
	UIManager_t2289068527_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_11(),
	UIManager_t2289068527_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4052 = { sizeof (UILayer_t1264183386)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4052[5] = 
{
	UILayer_t1264183386::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4053 = { sizeof (UIUtil_t3574532613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4054 = { sizeof (ZGUIEvent_t983099765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4054[7] = 
{
	ZGUIEvent_t983099765::get_offset_of_onClick_4(),
	ZGUIEvent_t983099765::get_offset_of_onPress_5(),
	ZGUIEvent_t983099765::get_offset_of_onUp_6(),
	ZGUIEvent_t983099765::get_offset_of_onSelect_7(),
	ZGUIEvent_t983099765::get_offset_of_onUpdateSelecte_8(),
	ZGUIEvent_t983099765::get_offset_of_onEnter_9(),
	ZGUIEvent_t983099765::get_offset_of_onExit_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4055 = { sizeof (DOTweenAnimation_t3459117967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4055[28] = 
{
	DOTweenAnimation_t3459117967::get_offset_of_delay_13(),
	DOTweenAnimation_t3459117967::get_offset_of_duration_14(),
	DOTweenAnimation_t3459117967::get_offset_of_easeType_15(),
	DOTweenAnimation_t3459117967::get_offset_of_easeCurve_16(),
	DOTweenAnimation_t3459117967::get_offset_of_loopType_17(),
	DOTweenAnimation_t3459117967::get_offset_of_loops_18(),
	DOTweenAnimation_t3459117967::get_offset_of_id_19(),
	DOTweenAnimation_t3459117967::get_offset_of_isRelative_20(),
	DOTweenAnimation_t3459117967::get_offset_of_isFrom_21(),
	DOTweenAnimation_t3459117967::get_offset_of_isIndependentUpdate_22(),
	DOTweenAnimation_t3459117967::get_offset_of_autoKill_23(),
	DOTweenAnimation_t3459117967::get_offset_of_isActive_24(),
	DOTweenAnimation_t3459117967::get_offset_of_isValid_25(),
	DOTweenAnimation_t3459117967::get_offset_of_target_26(),
	DOTweenAnimation_t3459117967::get_offset_of_animationType_27(),
	DOTweenAnimation_t3459117967::get_offset_of_autoPlay_28(),
	DOTweenAnimation_t3459117967::get_offset_of_endValueFloat_29(),
	DOTweenAnimation_t3459117967::get_offset_of_endValueV3_30(),
	DOTweenAnimation_t3459117967::get_offset_of_endValueColor_31(),
	DOTweenAnimation_t3459117967::get_offset_of_endValueString_32(),
	DOTweenAnimation_t3459117967::get_offset_of_endValueRect_33(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalBool0_34(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalFloat0_35(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalInt0_36(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalRotationMode_37(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalScrambleMode_38(),
	DOTweenAnimation_t3459117967::get_offset_of_optionalString_39(),
	DOTweenAnimation_t3459117967::get_offset_of__playCount_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4056 = { sizeof (DOTweenAnimationExtensions_t980608231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4057 = { sizeof (ARBuilder_t3904264120), -1, sizeof(ARBuilder_t3904264120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4057[6] = 
{
	ARBuilder_t3904264120_StaticFields::get_offset_of_instance_0(),
	ARBuilder_t3904264120::get_offset_of_CameraDeviceBehaviours_1(),
	ARBuilder_t3904264120::get_offset_of_ARCameraBehaviours_2(),
	ARBuilder_t3904264120::get_offset_of_ImageTrackerBehaviours_3(),
	ARBuilder_t3904264120::get_offset_of_ObjectTrackerBehaviours_4(),
	ARBuilder_t3904264120::get_offset_of_RecorderBehaviour_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4058 = { sizeof (ARCameraBehaviour_t1254405434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4059 = { sizeof (ARSceneBehaviour_t8608146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4060 = { sizeof (ARSceneTrackerBehaviour_t3701728442), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4061 = { sizeof (CameraDeviceBehaviour_t208736500), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4062 = { sizeof (CloudRecognizerBehaviour_t3755081683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4063 = { sizeof (EasyARBehaviour_t2785366930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4063[2] = 
{
	EasyARBehaviour_t2785366930::get_offset_of_Key_2(),
	EasyARBehaviour_t2785366930::get_offset_of_initialized_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4064 = { sizeof (ImageTargetBehaviour_t4107554070), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4065 = { sizeof (ImageTrackerBehaviour_t3494472134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4066 = { sizeof (ObjectTargetBehaviour_t3508296096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4067 = { sizeof (ObjectTrackerBehaviour_t3994302515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4068 = { sizeof (QRCodeScannerBehaviour_t2595137119), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4069 = { sizeof (RealityPlaneBehaviour_t4036907641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4070 = { sizeof (RecorderBehaviour_t1084034177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4071 = { sizeof (RenderCameraBehaviour_t1757081391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4072 = { sizeof (VideoPlayerBehaviour_t1939602789), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4073 = { sizeof (Cube_t2597235108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4073[1] = 
{
	Cube_t2597235108::get_offset_of_Renderer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4074 = { sizeof (Rainbow_t943460947), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4075 = { sizeof (Recorder_t3584992659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4075[14] = 
{
	Recorder_t3584992659::get_offset_of_Camera_2(),
	Recorder_t3584992659::get_offset_of_Canvas_3(),
	Recorder_t3584992659::get_offset_of_Width_4(),
	Recorder_t3584992659::get_offset_of_Height_5(),
	Recorder_t3584992659::get_offset_of_FramesPerSecond_6(),
	Recorder_t3584992659::get_offset_of_MaxDuration_7(),
	Recorder_t3584992659::get_offset_of_CaptureUI_8(),
	Recorder_t3584992659::get_offset_of_MasterPalette_9(),
	Recorder_t3584992659::get_offset_of_Status_10(),
	Recorder_t3584992659::get_offset_of_Progress_11(),
	Recorder_t3584992659::get_offset_of_AnimatedImage_12(),
	Recorder_t3584992659::get_offset_of__duration_13(),
	Recorder_t3584992659::get_offset_of__textures_14(),
	Recorder_t3584992659::get_offset_of_U3CBinaryU3Ek__BackingField_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4076 = { sizeof (U3CRecordU3Ec__Iterator0_t158257634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4076[6] = 
{
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U3CintervalU3E__0_1(),
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U24this_2(),
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U24current_3(),
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U24disposing_4(),
	U3CRecordU3Ec__Iterator0_t158257634::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4077 = { sizeof (U3CEncodeU3Ec__Iterator1_t1708487224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4077[8] = 
{
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U3CstopwatchU3E__0_0(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U3CframesU3E__0_1(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U3CgifU3E__0_2(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U24this_3(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U24current_4(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U24disposing_5(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U24PC_6(),
	U3CEncodeU3Ec__Iterator1_t1708487224::get_offset_of_U24locvar0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4078 = { sizeof (U3CEncodeU3Ec__AnonStorey2_t1177982002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4078[2] = 
{
	U3CEncodeU3Ec__AnonStorey2_t1177982002::get_offset_of_encodeProgress_0(),
	U3CEncodeU3Ec__AnonStorey2_t1177982002::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4079 = { sizeof (NativeShare_t4027546635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4079[7] = 
{
	NativeShare_t4027546635::get_offset_of_subject_0(),
	NativeShare_t4027546635::get_offset_of_text_1(),
	NativeShare_t4027546635::get_offset_of_title_2(),
	NativeShare_t4027546635::get_offset_of_targetPackage_3(),
	NativeShare_t4027546635::get_offset_of_targetClass_4(),
	NativeShare_t4027546635::get_offset_of_files_5(),
	NativeShare_t4027546635::get_offset_of_mimes_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4080 = { sizeof (AnimatedImage_t455440388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4080[1] = 
{
	AnimatedImage_t455440388::get_offset_of_Gif_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4081 = { sizeof (U3CAnimateU3Ec__Iterator0_t3536498717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4081[8] = 
{
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_gif_0(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_index_1(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U3CtextureU3E__0_2(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U3CdelayU3E__0_3(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U24this_4(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U24current_5(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U24disposing_6(),
	U3CAnimateU3Ec__Iterator0_t3536498717::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4082 = { sizeof (Converter_t537948199), -1, sizeof(Converter_t537948199_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4082[3] = 
{
	Converter_t537948199_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	Converter_t537948199_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	Converter_t537948199_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4083 = { sizeof (ConvertTo8BitsExample_t690642745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4083[6] = 
{
	ConvertTo8BitsExample_t690642745::get_offset_of_Source_5(),
	ConvertTo8BitsExample_t690642745::get_offset_of_Converted666_6(),
	ConvertTo8BitsExample_t690642745::get_offset_of_Converted676_7(),
	ConvertTo8BitsExample_t690642745::get_offset_of_Converted685_8(),
	ConvertTo8BitsExample_t690642745::get_offset_of_Converted884_9(),
	ConvertTo8BitsExample_t690642745::get_offset_of_ConvertedGrayscale_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4084 = { sizeof (DecodeExample_t722762867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4084[1] = 
{
	DecodeExample_t722762867::get_offset_of_AnimatedImage_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4085 = { sizeof (DecodeParallelExample_t3725552698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4085[2] = 
{
	DecodeParallelExample_t3725552698::get_offset_of_AnimatedImage_5(),
	DecodeParallelExample_t3725552698::get_offset_of_ProgressFill_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4086 = { sizeof (U3CStartU3Ec__Iterator0_t2611976390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4086[8] = 
{
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U3CbytesU3E__0_0(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U3CframesU3E__0_1(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U3CgifU3E__0_2(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U24this_3(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U24current_4(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U24disposing_5(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U24PC_6(),
	U3CStartU3Ec__Iterator0_t2611976390::get_offset_of_U24locvar0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4087 = { sizeof (U3CStartU3Ec__AnonStorey1_t3509629578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4087[2] = 
{
	U3CStartU3Ec__AnonStorey1_t3509629578::get_offset_of_decodeProgress_0(),
	U3CStartU3Ec__AnonStorey1_t3509629578::get_offset_of_U3CU3Ef__refU240_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4088 = { sizeof (DecodeProgressExample_t3602730391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4088[2] = 
{
	DecodeProgressExample_t3602730391::get_offset_of_AnimatedImage_5(),
	DecodeProgressExample_t3602730391::get_offset_of_ProgressFill_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4089 = { sizeof (U3CStartU3Ec__Iterator0_t2949540293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4089[12] = 
{
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CbytesU3E__0_0(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CiteratorU3E__0_1(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CiteratorSizeU3E__0_2(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CframesU3E__0_3(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CindexU3E__0_4(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U24locvar0_5(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CframeU3E__1_6(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U3CgifU3E__0_7(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U24this_8(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U24current_9(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U24disposing_10(),
	U3CStartU3Ec__Iterator0_t2949540293::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4090 = { sizeof (DownloadExample_t1602624778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4090[3] = 
{
	DownloadExample_t1602624778::get_offset_of_Url_5(),
	DownloadExample_t1602624778::get_offset_of_AnimatedImage_6(),
	DownloadExample_t1602624778::get_offset_of_ProgressFill_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4091 = { sizeof (U3CStartU3Ec__Iterator0_t1321773502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4091[12] = 
{
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CwwwU3E__0_0(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CiteratorU3E__0_1(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CiteratorSizeU3E__0_2(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CframesU3E__0_3(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CindexU3E__0_4(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U24locvar0_5(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CframeU3E__1_6(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U3CgifU3E__0_7(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U24this_8(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U24current_9(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U24disposing_10(),
	U3CStartU3Ec__Iterator0_t1321773502::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4092 = { sizeof (EncodeExample_t3847581738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4092[2] = 
{
	EncodeExample_t3847581738::get_offset_of_Frames_5(),
	EncodeExample_t3847581738::get_offset_of_AnimatedImage_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4093 = { sizeof (EncodeParallelExample_t2335569659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4093[2] = 
{
	EncodeParallelExample_t2335569659::get_offset_of_AnimatedImage_5(),
	EncodeParallelExample_t2335569659::get_offset_of_ProgressFill_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4094 = { sizeof (EncodeProgressExample_t147745078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4094[2] = 
{
	EncodeProgressExample_t147745078::get_offset_of_AnimatedImage_5(),
	EncodeProgressExample_t147745078::get_offset_of_ProgressFill_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4095 = { sizeof (ExampleBase_t1710376396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4095[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4096 = { sizeof (PerformanceExample_t308899077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4096[2] = 
{
	PerformanceExample_t308899077::get_offset_of_AnimatedImage_5(),
	PerformanceExample_t308899077::get_offset_of__stopwatch_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4097 = { sizeof (PreviewExample_t1923997928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4097[1] = 
{
	PreviewExample_t1923997928::get_offset_of_Image_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4098 = { sizeof (Gif_t3235314179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4098[1] = 
{
	Gif_t3235314179::get_offset_of_Frames_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4099 = { sizeof (U3CDecodeU3Ec__AnonStorey2_t3433076517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4099[1] = 
{
	U3CDecodeU3Ec__AnonStorey2_t3433076517::get_offset_of_filterMode_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
