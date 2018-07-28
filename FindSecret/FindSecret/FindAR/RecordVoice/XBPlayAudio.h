//
//  XBPlayAudio.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBPlayAudio : NSObject

@property (nonatomic,assign,readonly) NSTimeInterval duration;//录音时间
@property (nonatomic,assign,readonly) long audioSize;//录音文件大小

-(instancetype)initWithContentOfURL:(nonnull NSURL*)url error:(NSError*)error;

- (void)play;
- (void)stop;
- (void)pause;
- (void)resume;

@end
