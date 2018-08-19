//
//  XBRecordAudioStorage.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBRecordAudioStorage : NSObject

+(NSString*)lastRecorderPath;

+(BOOL)removeAll;

+(BOOL)removeWithPath:(NSString*)path;

+(BOOL)saveAudioWithDataPath:(NSString*)path;

+(BOOL)fileExist:(NSString*)path;

@end
