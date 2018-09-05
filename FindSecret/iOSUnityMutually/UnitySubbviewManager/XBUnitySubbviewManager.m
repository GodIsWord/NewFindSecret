//
//  XBUnitySubbviewManager.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBUnitySubbviewManager.h"
#import "XBUnityTakePhotoSubbViews.h"
#import "UnityDelegateManager.h"
#import "iOSToUnityManager.h"
#import "XBUnitySaomiaoSubbViews.h"

#import "HttpRequestServices.h"

@interface XBUnitySubbviewManager()

@property(nonatomic,copy) void((^picturBlock)(NSString *));

@end

@implementation XBUnitySubbviewManager
-(void)dealloc
{
    self.picturBlock = nil;
}

+(XBUnitySubbviewManager *)shareInstance
{
    static XBUnitySubbviewManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [XBUnitySubbviewManager new];
    });
    return manager;
}

+(void)showUnityWindow
{
    [UnityDelegateManager startARWindow];
}
+(void)hiddenUnityWindow
{
    [UnityDelegateManager stopARWindow];
}
+(void)showTakePhotoComplate:(void ((^)(NSString *)))block
{
    [[self shareInstance] setPicturBlock:block];
    [self showUnityWindow];
    UIView *view = (UIView*)[UnityDelegateManager getUnityView];
    [XBUnityTakePhotoSubbViews showWithSuperView:view complate:^(TakePhotoActionType actionType) {
        switch (actionType) {
            case TakePhotoActionTypeOK:
                [self takePicture];
                break;
            case TakePhotoActionTypeCancle:
            {
                [self canclePicture];
            }
                break;
            case TakePhotoActionTypeFlapCamra:
                [self flapCamora];
                break;
        }
    }];
}
+(void)canclePicture
{
    [XBUnityTakePhotoSubbViews dismissWithSuperView:(UIView*)[UnityDelegateManager getUnityView]];
    [self hiddenUnityWindow];
}

#pragma mark -- ios to unity
+(void)takePicture
{
    [iOSToUnityManager takePhotograph];
}
+(void)flapCamora
{
    static int type = 1;
    [iOSToUnityManager setCameraPosition:type++];
    type = type % 2;
}
+(void)startSaomiao
{
    [self showUnityWindow];
    [iOSToUnityManager startSaomiaoAR];
    [XBUnitySaomiaoSubbViews showWithSuperView:(UIView*)[UnityDelegateManager getUnityView] dismisComplate:^{
        [self stopSaomiao];
    }];
}
+(void)stopSaomiao
{
    [self hiddenUnityWindow];
    [iOSToUnityManager stopSaomiaoAR];
}

//加载poi数据( 包含扫描权限获取 )
+(void)arResultShow:(NSString*)result
{
    [iOSToUnityManager arResultShow:result];
}

#pragma mark -- unity回调
+(void)takePictureSuccess:(NSString*)path
{
    NSLog(@"picture path:%@",path);
    [self canclePicture];
    if ([self shareInstance].picturBlock) {
        [self shareInstance].picturBlock(path);
        [self shareInstance].picturBlock = nil;
    }
}

/**
 云识别返回metaID 用来验证当前用户是不是可识别这张图片和场景
 
 @param metaID ar识别的ID 与用户ID 统一绑定 请求扫描权限
 */
+(void)arCloudSuccess:(NSString *)metaID
{
    if (metaID.length<=0) {
        return;
    }
    //此处应该先请求甲方权限接口 再进行ar数据请求，测试阶段 直接进行ar数据请求
    [[HttpRequestServices sharedInstance] AFGETRequestHeaderAppanding:arSMPOIResources withParameters:@{@"resId":metaID} encry:0 suceesBlock:^(NSDictionary *responseObject) {
        
    } failedBlock:^(NSError *error) {
        
    }];
}

+(void)saomiaoSuccess:(NSString *)mesg
{
    NSLog(@"saomiaoSuccess:%@",mesg);
    [XBUnitySaomiaoSubbViews saomiaoSuccess:mesg];
}

@end


















