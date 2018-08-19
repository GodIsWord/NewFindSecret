//
//  XBRecordAudioView.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordAudioView.h"
#import "UIView+XBFrame.h"

@interface XBRecordAudioView()

@property(nonatomic,strong) UIImageView *volumeImage;

@end

@implementation XBRecordAudioView


+(instancetype)shareInstance{
    static XBRecordAudioView *audioView = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (!audioView) {
            audioView = [[XBRecordAudioView alloc] initWithFrame:CGRectMake(0, 0, 150, 150)];
            audioView.xb_centerX = UIScreen.mainScreen.bounds.size.width/2;
            audioView.xb_centerY = UIScreen.mainScreen.bounds.size.height/2;
            audioView.backgroundColor = [UIColor whiteColor];
        }
    });
    
    return audioView;

}


+(void)showWithVolume:(double)volume{
    
    XBRecordAudioView *view = [self shareInstance];
    
    if (!view.superview){
        UIWindow *window = [UIApplication sharedApplication].delegate.window;
        [window addSubview:view];
        
        UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(10, 5, view.xb_width-20, view.xb_height-45)];
        imageView.backgroundColor = [UIColor redColor];
        [view addSubview:imageView];
        view.volumeImage = imageView;
        
        UIButton *btnCancle = [UIButton buttonWithType:UIButtonTypeCustom];
        btnCancle.frame = CGRectMake(0, imageView.xb_bottom, view.xb_width/2, view.xb_height-imageView.xb_bottom);
        
    }
    
    view.volumeImage.xb_height = (view.xb_height-10)*volume;
    view.volumeImage.xb_y = view.xb_height-10-(view.xb_height-10)*(volume);
    
    
}

+(void)hidden{
    [[self shareInstance] removeFromSuperview];
}


@end
