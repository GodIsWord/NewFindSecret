//
// Created by 9f on 2018/9/1.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import "XBAVTools.h"
#import "CameraCapture.h"
#import <AVFoundation/AVFoundation.h>


@interface XBAVTools () <AVAudioPlayerDelegate>
@property (nonatomic, strong) NSMutableDictionary *playerRecord;
@end

@implementation XBAVTools {

}
+ (instancetype)sharedInstance {
    static XBAVTools *tools;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tools = [self new];
    });
    return tools;
}
- (instancetype)init
{
    self = [super init];
    if (self) {
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification:) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];
    }
    return self;
}
+ (CGFloat)mediaDurationWithPath:(NSString *)path {
    if (!path) return 0;
    NSDictionary *options = @{AVURLAssetPreferPreciseDurationAndTimingKey: @YES};
    AVURLAsset *audioAsset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:path] options:options];
    CMTime audioDuration = audioAsset.duration;
    NSTimeInterval audioDurationSeconds = CMTimeGetSeconds(audioDuration);
    return (CGFloat) audioDurationSeconds;
}
+ (BOOL)isPlayingWithPath:(NSString *)path {
   NSDictionary *item = [XBAVTools sharedInstance].playerRecord[path];
    if (item) {
        if (item[@"player"]) {
            id player = item[@"player"];
            if (player && [player isKindOfClass:(Class) AVAudioPlayer.self]) {
                return [player isPlaying];
            }
        }
        if (item[@"playerlayer"]) {
            id playerLayer = item[@"playerlayer"];
            if (playerLayer && [playerLayer isKindOfClass:(Class) AVPlayerLayer.self]) {
                return [(AVPlayerLayer *)playerLayer player].rate != 0;
            }
        }
    } else {
        return NO;
    }
}
+ (void)stopPlayingWithPath:(NSString *)path {
    NSDictionary *item = [XBAVTools sharedInstance].playerRecord[path];
    if (item) {
        if (item[@"player"]) {
            id player = item[@"player"];
            if (player && [player isKindOfClass:(Class) AVAudioPlayer.self]) {
                if ([player isPlaying]) {
                    [player stop];
                }
            }
        }
        if (item[@"playerlayer"]) {
            id playerLayer = item[@"playerlayer"];
            if (playerLayer && [playerLayer isKindOfClass:(Class) AVPlayerLayer.self]) {
                if ([(AVPlayerLayer *)playerLayer player].rate != 0) {
                    [[(AVPlayerLayer *)playerLayer player] pause];
                }
                [(AVPlayerLayer *)playerLayer setHidden:YES];
            }
        }
    }
}

+ (void)playAudioWithFilePath:(NSString *)path independent:(BOOL)independent completedHandle:(void (^)(NSError *error))completedHandle {
    
    if (independent) {
        [[XBAVTools sharedInstance] stopAllPlayer];
    }
    NSError *error;
    AVAudioPlayer *audioPlayer = [XBAVTools sharedInstance].playerRecord[path][@"player"];
    if (!audioPlayer) {
        audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:[NSURL URLWithString:path] error:&error];
        audioPlayer.delegate = [XBAVTools sharedInstance];
        if (error) {
            if (completedHandle) {
                completedHandle(error);
            }
            return;
        }

        NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
        dictionary[@"player"] = audioPlayer;
        dictionary[@"completedHandle"] = [completedHandle copy];
        [XBAVTools sharedInstance].playerRecord[path] = dictionary;
    }

    if ([audioPlayer isPlaying]) {
        return;
    } else if ([audioPlayer prepareToPlay]) {
        NSLog(@"%s", __func__);
        [audioPlayer play];
    }
}

