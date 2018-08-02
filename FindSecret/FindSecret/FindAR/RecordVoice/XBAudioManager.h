//
//  XBAudioManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XBAudioManager;

@protocol XBAudioManagerRecoderDelegate<NSObject>

@optional
-(void)XBAudioManagerEncodeErrorDidOccur:(XBAudioManager *)recorder error:(NSError *)error;
-(void)XBAudioManagerDidFinishRecording:(XBAudioManager *)recorder successfully:(BOOL)flag;

@end

@protocol XBAudioManagerPlayDelegate<NSObject>

@optional
//播放结束时执行的动作
- (void)XBAudioManagerPlayerDidFinishPlaying:(XBAudioManager*)player successfully:(BOOL)flag;
//解码错误执行的动作
- (void)XBAudioManagerPlayerDecodeErrorDidOccur:(XBAudioManager*)player error:(NSError *)error;
//处理中断的代码
- (void)XBAudioManagerPlayerBeginInteruption:(XBAudioManager*)player;
//处理中断结束的代码
- (void)XBAudioManagerPlayerEndInteruption:(XBAudioManager*)player;

@end

@interface XBAudioManager : NSObject

-(void)startRecord;

-(void)endRecord;

-(void)playAudioWithURL:(NSURL*)urlh;

-(void)stopPlay;

-(NSString*)lastAudioPath;

@end
