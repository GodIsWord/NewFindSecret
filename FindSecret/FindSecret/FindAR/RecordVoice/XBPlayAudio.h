//
//  XBPlayAudio.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XBPlayAudio;

@protocol XBPlayAudioDelegate<NSObject>

@optional

//播放结束时执行的动作
- (void)xbAudioPlayerDidFinishPlaying:(XBPlayAudio*_Nullable)player successfully:(BOOL)flag;
//解码错误执行的动作
- (void)xbAudioPlayerDecodeErrorDidOccur:(XBPlayAudio*_Nullable)player error:(NSError *)error;
//处理中断的代码
- (void)xbAudioPlayerBeginInteruption:(XBPlayAudio*_Nullable)player;
//处理中断结束的代码
- (void)xbAudioPlayerEndInteruption:(XBPlayAudio*_Nullable)player;



@end

@interface XBPlayAudio : NSObject

@property (nonatomic,assign,readonly) NSTimeInterval duration;//录音时间
@property (nonatomic,assign,readonly) long audioSize;//录音文件大小
@property (nonatomic,assign,readonly) NSTimeInterval currentTime;//

@property (nonatomic,weak) id <XBPlayAudioDelegate> delegate;

@property (nonatomic, strong) NSURL * url;

- (void)playWithContentOfURL:(nonnull NSURL*)url error:(NSError*)error;
- (void)play;
- (void)stop;
- (void)pause;

/**
 @return 当前音量大小0-1
 */
-(double) currentVolume;


+(NSTimeInterval)durationWithPath:(nullable NSString*)path;


@end







