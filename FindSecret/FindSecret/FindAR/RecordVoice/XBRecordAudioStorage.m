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

-(instancetype)shareInstance{
    
    static XBRecordAudioStorage *storage = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        storage = [[XBRecordAudioStorage alloc] init];
    });
    
    return storage;
    
}

+(NSString *)lastRecorderPath{
    
    
    
    return nil;
}

+(BOOL)removeAll{
    return YES;
}

+(BOOL)removeWithPath:(NSString *)path{
    
    return YES;
}

@end
