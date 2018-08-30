//
//  XBUnityTakePhotoSubbViews.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TakePhotoActionType) {
    TakePhotoActionTypeCancle,
    TakePhotoActionTypeOK,
};

#import <Foundation/Foundation.h>

@interface XBUnityTakePhotoSubbViews : NSObject

+(void)showTakePhotoViewBack:(UIView*)backView Complate:(void((^)(TakePhotoActionType actionType)))block;

@end
