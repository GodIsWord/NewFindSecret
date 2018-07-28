//
//  XBRecordVoiceManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XBRecordAudio;

@protocol XBRecordAudioDelegate<NSObject>

@optional
-(void)audioRecorderEncodeErrorDidOccur:(XBRecordAudio *)recorder error:(NSError *)error;
-(void)audioRecorderDidFinishRecording:(XBRecordAudio *)recorder successfully:(BOOL)flag;


@end

@interface XBRecordAudio : NSObject

@property (nonatomic,assign) NSTimeInterval maxDuration;//最大录音时间


@property (nonatomic,assign,readonly) NSTimeInterval duration;//录音时间
@property (nonatomic,assign,readonly) long audioSize;//录音文件大小

@property(assign, nullable) id<XBRecordAudioDelegate> delegate;


/**
 @return 录音音频文件地址
 */
+(NSString*)recordPath;

/**
 开始录音
 */
-(void)start;

/**
 停止录音
 */
-(void)stop;

/**
 取消录音
 */
-(void)cancel;

/**
 @return 当前音量大小 0-1之间
 */
-(double) currentVolume;




@end
