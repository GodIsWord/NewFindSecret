//
//  NSString+XBMD5.h
//  FindSecret
//
//  Created by yide zhang on 2018/9/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XBMD5)
#pragma mark - MD5加密 16位 大写
- (NSString *)MD5ForUpper16Bate;
#pragma mark - MD5加密 32位 大写
- (NSString *)MD5ForUpper32Bate;
#pragma mark - MD5加密 16位 小写
- (NSString *)MD5ForLower16Bate;
#pragma mark - MD5加密 32位 小写
- (NSString *)MD5ForLower32Bate;

@end
