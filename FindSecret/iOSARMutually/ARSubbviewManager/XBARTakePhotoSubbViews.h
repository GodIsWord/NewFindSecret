//
//  XBARTakePhotoSubbViews.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TakePhotoActionType) {
    TakePhotoActionTypeCancle,
    TakePhotoActionTypeOK,
    TakePhotoActionTypeFlapCamra,
};

#import <Foundation/Foundation.h>

@interface XBARTakePhotoSubbViews : NSObject

+(void)showWithSuperView:(UIView*)superView complate:(void((^)(TakePhotoActionType actionType)))block;

+(void)dismissWithSuperView:(UIView*)superView;

@end
