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


typedef NS_ENUM(NSUInteger, XBVideoEditStatus) {
    XBVideoEditStatusLimit,
    XBVideoEditStatusEdit,
    XBVideoEditStatusConfirm
};

@interface XBVideoEditController () <XBVideoIntervalChooseViewDelegate>
@property (nonatomic, strong, readwrite) AVPlayerItem *playerItem;
@property (nonatomic, strong, readwrite) AVPlayer *player;
@property (nonatomic, strong, readwrite) AVPlayerLayer *playerLayer;
@property (nonatomic, strong) XBVideoIntervalChooseView *editView;


@property (nonatomic, assign) BOOL statusBarHidden;
@property (nonatomic, assign) BOOL viewDidAppear;
@property (nonatomic, strong) id playTimeObserver;
@property (nonatomic, strong) id playBoundaryTimeObserver;
@property (nonatomic, assign) CMTime startTime;
@property (nonatomic, assign) CMTime stopTime;
@property (nonatomic, assign) CMTime totalTime;

@property (nonatomic, assign) XBVideoEditStatus editStatus;

@property (nonatomic, strong) UIView *navigationBarView;
@property (nonatomic, strong) UIToolbar *confirmToolbar;
@property (nonatomic, assign) BOOL isExceedTheLimit;
@property (nonatomic, assign) BOOL isPlaying;
@property (nonatomic, strong) UIView *bottomBarView;
@property (nonatomic, strong) UIToolbar *editToolbar;
@end

@implementation XBVideoEditController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor blackColor];

    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];
    // 点击手势
    UITapGestureRecognizer *tapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(didClickedContentView:)];
    [self.view addGestureRecognizer:tapGestureRecognizer];

    // 容错
    if (self.videoUrl.absoluteString.length == 0) {
        __weak typeof(self) wSelf = self;
        [self showAlertWithMessage:@"视频源出错,请重新选择" completion:^{
            [wSelf goBack];
        }];
        return;
    }

    // 初始化
    self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoUrl];
    [self.playerItem addObserver:self forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
    self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
    [self.player addObserver:self forKeyPath:@"rate" options:NSKeyValueObservingOptionNew context:nil];
    self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
    [self.view.layer addSublayer:self.playerLayer];

    // 初始化全局的播放试图

    self.isExceedTheLimit ? [self updateSubViewsToLimitStatus] : [self updateSubViewsToEditStatus];


    // 状态栏
    [self.navigationBarView addSubview:self.confirmToolbar];
    [self.view addSubview:self.navigationBarView];

    // 底部工具栏
    [self.bottomBarView addSubview:self.editToolbar];
    [self.view addSubview:self.bottomBarView];

}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.statusBarHidden = YES;
    [self setNeedsStatusBarAppearanceUpdate];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (self.player.rate == 0 && self.editStatus != XBVideoEditStatusLimit) {
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

- (void)setVideoUrl:(NSURL *)videoUrl {
    _videoUrl = videoUrl;
    AVURLAsset *videoAsset = [AVURLAsset URLAssetWithURL:videoUrl options:@{AVURLAssetPreferPreciseDurationAndTimingKey: @(NO)}];
    // 保存帧率
    self.isExceedTheLimit = CMTimeGetSeconds(videoAsset.duration) > 10.0;
    self.totalTime = videoAsset.duration;
    self.startTime = CMTimeMake(0, videoAsset.duration.timescale);
    self.stopTime = videoAsset.duration;


}

- (void)didClickedContentView:(UITapGestureRecognizer *)tapGestureRecognizer {
    CGPoint point = [tapGestureRecognizer locationInView:tapGestureRecognizer.view];
    if (CGRectContainsPoint(self.playerLayer.frame, point)) {
        if (self.editStatus == XBVideoEditStatusLimit) {
            self.isPlaying = !self.isPlaying;
            self.isPlaying ? [self.player play] : [self.player pause];
        }
    }
}

- (void)updateSubViewsToLimitStatus {

    self.editStatus = XBVideoEditStatusLimit;

    // 更新状态栏
    self.navigationBarView.hidden = NO;

    UIBarButtonItem *back = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(goBack)];
    [back setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];
    
    UIBarButtonItem *fixItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *title = [[UIBarButtonItem alloc] initWithTitle:@"选择视频" style:UIBarButtonItemStylePlain target:nil action:nil];
    [title setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];
    UIBarButtonItem *fixItem1 = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *none = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFixedSpace target:nil action:nil];
    none.width = 42;

    [self.confirmToolbar setItems:@[back, fixItem, title, fixItem1, none] animated:NO];

    self.playerLayer.frame = self.view.bounds;

    self.startTime = CMTimeMake(0, self.totalTime.timescale);
    self.stopTime = self.totalTime;;
    self.isEidt = NO;

    self.isPlaying = NO;
    [self.player pause];
    [self.player seekToTime:kCMTimeZero toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];

    if (self.playTimeObserver) {
        [self.player removeTimeObserver:self.playTimeObserver];
        self.playTimeObserver = nil;

    }

    if (self.playBoundaryTimeObserver) {
        [self.player removeTimeObserver:self.playBoundaryTimeObserver];
        self.playBoundaryTimeObserver = nil;
    }


    if (_editView) {
        _editView.hidden = YES;
    }

    self.bottomBarView.hidden = NO;

    UIBarButtonItem *des = [[UIBarButtonItem alloc] initWithTitle:@"只能上传10秒内的视频" style:UIBarButtonItemStylePlain target:nil action:nil];
    [des setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];
    UIBarButtonItem *fixItem3 = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *edit = [[UIBarButtonItem alloc] initWithTitle:@"编辑" style:UIBarButtonItemStylePlain target:self action:@selector(updateSubViewsToEditStatus)];
    [edit setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];

    [self.editToolbar setItems:@[des, fixItem3, edit] animated:NO];
}

