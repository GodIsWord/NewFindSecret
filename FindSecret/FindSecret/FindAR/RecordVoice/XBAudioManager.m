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
#import "XBRecordAudioView.h"
#import "XBTimer.h"
#import "XBRecordAudioStorage.h"

@interface XBAudioManager()<XBPlayAudioDelegate,XBRecordAudioDelegate>

@property(nonatomic,strong) XBRecordAudio *recorder;
@property(nonatomic,strong) XBPlayAudio *player;
@property(nonatomic,strong) XBTimer *timer;
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
        _timer = [XBTimer timerWithTimeInterval:0.01 target:self selector:@selector(timerAction:) repeats:YES];
    }
    return self;
}
-(void)timerAction:(XBTimer*)timer{
    NSLog(@"timerAction:type=%d",_type);
    switch (_type) {
        case 0:
        {
            [XBRecordAudioView hidden];
        }
            break;
        case 1:
        {
            [XBRecordAudioView showWithVolume:self.recorder.currentVolume];
        }
            break;
        case 2:
        {
            [XBRecordAudioView showWithVolume:self.player.currentVolume];
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
    [self.player playWithContentOfURL:url error:nil];
    _type = 2;
}

-(void)stopPlay{
    [self.player stop];
    _type = 0;
}

-(NSString *)lastAudioPath{
    return [XBRecordAudioStorage lastRecorderPath];
}

#pragma mark -- record delegate

-(void)xbAudioRecorderDidFinishRecording:(XBRecordAudio *)recorder successfully:(BOOL)flag{
    //隐藏声音强度的view
    self.type = 0;
}

-(void)xbAudioRecorderEncodeErrorDidOccur:(XBRecordAudio *)recorder error:(NSError *)error{
    //隐藏声音强度的view
    self.type = 0;
}


#pragma mark -- play delegate
-(void)xbAudioPlayerDidFinishPlaying:(XBPlayAudio *)player successfully:(BOOL)flag{
    self.type = 0;
}
-(void)xbAudioPlayerDecodeErrorDidOccur:(XBPlayAudio *)player error:(NSError *)error{
    self.type = 0;
}
-(void)xbAudioPlayerBeginInteruption:(XBPlayAudio *)player{
    self.type = 0;
}
-(void)xbAudioPlayerEndInteruption:(XBPlayAudio *)player{
    self.type = 0;
}

@end




























