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
    
    //    NSDictionary *dic = @{@"arHotData":@[@{@"type":@"3",@"color":@"#1B9AFF",@"font":@"xingkai",@"text":@"这是一本书",@"x":@0.7935188,@"y":@0.11574558,@"id":@709,@"height":@0.026068822,@"width":@0.19444445},@{@"duration":@3821,@"filePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/71aa7609b08043888a06dd7cb9bb2c05_20180903.mp3",@"type":@"4",@"x":@0.18569444,@"y":@0.45724708,@"id":@231,@"height":@0.06256517,@"width":@0.35740742},@{@"duration":@8898,@"filePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/ffa0945d36414fb997605f6b986e47e9_20180903.mp4",@"thumbFilePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/0e555cc41ca54d658a5480f0222d07cb_20180903.jpg",@"type":@"1",@"x":@0.87499994,@"y":@0.65224195,@"id":@1355,@"height":@0.2346194,@"width":@0.23425926}],@"markerImageData":@{@"height":@1066,@"width":@600,@"markerImagePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/46df3e76a55d414a922f0fee22082f6e_20180903.jpg"}};
//    NSDictionary *dic = @{@"arHotData":@[@{@"type":@"3",@"color":@"#1B9AFF",@"font":@"xingkai",@"text":@"这是一本书",@"x":@0.7935188,@"y":@0.11574558,@"id":@709,@"height":@0.026068822,@"width":@0.19444445}],@"markerImageData":@{@"height":@1066,@"width":@600,@"markerImagePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/46df3e76a55d414a922f0fee22082f6e_20180903.jpg"}};
    //    NSData *data = [NSJSONSerialization dataWithJSONObject:dic options:0 error:nil];
    //    NSString *str = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
//    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
//    NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
//    jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@"\n" withString:@""];
//    jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@" " withString:@""];
//    [iOSToUnityManager arResultShow:jsonStr];

//    NSDictionary *dic =@{@"flag":@1,@"data":@{@"arHotData":@[@{@"type":@"3",@"color":@"#1B9AFF",@"font":@"xingkai",@"text":@"这是一本书",@"x":@0.7935188,@"y":@0.11574558,@"id":@709,@"height":@0.026068822,@"width":@0.19444445}],
//                                              @"markerImageData":@{@"height":@1066,@"width":@600,@"markerImagePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/46df3e76a55d414a922f0fee22082f6e_20180903.jpg"}}};
    
    //此处应该先请求甲方权限接口 再进行ar数据请求，测试阶段 直接进行ar数据请求
    //1.进行扫描权限请求
    //2.进行ar数据请求
    NSLog(@"metaID:%@",metaID);
    
    NSData *data = [metaID dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    NSLog(@"metaID idc:%@",dic);
    [[HttpRequestServices sharedInstance] AFGETRequestHeaderAppanding:arSMPOIResources withParameters:dic encry:0 suceesBlock:^(NSDictionary *responseObject) {
        
        if(![responseObject[@"code"] isEqualToString:@"200"] && [(NSDictionary*)responseObject[@"data"] count]<=0){
            NSLog(@"msg 请求结果有问题 ：%@",responseObject[@"msg"]);
            return ;
        }
        
        NSDictionary *dic = @{@"data":responseObject[@"data"]};
        
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
        NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@"\n" withString:@""];
        jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@" " withString:@""];
        
        [iOSToUnityManager arResultShow:jsonStr];
        
    } failedBlock:^(NSError *error) {
        
    }];
}

+(void)saomiaoSuccess:(NSString *)mesg
{
    NSLog(@"saomiaoSuccess:%@",mesg);
    [XBUnitySaomiaoSubbViews saomiaoSuccess:mesg];
}

@end


















