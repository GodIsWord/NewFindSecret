//
//  XBVideoEditController.m
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoEditController.h"
#import <AVFoundation/AVFoundation.h>

@interface XBVideoEditController ()
@property (nonatomic, strong) AVPlayerLayer *playerLayer;
@end

@implementation XBVideoEditController
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initialize];

}

- (void)initialize {

    self.view.backgroundColor = [UIColor blackColor];

    if (self.videoUrl.absoluteString.length == 0) {
        __weak typeof(self)wself = self;
        [self showAlertWithMessage:@"视频源出错,请重新选择" completion:^{
            [wself goBack];
        }];
        return;
    }




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


}

#pragma mark - Private Action
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