- (void)updateSubViewsToEditStatus {
    self.editStatus = XBVideoEditStatusEdit;

    self.navigationBarView.hidden = YES;


    if (!self.editView.superview) {
        [self.view addSubview:self.editView];
    }
    [self.editView updateVideoWithUrl:self.videoUrl];
    self.editView.delegate = self;
    self.editView.hidden = NO;


    CGRect playLayerFrame;
    CGFloat scale = CGRectGetWidth(self.view.bounds) / CGRectGetHeight(self.view.bounds);
    playLayerFrame.origin.y = TOP_MARGIN + 8;
    playLayerFrame.size.height = self.editView.frame.origin.y - TOP_MARGIN - 8 - 8;
    playLayerFrame.size.width = playLayerFrame.size.height * scale;
    playLayerFrame.origin.x = (CGFloat) ((CGRectGetWidth(self.view.bounds) - playLayerFrame.size.width) / 2.0);
    self.playerLayer.frame = playLayerFrame;


    self.bottomBarView.hidden = NO;
    UIBarButtonItem *cancelItem = [[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStylePlain  target:self action:@selector(editCancelAction)];
    [cancelItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[[UIColor whiteColor] colorWithAlphaComponent:0.5]} forState:UIControlStateNormal];
    UIBarButtonItem *flexibleSpaceItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *doneItem = [[UIBarButtonItem alloc] initWithTitle:@"完成" style:UIBarButtonItemStylePlain  target:self action:@selector(updateSubViewsToConfirmStatus)];
    [doneItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];
    [self.editToolbar setItems:@[cancelItem, flexibleSpaceItem, doneItem] animated:NO];


    if (!self.playTimeObserver) {
        __weak typeof(self) weakSelf = self;
        self.playTimeObserver = [self.player addPeriodicTimeObserverForInterval:CMTimeMake(1, 60) queue:dispatch_get_main_queue() usingBlock:^(CMTime time) {
            if (weakSelf.editStatus == XBVideoEditStatusLimit || weakSelf.isEidt) {
                return;
            }
            CGFloat currentSecond = CMTimeGetSeconds(time);
            CGFloat startSecond = CMTimeGetSeconds(weakSelf.startTime);
            CGFloat stopSecond = CMTimeGetSeconds(weakSelf.stopTime);
            if (currentSecond < startSecond || currentSecond > stopSecond) {
                return;
            }
            [weakSelf.editView animatedWithSeconds:currentSecond];
        }];
    }
}

