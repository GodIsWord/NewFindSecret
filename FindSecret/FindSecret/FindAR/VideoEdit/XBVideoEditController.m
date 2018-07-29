//
//  XBVideoEditController.m
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoEditController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMacroDefinition.h"
#import <objc/runtime.h>
#import "XBVideoIntervalChooseView.h"

#define kToolBarHeight 44.0f
#define kEditAreaViewHeight 60.0f

@interface XBVideoEditController () <XBVideoIntervalChooseViewDelegate>
@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) AVPlayerLayer *playerLayer;
@property (nonatomic, strong) XBVideoIntervalChooseView *editView;
@property (nonatomic, strong) UIToolbar *toolbar;
@property (nonatomic, assign) BOOL statusBarHidden;
@property (nonatomic, assign) BOOL viewDidAppear;
@property (nonatomic, strong) id playTimeObserver;
@property (nonatomic, strong) id playBoundaryTimeObserver;
@property (nonatomic, assign) CMTime startTime;
@property (nonatomic, assign) CMTime stopTime;

@end

@implementation XBVideoEditController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initialize];

}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.statusBarHidden = YES;
    [self setNeedsStatusBarAppearanceUpdate];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (self.player.rate == 0) {
        [self replayWhenViewDidAppear];
    }
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    self.statusBarHidden = NO;
    [self setNeedsStatusBarAppearanceUpdate];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    if (self.player.rate != 0) {
        [self.player pause];
    }
}

- (void)dealloc {
    [self invalidatePlay];
}

- (void)initialize {
    self.view.backgroundColor = [UIColor groupTableViewBackgroundColor];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    if (self.videoUrl.absoluteString.length == 0) {
        __weak typeof(self) wself = self;
        [self showAlertWithMessage:@"视频源出错,请重新选择" completion:^{
            [wself goBack];
        }];
        return;
    }
    [self setupSubViews];

    AVAudioSession *audioSession = [AVAudioSession sharedInstance];
    NSError *error;
    [audioSession setActive:YES error:&error];
    if (error) {
        NSLog(@"active error: %@", error);
    }
    [audioSession setCategory:AVAudioSessionCategoryPlayback error:&error];
    if (error) {
        NSLog(@"Category error: %@", error);
    }

    // MARK: 初始化 播放视图

    self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoUrl];
    [self.playerItem addObserver:self forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
    self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
    [self.player addObserver:self forKeyPath:@"rate" options:NSKeyValueObservingOptionNew context:nil];
    self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
    CGFloat scale = CGRectGetWidth(self.view.bounds) / CGRectGetHeight(self.view.bounds);
    CGRect playLayerFrame;
    playLayerFrame.origin.y = TOP_MARGIN + 8;
    playLayerFrame.size.height = self.editView.frame.origin.y - TOP_MARGIN - 8 - 8;
    playLayerFrame.size.width = playLayerFrame.size.height * scale;
    playLayerFrame.origin.x = (CGRectGetWidth(self.view.bounds) - playLayerFrame.size.width) / 2.0;
    self.playerLayer.frame = playLayerFrame;
    [self.view.layer addSublayer:self.playerLayer];
    
    
//    __weak typeof(self)WeakSelf = self;
    // 观察间隔, CMTime 为30分之一秒
//    self.playTimeObserver = [self.player addPeriodicTimeObserverForInterval:CMTimeMake(1, 24.0) queue:dispatch_get_main_queue() usingBlock:^(CMTime time) {
    
//        NSLog(@"current seconds :%f",CMTimeGetSeconds(time));
        
        
//        if (_touchMode != TouchPlayerViewModeHorizontal) {
//            // 获取 item 当前播放秒
//            float currentPlayTime = (double)item.currentTime.value/ item.currentTime.timescale;
//            // 更新slider, 如果正在滑动则不更新
//            if (_isSliding == NO) {
//                [WeakSelf updateVideoSlider:currentPlayTime];
//            }
//        } else {
//            return;
//        }
//    }];

}

- (void)setupSubViews {
    [self setupEditView];
    [self setupToolbar];
}

- (void)setupEditView {
    CGRect frame;
    frame.origin.x = 0;
    frame.origin.y = CGRectGetHeight(self.view.bounds) - BOTTOM_MARGIN - kToolBarHeight - kEditAreaViewHeight;
    frame.size.width = CGRectGetWidth(self.view.bounds);
    frame.size.height = kEditAreaViewHeight;
    self.editView = [[XBVideoIntervalChooseView alloc] initWithFrame:frame];
    self.editView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.2];
    [self.editView updateVideoWithUrl:self.videoUrl];
    self.editView.delegate = self;
    [self.view addSubview:self.editView];
}

