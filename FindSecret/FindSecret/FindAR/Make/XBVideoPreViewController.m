//
//  XBVideoPreViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/21.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoPreViewController.h"
#import "XBMacroDefinition.h"
#import <AVFoundation/AVFoundation.h>
#define kToolBarHeight 44.0f
#define kEditAreaViewHeight 60.0f

@interface XBVideoPreViewController ()
@property(nonatomic, strong, readwrite) AVPlayerItem *playerItem;
@property(nonatomic, strong, readwrite) AVPlayer *player;
@property(nonatomic, strong, readwrite) AVPlayerLayer *playerLayer;
@property(nonatomic, strong) UIView *navigationBarView;
@property(nonatomic, strong) UIToolbar *confirmToolbar;

@end

@implementation XBVideoPreViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    
    UITapGestureRecognizer *tapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(didClickedContentView:)];
    [self.view addGestureRecognizer:tapGestureRecognizer];
    
    
    
    self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoUrl];
    [self.playerItem addObserver:self forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
    self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
    self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
    self.playerLayer.frame = self.view.bounds;
    [self.view.layer addSublayer:self.playerLayer];

    // 状态栏
    [self.navigationBarView addSubview:self.confirmToolbar];
    [self.view addSubview:self.navigationBarView];
    UIBarButtonItem *back = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(goBack)];
    [self.confirmToolbar setItems:@[back] animated:NO];


    // Do any additional setup after loading the view.
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
- (void)videoDidPlayToEndTimeNotification {
    [self.player seekToTime:kCMTimeZero toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
}

- (void)didClickedContentView:(UITapGestureRecognizer *)tapGestureRecognizer {
    
    if (self.player.rate == 0) {
        [self.player play];
    }else{
        [self.player pause];
    }
}

- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context {
    if ([keyPath isEqualToString:@"status"]) {
        switch (self.playerItem.status) {
            case AVPlayerItemStatusUnknown:
                NSLog(@"AVPlayerItemStatusUnknown");
                break;
            case AVPlayerItemStatusReadyToPlay: {
                NSLog(@"AVPlayerItemStatusReadyToPlay");
                [self.player play];
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

- (void)dealloc {
    [self.player pause];
    [self.playerItem removeObserver:self forKeyPath:@"status"];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (UIView *)navigationBarView {
    if (!_navigationBarView) {
        _navigationBarView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, TOP_MARGIN + kToolBarHeight)];
        _navigationBarView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.34];
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

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
