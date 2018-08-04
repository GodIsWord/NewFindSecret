//
//  XBVideoPreviewViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/4.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoPreviewViewController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMacroDefinition.h"
#import "XBVideoEditController.h"
@interface XBVideoPreviewViewController ()
@property(nonatomic, strong) AVPlayerItem *playerItem;
@property(nonatomic, strong) AVPlayer *player;
@property(nonatomic, strong) AVPlayerLayer *playerLayer;
@property(nonatomic, assign) BOOL isPlaying;
@property(nonatomic, assign) BOOL statusBarHidden;
@property(nonatomic, strong) UIView *navigationBarView;
@property(nonatomic, strong) UIView *bottomView;
@end

@implementation XBVideoPreviewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    
    self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoUrl];
    self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
    self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
    self.playerLayer.frame = self.view.bounds;
    [self.view.layer addSublayer:self.playerLayer];
    
    CGFloat navigationBarHeight = 44;
    self.navigationBarView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, navigationBarHeight)];
    self.navigationBarView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.34];
    [self.view addSubview:self.navigationBarView];
    
    UIButton *backButton = [UIButton buttonWithType:UIButtonTypeCustom];
    [backButton setTitle:@"返回" forState:UIControlStateNormal];
    [backButton addTarget:self action:@selector(goBack) forControlEvents:UIControlEventTouchUpInside];
    CGSize btnSize = [backButton sizeThatFits:CGSizeMake(1000, 1000)];
    backButton.frame = (CGRect){{15,(navigationBarHeight - btnSize.height)/2},btnSize};
    [self.navigationBarView addSubview:backButton];
    UILabel *label = [UILabel new];
    label.text = @"选择视频";
    CGSize labSize = [label sizeThatFits:CGSizeMake(1000, 1000)];
    label.frame = (CGRect){{(CGRectGetWidth(self.navigationBarView.frame) - labSize.width)/2.0,(navigationBarHeight - labSize.height)/2},labSize};
    [self.navigationBarView addSubview:label];

    
    
    self.bottomView = [[UIView alloc] initWithFrame:CGRectMake(0, CGRectGetHeight(self.view.bounds) - navigationBarHeight - BOTTOM_MARGIN, self.view.bounds.size.width, navigationBarHeight + BOTTOM_MARGIN)];
    self.bottomView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.5];
    [self.view addSubview:self.bottomView];
    
    UIButton *edit = [UIButton buttonWithType:UIButtonTypeCustom];
    [edit setTitle:@"编辑" forState:UIControlStateNormal];
    [edit addTarget:self action:@selector(goEdit) forControlEvents:UIControlEventTouchUpInside];
    CGSize editBtnSize = [backButton sizeThatFits:CGSizeMake(1000, 1000)];
    
    edit.frame = (CGRect){{self.view.bounds.size.width - 15 - editBtnSize.width,(navigationBarHeight - editBtnSize.height)/2},editBtnSize};
    [self.bottomView addSubview:edit];
    
    
    
    UILabel *tip = [UILabel new];
    tip.text = @"寻秘只能上传10秒内的视频，需要编辑一下哦";
    tip.adjustsFontSizeToFitWidth = YES;
    tip.minimumScaleFactor = 0.6;
    CGSize tipSize = [tip sizeThatFits:CGSizeMake(1000, 1000)];
    tip.frame = (CGRect){{15,(navigationBarHeight - tipSize.height)/2},{edit.frame.origin.x - 2 * 15,tipSize.height}};
    [self.bottomView addSubview:tip];
    
}
- (void)goBack{
    if (self.navigationController.topViewController == self && self.navigationController.viewControllers.firstObject != self) {
        [self.navigationController popViewControllerAnimated:YES];
    } else {
        UIViewController *vc = self.navigationController ?: self;
        if (vc.presentingViewController) {
            [vc dismissViewControllerAnimated:YES completion:nil];
        }
    }
}
- (void)goEdit {
    
    self.isPlaying = NO;
    [self.player pause];
    
    XBVideoEditController *vc = [[XBVideoEditController alloc] init];
    vc.videoUrl = self.videoUrl;
    [self.navigationController pushViewController:vc animated:YES];
}
- (void)videoDidPlayToEndTimeNotification {
    self.isPlaying = NO;
    [self.player seekToTime:kCMTimeZero];
}
- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    self.isPlaying = !self.isPlaying;
    if (self.isPlaying) {
        [self.player play];
    }else{
        [self.player pause];
    }
    
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.statusBarHidden = YES;
    [self setNeedsStatusBarAppearanceUpdate];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    self.statusBarHidden = NO;
    [self setNeedsStatusBarAppearanceUpdate];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
}



- (BOOL)prefersStatusBarHidden {
    return self.statusBarHidden;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation {
    return UIStatusBarAnimationSlide;
}

@end
