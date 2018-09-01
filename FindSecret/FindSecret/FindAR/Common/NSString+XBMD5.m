//
//  NSString+XBMD5.m
//  FindSecret
//
//  Created by yide zhang on 2018/9/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "NSString+XBMD5.h"

#import<CommonCrypto/CommonDigest.h>

@implementation NSString (XBMD5)
#pragma mark - MD5加密 16位 大写
- (NSString *)MD5ForUpper16Bate
{
    
    NSString *md5Str = [self MD5ForUpper32Bate];
    
    NSString *string;
    for (int i=0; i<24; i++) {
        string=[md5Str substringWithRange:NSMakeRange(8, 16)];
    }
    return string;
}
#pragma mark - MD5加密 32位 大写
- (NSString *)MD5ForUpper32Bate
{
    
    //要进行UTF8的转码
    const char* input = [self UTF8String];
    unsigned char result[CC_MD5_DIGEST_LENGTH];
    CC_MD5(input, (CC_LONG)strlen(input), result);
    
    NSMutableString *digest = [NSMutableString stringWithCapacity:CC_MD5_DIGEST_LENGTH * 2];
    for (NSInteger i = 0; i < CC_MD5_DIGEST_LENGTH; i++) {
        [digest appendFormat:@"%02X", result[i]];
    }
    
    return digest;
}
#pragma mark - MD5加密 16位 小写
- (NSString *)MD5ForLower16Bate
{
    return [[self MD5ForLower16Bate] lowercaseString];
}
#pragma mark - MD5加密 32位 小写
- (NSString *)MD5ForLower32Bate
{
    return [[self MD5ForUpper32Bate] lowercaseString];
}
@end
