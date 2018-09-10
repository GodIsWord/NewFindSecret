//
//  XBARSaomiaoSubbViews.h
//  FindSecret
//
//  Created by yide zhang on 2018/8/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBARSaomiaoSubbViews : NSObject

+(XBARSaomiaoSubbViews *)shareInstace;

+(void)showWithSuperView:(UIView*)superView dismisComplate:(void((^)(void)))complate;
+(void)saomiaoSuccess:(NSString*)str;
+(void)dismissComplate:(void((^)(void)))complate;

@end
