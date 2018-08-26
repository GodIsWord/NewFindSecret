//
//  XBPublishRecordAudioView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishRecordAudioView.h"
#import "MSRecordControl.h"
#import "XBAudioManager.h"
#import "CADisplayLineImageView.h"
#import "XBGifImageView.h"

@interface XBPublishRecordAudioView()<MSRecordControlDelegate>

@property(nonatomic,strong) UIButton *cancleBtn;
@property(nonatomic,strong) MSRecordControl *recordControl;
@property(nonatomic,strong) XBAudioManager *audeoManager;
@property(nonatomic,strong) XBGifImageView *gifView;

@property(nonatomic,strong) UILabel *miaoshuLable;//按住开始录音，松开结束录音

@end

@implementation XBPublishRecordAudioView


-(void)reloadSubbView
{
    if (self.cancleBtn) {
        return;
    }
    self.backgroundColor = [UIColor xb_colorFromString:@"#000000" alpha:0.4];
    
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:self.bounds];
    imageView.image = self.image;
    [self addSubview:imageView];
    
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = [UIColor clearColor];
    btn.frame = CGRectMake(20, 40, 50, 50);
    [btn setTitle:@"取消" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(cancleAction) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:btn];
    self.cancleBtn = btn;
    
    MSRecordControl *control = [[MSRecordControl alloc] initWithFrame:CGRectMake(0, self.height-90-80, 90, 90)];
    control.mode = MSRecordControlLongPress;
    control.centerX = self.width/2;
    control.delegate = self;
    [self addSubview:control];
    self.recordControl = control;
    
    UILabel *miaoshulable = [[UILabel alloc] initWithFrame:CGRectMake(0, control.origin.y-60, self.xb_width, 25)];
    miaoshulable.backgroundColor = [UIColor clearColor];
    miaoshulable.textColor = [UIColor whiteColor];
    miaoshulable.text = @"按住开始录音，松开结束录音";
    

//    CADisplayLineImageView *gifView = [[CADisplayLineImageView alloc] initWithFrame:CGRectMake(10, 10, control.width-20, control.height-20)];
//    gifView.runLoopMode = NSRunLoopCommonModes;
//    [gifView setImage:[CADisplayLineImage imageWithContentsOfFile:[self gifPath]]];
//    [self.recordControl addSubview:gifView];
//    self.gifView = gifView;
//    [gifView stopAnimating];
    
    XBGifImageView *gifView = [[XBGifImageView alloc] initWithFrame:CGRectMake(10, 10, control.width-20, control.height-20)];
    [self.recordControl addSubview:gifView];
    self.gifView = gifView;
    [gifView loadGIFWithPath:[self gifPath]];
    
}

-(void)cancleAction{
    
}

-(void)startGifAnimation
{
    [self.gifView startAnimation];
}

-(void)stopGifAnimation
{
    [self.gifView stopAnimation];
}

-(NSString*)gifPath{
    NSString *path = [[NSBundle mainBundle] pathForResource:@"recordVoice" ofType:@"bundle"];
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return nil;
    }
    path = [path stringByAppendingPathComponent:@"voice_big3x"];//[path stringByAppendingPathComponent:@"vioce_big@3x.gif"];//
    return path;
}

- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state
{
    if (state == UIGestureRecognizerStateEnded) {
        [self stopGifAnimation];
        [self.audeoManager stopPlay];
    }else if(state == UIGestureRecognizerStateBegan){
        [self startGifAnimation];
        [self.audeoManager startRecord];
    }else if(state != UIGestureRecognizerStateChanged){
        [self stopGifAnimation];
        [self.audeoManager stopPlay];
    }
}

- (void)recordControlDurationIsMaxValue:(MSRecordControl *)recordControl
{
    [self stopGifAnimation];
    [self.audeoManager stopPlay];
}

@end
