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

@property (nonatomic,strong) AVAudioRecorder *audioRecorder;

@property (nonatomic,assign,readwrite) NSTimeInterval duration;//录音时间
@property (nonatomic,assign,readwrite) long audioSize;//录音文件大小
@property (nonatomic,assign,readwrite) double currentVolume;//当前音量大小 0-1之间

@end

@implementation XBRecordAudio

-(void)setMaxDuration:(CGFloat)maxDuration{
    _maxDuration = maxDuration;
    [self.audioRecorder recordForDuration:maxDuration];
}
-(NSTimeInterval)duration{
    if (self.audioRecorder.isRecording) {
        return self.audioRecorder.currentTime;
    }else{
        return _duration;
    }
}

-(long)audioSize{
    return [XBRecordAudio fileSize];
}

- (AVAudioRecorder *)audioRecorder{
    if (!_audioRecorder) {
        
        [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayAndRecord error: nil];

        
        //创建录音文件保存路径
        NSURL *url=[NSURL URLWithString:[XBRecordAudio recordPath]];
        //创建录音格式设置
        NSDictionary *setting=[self getAudioSetting];
        //创建录音机
        NSError *error = nil;
        
        _audioRecorder = [[AVAudioRecorder alloc]initWithURL:url settings:setting error:&error];
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
    [recordSettings setValue:@(kAudioFormatLinearPCM) forKey:AVFormatIDKey];
    //采样率 11025 确保转换成mp3格式不失真
    [recordSettings setValue:@(4410) forKey:AVSampleRateKey];
    //通道数
    [recordSettings setValue:@(2) forKey:AVNumberOfChannelsKey];
    //线性采样位数
    [recordSettings setValue:@(8) forKey:AVLinearPCMBitDepthKey];
    //音频质量,采样质量
    [recordSettings setValue:@(AVAudioQualityMax) forKey:AVEncoderAudioQualityKey];
    [recordSettings setValue:@(128000) forKey:AVEncoderBitRateKey];
    
    return recordSettings;
}

/**
 @return 当前音量大小0-1
 */
-(double) currentVolume{

    [self.audioRecorder updateMeters];
    double powerVoice = pow(10, (0.05 * [self.audioRecorder peakPowerForChannel:0]));
    
    float   level;
    float   minDecibels = -80.0f;
    
    if (powerVoice < minDecibels){
        level = 0.0f;
    }
    else if (powerVoice >= 0.0f){
        level = 1.0f;
    }
    else{
        float   root            = 2.0f;
        float   minAmp          = powf(10.0f, 0.05f * minDecibels);
        float   inverseAmpRange = 1.0f / (1.0f - minAmp);
        float   amp             = powf(10.0f, 0.05f * powerVoice);
        float   adjAmp          = (amp - minAmp) * inverseAmpRange;
        
        level = powf(adjAmp, 1.0f / root);
    }
    
    _currentVolume = powerVoice;
    
    return powerVoice;
}

-(void)start{
    if (self.audioRecorder.recording) {
        [self cancel];
    }
    [self.audioRecorder record];
}

-(void)stop{
    [self.audioRecorder stop];
}

-(void)cancel{
    [self stop];
    [self.audioRecorder deleteRecording];
}

+(NSString*)recordPath{
    return [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject] stringByAppendingPathComponent:@"recorder.caf"];
}

+(NSString *)audioPath{
    return [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject] stringByAppendingPathComponent:@"player.caf"];
}

/**
 @return 文件大小 k
 */
+(long)fileSize{
    
    NSString *strPath = [XBRecordAudio recordPath];
    
    NSFileManager *manager = [NSFileManager defaultManager];
    long long size = 0;
    if (![manager fileExistsAtPath:strPath]) {
        return size;
    }
    NSError *error = nil;
    NSDictionary *fileDic = [manager attributesOfItemAtPath:strPath error:&error];
    if (error) {
        NSLog(@"error:%@",error);
        return size;
    }
    size = [fileDic fileSize];
    
    return size/1024;
    
}

#pragma mark --delegate
//录音失败
-(void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)recorder error:(NSError *)error
{
    if ([self.delegate respondsToSelector:@selector(audioRecorderEncodeErrorDidOccur:error:)]) {
        [self.delegate audioRecorderEncodeErrorDidOccur:self error:error];
    }
}

-(void)audioRecorderDidFinishRecording:(AVAudioRecorder *)recorder successfully:(BOOL)flag
{
    self.duration = self.audioRecorder.currentTime;
    
    NSFileManager *manager = [NSFileManager defaultManager];
    NSError *error;
    [manager removeItemAtPath:[XBRecordAudio audioPath] error:&error];
    [manager createFileAtPath:[XBRecordAudio audioPath] contents:[NSData dataWithContentsOfFile:[XBRecordAudio recordPath]] attributes:nil];
    NSLog(@"flag:%d,error:%@",flag,error);
    
    if ([self.delegate respondsToSelector:@selector(audioRecorderDidFinishRecording:successfully:)]) {
        [self.delegate audioRecorderDidFinishRecording:self successfully:flag];
    }
}








@end
