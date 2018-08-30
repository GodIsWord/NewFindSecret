//
//  XBUnitySubbviewManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBUnitySubbviewManager : NSObject

+(XBUnitySubbviewManager*) shareInstance;

+(void)showTakePhotoComplate:(void((^)(NSString *path)))block;

+(void)startSaomiao;
+(void)stopSaomiao;

#pragma mark -- unity回调
+(void)takePictureSuccess:(NSString *)path;
+(void)saomiaoSuccess:(NSString *)mesg;

@end
