//
//  XBiOSToARManager.m
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/11.
//
//

#import "XBiOSToARManager.h"

@implementation XBiOSToARManager

////拍照
+(void)takePhotograph
{
    UnitySendMessage("callUnity", [@"SceneSwitch" UTF8String], "1");
    UnitySendMessage("callUnity", [@"Photograph" UTF8String], "");
}
//设置摄像头前置还是后置
+(void)setCameraPosition:(CamraDevicePosition)position
{
    UnitySendMessage("callUnity", [@"FlipCamera" UTF8String], [[NSString stringWithFormat:@"%d",position] UTF8String]);
}
+(void)startSaomiaoAR
{
    UnitySendMessage("callUnity", [@"SceneSwitch" UTF8String], "2");
}
+(void)stopSaomiaoAR
{
    [self clearAR];
}

+(void)arResultShow:(NSString *)result
{
    UnitySendMessage("callUnity", [@"arResultShow" UTF8String], [result UTF8String]);
}

+(void)showNearPeople
{
    UnitySendMessage("callUnity", [@"SceneSwitch" UTF8String], "4");
}

+(void)showNearPoint
{
    UnitySendMessage("callUnity", [@"SceneSwitch" UTF8String], "3");
}

+(void)clearAR
{
    UnitySendMessage("callUnity", [@"SceneClear" UTF8String], "");
}

@end











