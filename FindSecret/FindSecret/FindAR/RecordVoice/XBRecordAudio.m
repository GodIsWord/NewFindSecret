//
//  XBRecordVoiceManager.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "XBRecordAudio.h"
#import <AVFoundation/AVFoundation.h>

@interface XBRecordAudio()<AVAudioRecorderDelegate>

@property (nonatomic,assign,readwrite) CGFloat duration;//录音时间
@property (nonatomic,assign,readwrite) CGFloat audioSize;//录音时间

@property (nonatomic,strong) AVAudioRecorder *audioRecorder;

@end

@implementation XBRecordAudio

- (AVAudioRecorder *)audioRecorder{
    if (!_audioRecorder) {
        //创建录音文件保存路径
        NSURL *url=[NSURL URLWithString:[self recordPath]];
        //创建录音格式设置
        NSDictionary *setting=[self getAudioSetting];
        //创建录音机
        NSError *error=nil;
        
        _audioRecorder=[[AVAudioRecorder alloc]initWithURL:url settings:setting error:&error];
        _audioRecorder.delegate=self;
        _audioRecorder.meteringEnabled=YES;//如果要监控声波则必须设置为YES
        if (error) {
            NSLog(@"创建录音机对象时发生错误，错误信息：%@",error.localizedDescription);
            return nil;
        }else{
            [_audioRecorder prepareToRecord];
        }
    }
    return _audioRecorder;
}
/**
 *  取得录音文件设置
 *
 *  @return 录音设置
 */
-(NSDictionary *)getAudioSetting{
    //LinearPCM 是iOS的一种无损编码格式,但是体积较为庞大
    //录音设置
    NSMutableDictionary *recordSettings = [[NSMutableDictionary alloc] init];
    //录音格式 无法使用
    [recordSettings setValue :[NSNumber numberWithInt:kAudioFormatLinearPCM] forKey: AVFormatIDKey];
    //采样率 11025 确保转换成mp3格式不失真
    [recordSettings setValue :[NSNumber numberWithFloat:11025.0] forKey: AVSampleRateKey];
    //通道数
    [recordSettings setValue :[NSNumber numberWithInt:2] forKey: AVNumberOfChannelsKey];
    //线性采样位数
    [recordSettings setValue :[NSNumber numberWithInt:8] forKey: AVLinearPCMBitDepthKey];
    //音频质量,采样质量
    [recordSettings setValue:[NSNumber numberWithInt:AVAudioQualityMedium] forKey:AVEncoderAudioQualityKey];
    
    return recordSettings;
}


/**
 @return 当前音量大小0-1
 */
-(double) currentVolume{

    [self.audioRecorder updateMeters];
    NSInteger count = self.audioRecorder.channelAssignments.count;
    double powerVoice = 0;
    for (int i=0; i<count; i++) {
        powerVoice += pow(10, (0.05 * [self.audioRecorder peakPowerForChannel:0]));
    }
    powerVoice /= count;
    
    float   level;
    float   minDecibels = -80.0f;
    
    if (powerVoice < minDecibels)
    {
        level = 0.0f;
    }
    else if (powerVoice >= 0.0f)
    {
        level = 1.0f;
    }
    else
    {
        float   root            = 2.0f;
        float   minAmp          = powf(10.0f, 0.05f * minDecibels);
        float   inverseAmpRange = 1.0f / (1.0f - minAmp);
        float   amp             = powf(10.0f, 0.05f * powerVoice);
        float   adjAmp          = (amp - minAmp) * inverseAmpRange;
        
        level = powf(adjAmp, 1.0f / root);
    }
    
    return powerVoice;
}

-(void)start{
    [self.audioRecorder record];
}

-(void)stop{
    [self.audioRecorder stop];
}

-(void)cancel{
    [self stop];
    [self.audioRecorder deleteRecording];
}

-(NSString*)recordPath{
    return [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject] stringByAppendingPathComponent:@"recorder.caf"];
}

-(void)playRecorder{
    
}

#pragma mark --delegate
-(void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)recorder error:(NSError *)error
{
    
}

-(void)audioRecorderDidFinishRecording:(AVAudioRecorder *)recorder successfully:(BOOL)flag
{
    
}








@end