- (void)setupToolbar {
    CGRect frame;
    self.toolbar = [[UIToolbar alloc] init];
    self.toolbar.barStyle = UIBarStyleBlack;
    frame.origin.x = 0;
    frame.origin.y = CGRectGetHeight(self.view.bounds) - BOTTOM_MARGIN - kToolBarHeight;
    frame.size.width = CGRectGetWidth(self.view.bounds);
    frame.size.height = kToolBarHeight;
    self.toolbar.frame = frame;
    [self.view addSubview:self.toolbar];
    UIBarButtonItem *cancelItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(goBack)];
    UIBarButtonItem *fixItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *doneItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(done)];
    [self.toolbar setItems:@[cancelItem, fixItem, doneItem] animated:NO];
}

//addBoundaryTimeObserverForTimes
- (void)playInBoundaryForm:(CMTime)fromTime to:(CMTime)toTime{
    self.startTime = fromTime;
    self.stopTime = toTime;
    self.isEidt = NO;
    if (self.playBoundaryTimeObserver) {
        [self.player removeTimeObserver:self.playBoundaryTimeObserver];
        self.playBoundaryTimeObserver = nil;
    }
    if (self.player.rate != 0) {
        [self.player pause];
    }
    [self.player seekToTime:self.startTime];
    [self.player play];
    __weak typeof(self)wself = self;
    self.playBoundaryTimeObserver = [self.player addBoundaryTimeObserverForTimes:@[[NSValue valueWithCMTime:self.stopTime]] queue:dispatch_get_main_queue() usingBlock:^{
        NSLog(@"从 %@ 开始播放 ---- %@ ",[NSValue valueWithCMTime:fromTime],[NSValue valueWithCMTime:toTime]);
        [wself.player pause];
        [wself.player seekToTime:wself.startTime];
        [wself.player play];
    }];

}

- (void)videoDidPlayToEndTimeNotification {
    [self replayWhenViewDidAppear];
}
- (void)invalidatePlay {
//    [self.player removeTimeObserver:self.playTimeObserver];
    if (self.playBoundaryTimeObserver) {
        [self.player removeTimeObserver:self.playBoundaryTimeObserver];
        self.playBoundaryTimeObserver = nil;
    }
    [self.player removeObserver:self forKeyPath:@"rate"];
    [self.player pause];
    [self.playerItem removeObserver:self forKeyPath:@"status"];
}

- (void)goBack {
    if (self.navigationController.topViewController == self && self.navigationController.viewControllers.firstObject != self) {
        [self.navigationController popViewControllerAnimated:YES];
    } else {
        UIViewController *vc = self.navigationController ?: self;
        if (vc.presentingViewController) {
            [vc dismissViewControllerAnimated:YES completion:nil];
        }
    }
}

- (void)done {
    NSLog(@"如果有回调的话");
}

- (void)replayWhenViewDidAppear {
    if (self.viewDidAppear && !self.isEidt) {
        [self.player seekToTime:self.startTime];
        [self.player play];
    }
}

- (BOOL)viewDidAppear {
    Ivar ivar = class_getInstanceVariable(object_getClass(self), "_viewControllerFlags");
    NSInteger state = *((NSInteger *) ((void *) &((char *) (__bridge void *) self)[ivar_getOffset(ivar)]));
    //@[@"disappeared",@"appearing",@"appeared",@"disappearing"];
    return (state & 3) == 2;
}

- (BOOL)prefersStatusBarHidden {
    return self.statusBarHidden;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation {
    return UIStatusBarAnimationSlide;
}

#pragma mark - XBVideoIntervalChooseViewDelegate

- (void)videoIntervalChooseViewEventEdittingBegan {
    self.isEidt = YES;
    [self.player pause];
}

- (void)videoIntervalChooseViewSeekToCMTime:(CMTime)time {
    [self.player seekToTime:time];
}

- (void)videoIntervalChooseViewEventEdittingEnded {
   
    
}
- (void)videoThumImagesDidLoad {
    NSLog(@"预览图截取完毕");
}
- (void)videoShouldPlayFrom:(CMTime)fromTime to:(CMTime)toTime{
    [self playInBoundaryForm:fromTime to:toTime];
}




#pragma mark - Observe

- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context {
    if ([keyPath isEqualToString:@"status"]) {
        switch (self.playerItem.status) {
            case AVPlayerItemStatusUnknown:
                NSLog(@"AVPlayerItemStatusUnknown");
                break;
            case AVPlayerItemStatusReadyToPlay: {
                NSLog(@"AVPlayerItemStatusReadyToPlay");
                break;
            }
            case AVPlayerItemStatusFailed:
                NSLog(@"AVPlayerItemStatusFailed");
                break;
            default:
                break;
        }
    }else if ([keyPath isEqualToString:@"rate"]) {
        NSLog(@"播放状态 ----- %@",change[NSKeyValueChangeNewKey]);
    }
}

#pragma mark - Alert

- (void)showAlertWithMessage:(NSString *)message completion:(void (^)(void))completion {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:message preferredStyle:UIAlertControllerStyleAlert];
    [alertController addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        if (completion) {
            completion();
        }
    }]];
    [self presentViewController:alertController animated:YES completion:nil];
}
@end
