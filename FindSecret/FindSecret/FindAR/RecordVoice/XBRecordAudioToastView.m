//
//  XBRecordAudioToastView.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordAudioToastView.h"
#import "UIView+XBFrame.h"

@interface XBRecordAudioToastView()

@property(nonatomic,strong) UIImageView *volumeImage;

@end

@implementation XBRecordAudioToastView


+(instancetype)shareInstance{
    static XBRecordAudioToastView *audioView = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!audioView) {
            audioView = [[XBRecordAudioToastView alloc] initWithFrame:CGRectMake(0, 0, 100, 150)];
            audioView.xb_centerX = UIScreen.mainScreen.bounds.size.width/2;
            audioView.xb_centerY = UIScreen.mainScreen.bounds.size.height/2;
            audioView.backgroundColor = [UIColor whiteColor];
        }
    });
    
    return audioView;

}


+(void)showWithVolume:(double)volume{
    
    
    
    XBRecordAudioToastView *view = [self shareInstance];
    
    view.userInteractionEnabled = YES;
    
    CGFloat volumeHeight = (view.xb_height-10)*volume;
    CGFloat volumY = view.xb_height - 10 - volumeHeight;
    
    if (!view.superview){
        UIWindow *window = [UIApplication sharedApplication].delegate.window;
        [window addSubview:view];
        
        UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(10, 5, view.xb_width-20, volumeHeight)];
        imageView.backgroundColor = [UIColor redColor];
        [view addSubview:imageView];
        view.volumeImage = imageView;
        imageView.userInteractionEnabled = YES;
        
    }
    
    view.volumeImage.xb_height = volumeHeight;
    view.volumeImage.xb_y = volumY;
    
    
}

+(void)hidden{
    [[self shareInstance] removeFromSuperview];
}


@end
