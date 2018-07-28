//
//  XBRecordVoiceManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XBRecordAudio : NSObject

@property (nonatomic,assign) CGFloat maxDuration;//最大录音时间
@property (nonatomic,assign) CGFloat maxSize;//最大录音文件大小
@property (nonatomic,assign,readonly) CGFloat duration;//录音时间
@property (nonatomic,assign,readonly) CGFloat audioSize;//录音时间


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


/**
 播放录音
 */
-(void)playRecorder;


@end
