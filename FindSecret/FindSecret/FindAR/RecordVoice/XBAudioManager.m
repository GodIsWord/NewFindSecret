//
//  XBAudioManager.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBAudioManager.h"

#import "XBRecordAudio.h"
#import "XBPlayAudio.h"
#import "XBRecordAudioToastView.h"
#import "XBWeakProxy.h"
#import "XBRecordAudioStorage.h"

@interface XBAudioManager()<XBPlayAudioDelegate,XBRecordAudioDelegate>

@property(nonatomic,strong) XBRecordAudio *recorder;
@property(nonatomic,strong) XBPlayAudio *player;
@property(nonatomic,strong) NSTimer *timer;
@property(nonatomic,assign) int type;//0 隐藏 1 录音 2 播放声音

@end


@implementation XBAudioManager

-(void)dealloc{
    [_timer invalidate];
}
-(instancetype)init{
    self = [super init];
    if(self){
        _recorder = [XBRecordAudio new];
        _recorder.delegate = self;
        _player = [XBPlayAudio new];
        _player.delegate = self;
        _type = 0;
        _timer = [NSTimer scheduledTimerWithTimeInterval:0.01 target:self selector:@selector(timerAction:) userInfo:nil repeats:YES];
        [_timer setFireDate:[NSDate distantFuture]];
    }
    return self;
}

-(void)timerAction:(NSTimer*)timer{
    NSLog(@"timerAction");
    switch (_type) {
        case 0:
        {
            [XBRecordAudioToastView hidden];
            [self.timer setFireDate:[NSDate distantFuture]];
        }
            break;
        case 1:
        {
            [XBRecordAudioToastView showWithVolume:self.recorder.currentVolume];
            
        }
            break;
        case 2:
        {
            [XBRecordAudioToastView showWithVolume:self.player.currentVolume];
            NSLog(@"audioe duration:%f",[self.player duration]);
        }
            break;
            
        default:
            break;
    }
}

-(void)startRecord{
    if (_type==2) {
        NSLog(@"正在录音，不能播放");
        return;
    }
    [self.recorder start];
    _type = 1;
    [self.timer setFireDate:[NSDate distantPast]];
}

-(void)endRecord{
    [self.recorder stop];
    _type = 0;
}

-(void)playAudioWithURL:(NSURL*)url{
    if (_type==1) {
        NSLog(@"正在播放，不能录音");
        return;
    }
    if(!url || ![XBRecordAudioStorage fileExist:url.absoluteString]){
        return;
    }
    
    [self.player playWithContentOfURL:url error:nil];
    _type = 2;
    [self.timer setFireDate:[NSDate distantPast]];
}

-(void)stopPlay{
    [self.player stop];
    _type = 0;
}

-(NSString *)lastAudioPath{
    return [XBRecordAudioStorage lastRecorderPath];
}

-(NSTimeInterval) lastAudioDuration{
    return [self audioDurationWithPath:[self lastAudioPath]];
}

-(NSTimeInterval) audioDurationWithPath:(nullable NSString*)path{
    
    if(![XBRecordAudioStorage fileExist:path]) return 0;
    
    return [XBPlayAudio durationWithPath:path];
}

-(void)recordViewOKAction{
    [self endRecord];
}

static BOOL isCancleRecord = NO;

-(void)recordViewCancleAction{
    isCancleRecord = YES;
    [self.recorder cancel];
}

#pragma mark -- record delegate

-(void)xbAudioRecorderDidFinishRecording:(XBRecordAudio *)recorder successfully:(BOOL)flag{
    //隐藏声音强度的view
    if(!isCancleRecord){
        [XBRecordAudioStorage saveAudioWithDataPath:[XBRecordAudio recordPath]];
    }else{
        isCancleRecord = YES;
    }
    self.type = 0;
    if ([self.recordDelegate respondsToSelector:@selector(xbAudioManagerDidFinishRecording:successfully:)]) {
        [self.recordDelegate xbAudioManagerDidFinishRecording:self successfully:flag];
    }
}

-(void)xbAudioRecorderEncodeErrorDidOccur:(XBRecordAudio *)recorder error:(NSError *)error{
    //隐藏声音强度的view
    self.type = 0;
    if ([self.recordDelegate respondsToSelector:@selector(xbAudioManagerEncodeErrorDidOccur:error:)]) {
        [self.recordDelegate xbAudioManagerEncodeErrorDidOccur:self error:error];
    }
}


#pragma mark -- play delegate
-(void)xbAudioPlayerDidFinishPlaying:(XBPlayAudio *)player successfully:(BOOL)flag{
    self.type = 0;
    if ([self.playDelegate respondsToSelector:@selector(xbAudioManagerPlayerDidFinishPlaying:successfully:)]) {
        [self.playDelegate xbAudioManagerPlayerDidFinishPlaying:self successfully:flag];
    }
}
-(void)xbAudioPlayerDecodeErrorDidOccur:(XBPlayAudio *)player error:(NSError *)error{
    self.type = 0;
    if ([self.playDelegate respondsToSelector:@selector(xbAudioManagerEncodeErrorDidOccur:error:)]) {
        [self.playDelegate xbAudioManagerPlayerDecodeErrorDidOccur:self error:error];
    }
}
-(void)xbAudioPlayerBeginInteruption:(XBPlayAudio *)player{
    self.type = 0;
    if ([self.playDelegate respondsToSelector:@selector(xbAudioManagerPlayerBeginInteruption:)]) {
        [self.playDelegate xbAudioManagerPlayerBeginInteruption:self];
    }
}
-(void)xbAudioPlayerEndInteruption:(XBPlayAudio *)player{
    self.type = 0;
    if ([self.playDelegate respondsToSelector:@selector(xbAudioManagerPlayerEndInteruption:)]) {
        [self.playDelegate xbAudioManagerPlayerEndInteruption:self];
    }
}

@end




























