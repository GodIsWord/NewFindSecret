//
//  XBRecordAudioStorage.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordAudioStorage.h"

@interface XBRecordAudioStorage()

@property (nonatomic,strong) NSMutableArray *arrStorage;

@end


@implementation XBRecordAudioStorage

+(instancetype)shareInstance{
    
    static XBRecordAudioStorage *storage = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        storage = [[XBRecordAudioStorage alloc] init];
        storage.arrStorage = [NSMutableArray array];
    });
    
    return storage;
    
}

+(NSString *)lastRecorderPath{
    return [[[self shareInstance] arrStorage] lastObject];
}

+(BOOL)removeAll{
    return [self removeWithPath:[self recordAudioFolder]];
}

+(BOOL)removeWithPath:(NSString *)path{
    
    NSFileManager *manager = [NSFileManager defaultManager];
    if ([manager fileExistsAtPath:path]) {
        NSError *error = nil;
        [manager removeItemAtPath:path error:&error];
        if (!error && [[[self shareInstance] arrStorage] containsObject:path]) {
            [[[self shareInstance] arrStorage] removeObject:path];
            return YES;
        }
    }
    
    return NO;
}

+(BOOL)saveAudioWithDataPath:(NSString *)path{
    
    if (!path) return NO;
    
    NSFileManager *manager = [NSFileManager defaultManager];
    NSError *error;
    NSDate* date = [NSDate dateWithTimeIntervalSinceNow:0];
    NSTimeInterval time = [date timeIntervalSince1970];
    NSString *timeString = [NSString stringWithFormat:@"%.0f", time];
    NSString *strPath = [NSString stringWithFormat:@"%@/%@.caf",[self recordAudioFolder],timeString];
    BOOL isSucess = [manager createFileAtPath:strPath contents:[NSData dataWithContentsOfFile:path] attributes:nil];
    NSLog(@"error:%@",error);
    
    if (isSucess) {
        [[[self shareInstance] arrStorage] addObject:strPath];
    }
    
    return isSucess;
}

+(NSString*)documentPath{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

+(NSString*)recordAudioFolder{
    NSString *strPath = [[self documentPath] stringByAppendingPathComponent:@"recordAudioes"];
    if ([self createDirectoryPath:strPath]) {
        return strPath;
    }
    return nil;
}

+(BOOL)fileExist:(NSString*)path{
    if (!path) return NO;
    NSFileManager *manager = [NSFileManager defaultManager];
    return [manager fileExistsAtPath:path];
}


/**
 创建一个文件夹

 @param path 文件夹路径
 @return 是否成功
 */
+(BOOL)createDirectoryPath:(NSString*)path{
    if (!path) return NO;
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return [manager createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
    }
    return YES;
}

@end








