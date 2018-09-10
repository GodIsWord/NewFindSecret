//
//  XBiOSToARManager.h
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/11.
//
//


typedef enum {
    CamraDevicePositionFront=0,//摄像头前置
    CamraDevicePositionBack=1
    
}CamraDevicePosition;


#import <Foundation/Foundation.h>

@interface XBiOSToARManager : NSObject


+(void)startSaomiaoAR;

+(void)stopSaomiaoAR;
//拍照
+(void)takePhotograph;

//设置摄像头前置还是后置
+(void)setCameraPosition:(CamraDevicePosition)position;

//加载poi数据( 包含扫描权限获取 )
+(void)arResultShow:(NSString*)result;

+(void)showNearPeople;

+(void)showNearPoint;

@end