- (void)updateSubViewsToConfirmStatus {
    self.editStatus = XBVideoEditStatusConfirm;
    self.navigationBarView.hidden = NO;
    UIBarButtonItem *cancelItem = [[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStylePlain  target:self action:@selector(confirmCancelAction)];
    [cancelItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[[UIColor whiteColor] colorWithAlphaComponent:0.5]} forState:UIControlStateNormal];
    UIBarButtonItem *flexibleSpaceItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *doneItem = [[UIBarButtonItem alloc] initWithTitle:@"完成" style:UIBarButtonItemStylePlain  target:self action:@selector(confirm)];
    [doneItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor]} forState:UIControlStateNormal];
    [self.confirmToolbar setItems:@[cancelItem, flexibleSpaceItem, doneItem] animated:NO];

    self.playerLayer.frame = self.view.bounds;

    self.editView.hidden = YES;
    self.bottomBarView.hidden = YES;
}

- (void)confirmCancelAction {
    [self updateSubViewsToEditStatus];
}

//addBoundaryTimeObserverForTimes
- (void)playInBoundaryForm:(CMTime)fromTime to:(CMTime)toTime {

    self.startTime = fromTime;
    self.stopTime = toTime;
    self.isEidt = NO;
    if (self.playBoundaryTimeObserver) {
        [self.player removeTimeObserver:self.playBoundaryTimeObserver];
        self.playBoundaryTimeObserver = nil;
    }
    __weak typeof(self) wself = self;
    self.playBoundaryTimeObserver = [self.player addBoundaryTimeObserverForTimes:@[[NSValue valueWithCMTime:toTime]] queue:dispatch_get_main_queue() usingBlock:^{
        [wself.player seekToTime:wself.startTime toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
        [wself.player play];
    }];

    [self.player seekToTime:fromTime toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
    [self.player play];


}

- (void)editCancelAction {
    if (self.isExceedTheLimit) {
        [self updateSubViewsToLimitStatus];
    } else {
        [self goBack];
    }
}


- (void)videoDidPlayToEndTimeNotification {
    if (self.editStatus == XBVideoEditStatusEdit || self.editStatus == XBVideoEditStatusConfirm) {
        [self replayWhenViewDidAppear];
    }
}

- (void)invalidatePlay {
    if (self.playTimeObserver) {
        [self.player removeTimeObserver:self.playTimeObserver];
        self.playTimeObserver = nil;
    }
    if (self.playBoundaryTimeObserver) {
        [self.player removeTimeObserver:self.playBoundaryTimeObserver];
        self.playBoundaryTimeObserver = nil;
    }
    [self.player removeObserver:self forKeyPath:@"rate"];
    [self.player pause];
    [self.playerItem removeObserver:self forKeyPath:@"status"];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
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

- (void)confirm {
    NSLog(@"如果有回调的话");
    NSString *str = [NSString stringWithFormat:@"%ld.mp4",(long)([[NSDate date] timeIntervalSince1970]*1000)];
    NSString *tempVideoPath = [NSTemporaryDirectory() stringByAppendingPathComponent:str];
    if ([[NSFileManager defaultManager] fileExistsAtPath:tempVideoPath]) {
        NSError *error;
        [[NSFileManager defaultManager] removeItemAtPath:tempVideoPath error:&error];
        if (error) {
            NSLog(@"remve %@ error:%@", tempVideoPath, error);
        } else {
            NSLog(@"remve %@ success!", tempVideoPath);
        }
    }

    AVAsset *asset = [AVAsset assetWithURL:self.videoUrl];
    AVAssetExportSession *exportSession = [AVAssetExportSession exportSessionWithAsset:asset presetName:AVAssetExportPresetPassthrough];
    NSURL *tempUrl = [NSURL fileURLWithPath:tempVideoPath];
    exportSession.outputURL = tempUrl;
    exportSession.outputFileType = AVFileTypeMPEG4;

    CGFloat startSecond = CMTimeGetSeconds(self.startTime);
    CGFloat stopSecond = CMTimeGetSeconds(self.stopTime);
    CMTime durationTime = CMTimeMakeWithSeconds(stopSecond - startSecond, self.startTime.timescale);
    exportSession.timeRange = CMTimeRangeMake(self.startTime, durationTime);
    [exportSession exportAsynchronouslyWithCompletionHandler:^{
        switch (exportSession.status) {
            case AVAssetExportSessionStatusFailed:
                NSLog(@"导出失败 %@", exportSession.error);
                break;
            case AVAssetExportSessionStatusWaiting:
                NSLog(@"等等...");
                break;
            case AVAssetExportSessionStatusCancelled:
                NSLog(@"取消");
                break;
            case AVAssetExportSessionStatusExporting:
                NSLog(@"客观别着急");
                break;
            case AVAssetExportSessionStatusUnknown:
                NSLog(@"未知原因 %@", exportSession.error);
                break;
            case AVAssetExportSessionStatusCompleted: {
                NSLog(@"到处完成 %@", tempUrl);
                dispatch_async(dispatch_get_main_queue(), ^{
                    if ([self.delegate respondsToSelector:@selector(videoEditController:didProcessingCompletedWithVideoUrl:)]) {
                        [self.delegate videoEditController:self didProcessingCompletedWithVideoUrl:tempUrl];
                    }
                    [self goBack];
                });
                break;
            }
            default:
                break;
        }
    }];


}

- (void)replayWhenViewDidAppear {
    if (self.viewDidAppear && !self.isEidt) {
        if (CMTIME_IS_INVALID(self.startTime)) {
            return;
        }
        [self.player seekToTime:self.startTime toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
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
    [self.player seekToTime:time toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
}

- (void)videoIntervalChooseViewEventEdittingEnded {

}

- (void)videoThumImagesDidLoad {
    NSLog(@"预览图截取完毕");
}

- (void)videoShouldPlayFrom:(CMTime)fromTime to:(CMTime)toTime {
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
    } else if ([keyPath isEqualToString:@"rate"]) {
        NSLog(@"播放状态 ----- %@", change[NSKeyValueChangeNewKey]);
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

#pragma mark - getter

- (UIView *)navigationBarView {
    if (!_navigationBarView) {
        _navigationBarView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, TOP_MARGIN + kToolBarHeight)];
        _navigationBarView.backgroundColor = [UIColor colorWithWhite:0.101961 alpha:0.75];
    }
    return _navigationBarView;
}

- (UIToolbar *)confirmToolbar {
    if (!_confirmToolbar) {
        _confirmToolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, TOP_MARGIN, self.view.bounds.size.width, kToolBarHeight)];
        [_confirmToolbar setBackgroundImage:[UIImage new] forToolbarPosition:UIBarPositionAny barMetrics:UIBarMetricsDefault];
    }
    return _confirmToolbar;
}

- (UIView *)bottomBarView {
    if (!_bottomBarView) {
        CGFloat height = BOTTOM_MARGIN + kToolBarHeight;
        _bottomBarView = [[UIView alloc] initWithFrame:CGRectMake(0, self.view.bounds.size.height - height, self.view.bounds.size.width, height)];
        _bottomBarView.backgroundColor = [UIColor colorWithWhite:0.101961 alpha:0.75];
    }
    return _bottomBarView;
}

- (UIToolbar *)editToolbar {
    if (!_editToolbar) {
        _editToolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, kToolBarHeight)];
        [_editToolbar setBackgroundImage:[UIImage new] forToolbarPosition:UIBarPositionAny barMetrics:UIBarMetricsDefault];
    }
    return _editToolbar;
}

- (XBVideoIntervalChooseView *)editView {
    if (!_editView) {
        CGFloat y = self.view.bounds.size.height - BOTTOM_MARGIN - kToolBarHeight - kEditAreaViewHeight;
        _editView = [[XBVideoIntervalChooseView alloc] initWithFrame:CGRectMake(0, y, self.view.bounds.size.width, kEditAreaViewHeight)];
    }
    return _editView;
}
@end
