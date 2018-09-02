//
//  XBAudioManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "XBRecordAudioStorage.h"

@class XBAudioManager;

@protocol XBAudioManagerRecoderDelegate<NSObject>

@optional
-(void)xbAudioManagerEncodeErrorDidOccur:(XBAudioManager *)recorder error:(NSError *)error;
-(void)xbAudioManagerDidFinishRecording:(XBAudioManager *)recorder successfully:(BOOL)flag;

@end

@protocol XBAudioManagerPlayDelegate<NSObject>

@optional
//播放结束时执行的动作
- (void)xbAudioManagerPlayerDidFinishPlaying:(XBAudioManager*)player successfully:(BOOL)flag;
//解码错误执行的动作
- (void)xbAudioManagerPlayerDecodeErrorDidOccur:(XBAudioManager*)player error:(NSError *)error;
//处理中断的代码
- (void)xbAudioManagerPlayerBeginInteruption:(XBAudioManager*)player;
//处理中断结束的代码
- (void)xbAudioManagerPlayerEndInteruption:(XBAudioManager*)player;

@end

@interface XBAudioManager : NSObject

@property(nonatomic,weak) id<XBAudioManagerRecoderDelegate> recordDelegate;
@property(nonatomic,weak) id<XBAudioManagerPlayDelegate> playDelegate;

@property(nonatomic,assign) NSTimeInterval maxRecordDuration;


-(void)startRecord;

-(void)cancleRecord;

-(void)endRecord;

-(void)playAudioWithURL:(NSURL*)url;

-(void)stopPlay;

-(NSString*)lastAudioPath;

-(NSTimeInterval) lastAudioDuration;

-(NSTimeInterval) audioDurationWithPath:(nullable NSString*)path;

@end







