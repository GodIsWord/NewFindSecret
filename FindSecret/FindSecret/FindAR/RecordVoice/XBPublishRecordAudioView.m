//
//  XBPublishRecordAudioView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishRecordAudioView.h"
#import "MSRecordControl.h"
#import "XBGifImageView.h"
#import "XBAudioManager.h"

@interface XBPublishRecordAudioView()<MSRecordControlDelegate>

@property(nonatomic,strong) UIButton *cancleBtn;
@property(nonatomic,strong) MSRecordControl *recordControl;
@property(nonatomic,strong) XBAudioManager *audeoManager;

@end

@implementation XBPublishRecordAudioView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor xb_colorFromString:@"#000000" alpha:0.4];
        [self initSubbView];
    }
    return self;
}

-(void)initSubbView
{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = [UIColor clearColor];
    [btn setTitle:@"取消" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(cancleAction) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:btn];
    self.cancleBtn = btn;
    
    MSRecordControl *control = [[MSRecordControl alloc] initWithFrame:CGRectMake(0, self.height-140-100, 140, 140)];
    control.mode = MSRecordControlLongPress;
    control.centerX = self.width/2;
    control.delegate = self;
    [self addSubview:control];
    self.recordControl = control;
    
    XBGifImageView *gifImage = [[XBGifImageView alloc] initWithFrame:CGRectMake(0, 0, control.width-18, control.height-18)];
    [control addSubview:gifImage];
    gifImage.center = CGPointMake(control.width/2, control.height/2);
    [gifImage loadGIFWithPath:[[NSBundle mainBundle] pathForResource:@"vioce_big" ofType:@"gif"]];
    
}
-(void)cancleAction{
    
}

- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state
{
    
}
- (void)recordControlDidBeginRecord:(MSRecordControl *)recordControl
{
    
}
- (void)recordControlDurationIsMaxValue:(MSRecordControl *)recordControl
{
    
}

@end
