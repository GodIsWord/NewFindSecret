//
//  XBUnitySaomiaoSubbViews.h
//  FindSecret
//
//  Created by yide zhang on 2018/8/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBUnitySaomiaoSubbViews : NSObject

+(XBUnitySaomiaoSubbViews *)shareInstace;

+(void)showWithSuperView:(UIView*)superView dismisComplate:(void((^)(void)))complate;
+(void)saomiaoSuccess:(NSString*)str;
+(void)dismissComplate:(void((^)(void)))complate;

@end