+ (void)playVideoWithFilePath:(NSString *)path inView:(UIView *)view independent:(BOOL)independent completedHandle:(void (^)(NSError *error))completedHandle {
    
    if (independent) {
        [[XBAVTools sharedInstance] stopAllPlayer];
    }
    
    AVPlayerLayer *playerLayer = [XBAVTools sharedInstance].playerRecord[path][@"playerlayer"];
    if (playerLayer) {
        [playerLayer setHidden:NO];
        if (playerLayer.player.rate != 0) {
            NSLog(@"正在播放");
        }else {
            [[playerLayer player] play];
        }
        return;
    }
    if (!playerLayer) {
        AVPlayerItem *playerItem = [[AVPlayerItem alloc] initWithURL:[NSURL URLWithString:path]];
        [playerItem addObserver:[XBAVTools sharedInstance] forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
        AVPlayer *player = [[AVPlayer alloc] initWithPlayerItem:playerItem];
        playerLayer = [AVPlayerLayer playerLayerWithPlayer:player];
        playerLayer.frame = view.bounds;
        [view.layer addSublayer:playerLayer];
        [playerLayer setHidden:NO];
        
        NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
        dictionary[@"playerlayer"] = playerLayer;
        dictionary[@"completedHandle"] = [completedHandle copy];
        [XBAVTools sharedInstance].playerRecord[path] = dictionary;
    }
}

- (void)videoDidPlayToEndTimeNotification:(NSNotification *)notification {
    if ([notification.object isKindOfClass:AVPlayerItem.self]) {
        AVPlayerItem *object = notification.object;
        AVURLAsset *asset = (AVURLAsset *)object.asset;
        NSString *filePath = [asset URL].absoluteString;
        AVPlayerLayer *playerLayer = self.playerRecord[filePath][@"playerlayer"];
        if (playerLayer) {
            [playerLayer removeFromSuperlayer];
            [object removeObserver:self forKeyPath:@"status"];
            [self.playerRecord removeObjectForKey:filePath];
        }
    }
}
+ (void)stopAllPlayer {
    [[XBAVTools sharedInstance] stopAllPlayer];
}
- (void)stopAllPlayer {
    for (NSDictionary *item in self.playerRecord.allValues) {
        if (item[@"player"]) {
            id player = item[@"player"];
            if (player && [player isKindOfClass:(Class) AVAudioPlayer.self]) {
                if ([player isPlaying]) {
                    [player stop];
                }
            }
        }
        if (item[@"playerlayer"]) {
            id playerLayer = item[@"playerlayer"];
            if (playerLayer && [playerLayer isKindOfClass:(Class) AVPlayerLayer.self]) {
                if ([(AVPlayerLayer *)playerLayer player].rate != 0) {
                    [[(AVPlayerLayer *)playerLayer player] pause];
                }
                [[[(AVPlayerLayer *)playerLayer player] currentItem] removeObserver:self forKeyPath:@"status"];
                [playerLayer removeFromSuperlayer];
            }
        }
        
    }
    [self.playerRecord removeAllObjects];
}


- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(AVPlayerItem *)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context {
    if ([keyPath isEqualToString:@"status"]) {
        switch (object.status) {
            case AVPlayerItemStatusUnknown:
                NSLog(@"AVPlayerItemStatusUnknown");
                break;
            case AVPlayerItemStatusReadyToPlay: {
                NSLog(@"AVPlayerItemStatusReadyToPlay");
                AVURLAsset *asset = (AVURLAsset *)object.asset;
                NSString *filePath = [asset URL].absoluteString;
                AVPlayerLayer *playerLayer = self.playerRecord[filePath][@"playerlayer"];
                [playerLayer.player play];
                break;
            }
            case AVPlayerItemStatusFailed:
                NSLog(@"AVPlayerItemStatusFailed");
                break;
            default:
                break;
        }
        return;
    }
    return [super observeValueForKeyPath:keyPath ofObject:object change:change context:context];
    
}


#pragma mark - AVAudioPlayerDelegate

- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer *)player error:(NSError *__nullable)error {
    NSString *key = player.url.absoluteString;
    NSMutableDictionary *dictionary = self.playerRecord[key];
    void (^completedHandle)(NSError *error1) = dictionary[@"completedHandle"];
    if (completedHandle) {
        completedHandle(error);
    }
    [self.playerRecord removeObjectForKey:key];

}

- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player successfully:(BOOL)flag {
    NSLog(@"%s", __func__);
    NSString *key = player.url.absoluteString;
    NSMutableDictionary *dictionary = self.playerRecord[key];
    void (^completedHandle)(NSError *error1) = dictionary[@"completedHandle"];
    if (completedHandle) {
        completedHandle(nil);
    }
    [self.playerRecord removeObjectForKey:key];
}

- (NSMutableDictionary *)playerRecord {
    if (!_playerRecord) {
        _playerRecord = [NSMutableDictionary dictionary];
    }
    return _playerRecord;
}

#pragma mark - dealloc
- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
@end
