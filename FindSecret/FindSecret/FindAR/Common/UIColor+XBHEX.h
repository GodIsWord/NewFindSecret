//
// Created by ZongzhuHe on 2018/3/15.
// Copyright (c) 2018 jiufu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ColorHead.h"

@interface UIColor (XBHEX)
/**
 * 根据str生成颜色
 * @param str red，yellow，#FFFFFF，
 * @return coloer
 */

+ (UIColor *)xb_colorFromString:(NSString *)str;


/**
 *根据str生成颜色 根据alpha空值透明度 透明度只限制在 str是3位和6位的字符串

 @param str 色值字符串 如果是六位字符串 要加#
 @param alpha 透明度
 @return 色值
 */
+ (UIColor *)xb_colorFromString:(NSString *)str alpha:(CGFloat)alpha;
@end
