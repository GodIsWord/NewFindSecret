//
//  XBARTakePhotoSubbViews.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/30.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBARTakePhotoSubbViews.h"
#import "UIButton+Block.h"
#import <AudioToolbox/AudioToolbox.h>

@implementation XBARTakePhotoSubbViews

+(void)showWithSuperView:(UIView*)superView complate:(void((^)(TakePhotoActionType actionType)))block
{
    if (!superView) {
        return;
    }
    
    //拍照btn
    UIButton *btnPicture = [UIButton buttonWithType:UIButtonTypeCustom];
    btnPicture.frame = CGRectMake(0, 0, 70, 70);
    btnPicture.center = CGPointMake(ScreenWidth/2, ScreenHeight - 50 - btnPicture.xb_height);
    btnPicture.backgroundColor = [UIColor colorWithWhite:1 alpha:0.6];
    btnPicture.layer.cornerRadius = btnPicture.xb_width/2;
    btnPicture.layer.masksToBounds = YES;
    [superView addSubview:btnPicture];
    btnPicture.tag = 11001;
    [btnPicture addActionHandler:^(NSInteger tag) {
        //拍照
        [self playSound];
        if (block) {
            block(TakePhotoActionTypeOK);
        }
    }];
    
    UIView *btnSubView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 50, 50)];
    btnSubView.backgroundColor = [UIColor whiteColor];
    btnSubView.layer.cornerRadius = btnSubView.xb_width/2;
    btnSubView.userInteractionEnabled = NO;
    btnSubView.layer.masksToBounds = YES;
    [btnPicture addSubview:btnSubView];
    btnSubView.center = CGPointMake(btnPicture.xb_width/2, btnPicture.xb_height/2);
    
    //取消按钮
    UIButton *btnCancle = [UIButton buttonWithType:UIButtonTypeCustom];
    btnCancle.frame = CGRectMake(68, 0, 44, 44);
    btnCancle.xb_centerY = btnPicture.xb_centerY;
    btnCancle.backgroundColor = [UIColor clearColor];
    [btnCancle setImage:[UIImage imageNamed:@"post_icon_xiatui_normal"] forState:UIControlStateNormal];
    [btnCancle setImageEdgeInsets:UIEdgeInsetsMake(11, 11, 11, 11)];
    [superView addSubview:btnCancle];
    btnCancle.tag = 11002;
    [btnCancle addActionHandler:^(NSInteger tag) {
        if (block) {
            block(TakePhotoActionTypeCancle);
        }
    }];
    
    //翻转按钮
    UIButton *btnFlap = [UIButton buttonWithType:UIButtonTypeCustom];
    btnFlap.frame = CGRectMake(ScreenWidth-47, 26, 44, 44);
    btnFlap.backgroundColor = [UIColor clearColor];
    [btnFlap setImage:[UIImage imageNamed:@"post_icon_huanjingtou_normal"] forState:UIControlStateNormal];
    [btnFlap setImageEdgeInsets:UIEdgeInsetsMake(0, 0, 12, 12)];
    [superView addSubview:btnFlap];
    btnFlap.tag = 11003;
    [btnFlap addActionHandler:^(NSInteger tag) {
        if (block) {
            block(TakePhotoActionTypeFlapCamra);
        }
    }];
    
    
}

+(void)dismissWithSuperView:(UIView*)superView
{
    for (int i=11001; i<=11003; i++) {
        UIView *btnPicture = [superView viewWithTag:i];
        if (btnPicture) {
            [btnPicture removeFromSuperview];
            btnPicture = nil;
        }
    }

}

+(void)playSound
{
//    NSString *audioFile=[[NSBundle mainBundle] pathForResource:@"sound_camera" ofType:@"mp3"];
//    NSURL *fileUrl=[NSURL fileURLWithPath:audioFile];
//    //1.获得系统声音ID
//    SystemSoundID soundID=0;
//    AudioServicesCreateSystemSoundID((__bridge CFURLRef)(fileUrl), &soundID);
    AudioServicesPlaySystemSound(1108);
}

@end







