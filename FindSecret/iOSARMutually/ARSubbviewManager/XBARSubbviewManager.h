//
//  XBARSubbviewManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBARSubbviewManager : NSObject

+(XBARSubbviewManager*) shareInstance;

+(void)showTakePhotoComplate:(void((^)(NSString *path)))block;

+(void)showTakeARCardPhotoComplate:(void((^)(NSString *path)))block;

+(void)startSaomiao;
+(void)stopSaomiao;

+(void)showNearPeopleComplate:(void((^)(void)))block;

+(void)showNearPointComplate:(void((^)(void)))block;

#pragma mark -- unity回调
+(void)takePictureSuccess:(NSString *)path;

/**
 云识别返回metaID 用来验证当前用户是不是可识别这张图片和场景

 @param metaID ar识别的ID 与用户ID 统一绑定 请求扫描权限
 */
+(void)arCloudSuccess:(NSString*)metaID;


+(void)saomiaoSuccess:(NSString *)mesg;

@end
