//
//  XBARVisitCardSubbViews.h
//  FindSecret
//
//  Created by yide zhang on 2018/9/15.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TakeCardPhotoActionType) {
    TakeCardPhotoActionTypePicture,
    TakeCardPhotoActionTypeCancle,
    TakeCardPhotoActionTypeOK,
};

@interface XBARVisitCardSubbViews : NSObject

+(void)showWithSuperView:(UIView*)superView complate:(void((^)(TakeCardPhotoActionType actionType,NSString* path)))block;
+(void)setImageWithSuperView:(UIView*)superView path:(NSString *)path;

@end
