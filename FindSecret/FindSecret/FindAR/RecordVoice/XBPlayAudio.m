//
//  XBPlayAudio.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPlayAudio.h"
#import <AVFoundation/AVFoundation.h>

@interface XBPlayAudio()<AVAudioPlayerDelegate>

@property (nonatomic,strong) AVAudioPlayer *audioPlayer;

@property (nonatomic, assign) NSTimeInterval currentTime;

@property (nonatomic,assign,readwrite) NSTimeInterval duration;
@property (nonatomic,assign,readwrite) long audioSize;


@end

@implementation XBPlayAudio

-(instancetype)initWithContentOfURL:(NSURL *)url error:(NSError *)error{
    self = [super init];
    if (self) {
        _audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:url error:&error];
        if(!error) [_audioPlayer prepareToPlay];
        _audioPlayer.delegate = self;
    }
    return self;
}

-(CGFloat)duration{
    return self.audioPlayer.duration;
}

-(long)audioSize{
    return [self fileSize];
}

-(void)play{
    if (self.audioPlayer.isPlaying) {
        [self stop];
    }
    [self.audioPlayer play];
}

-(void)pause{
    self.currentTime = self.audioPlayer.currentTime;
    [self.audioPlayer pause];
}

-(void)resume{
    [self.audioPlayer playAtTime:self.currentTime];
}

-(void)stop{
    [self.audioPlayer stop];
}

/**
 @return 文件大小 k
 */
-(long)fileSize{
    NSString *strPath = self.audioPlayer.url.absoluteString;
    
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
#pragma mark --- delegate

- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer*)player successfully:(BOOL)flag{
    //播放结束时执行的动作
}
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer*)player error:(NSError *)error{
    //解码错误执行的动作
}
- (void)audioPlayerBeginInteruption:(AVAudioPlayer*)player{
    //处理中断的代码
}
- (void)audioPlayerEndInteruption:(AVAudioPlayer*)player{
    //处理中断结束的代码
}



@end
