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
#import "XBPublishLisonItemView.h"

@interface XBPublishRecordAudioView()<MSRecordControlDelegate,XBAudioManagerRecoderDelegate>

@property(nonatomic,strong) UIButton *backBtn;
@property(nonatomic,strong) MSRecordControl *recordControl;
@property(nonatomic,strong) XBAudioManager *audeoManager;
@property(nonatomic,strong) XBGifImageView *gifView;

@property(nonatomic,strong) UILabel *miaoshuLable;//按住开始录音，松开结束录音

@property(nonatomic,strong) UIButton *okBtn;//确定使用btn
@property(nonatomic,strong) UIButton *cancleBtn;

@property(nonatomic,strong) XBPublishLisonItemView *testAudioView;//试听


@end

@implementation XBPublishRecordAudioView


-(void)reloadSubbView
{
    if (self.cancleBtn) {
        return;
    }
    self.backgroundColor = [UIColor xb_colorFromString:@"#000000" alpha:0.4];
    
    self.audeoManager = [[XBAudioManager alloc] init];
//    self.audeoManager.maxRecordDuration = 10;
    self.audeoManager.recordDelegate = self;
    
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
    self.backBtn = btn;
    
    MSRecordControl *control = [[MSRecordControl alloc] initWithFrame:CGRectMake(0, self.height-90-80, 90, 90)];
    control.mode = MSRecordControlLongPress;
    control.backgroundColor = [UIColor whiteColor];
    control.layer.cornerRadius =control.xb_width/2;
    control.layer.masksToBounds = YES;
    control.centerX = self.xb_width/2;
    control.duration = 10;
    control.delegate = self;
    [self addSubview:control];
    self.recordControl = control;
    
    UILabel *miaoshulable = [[UILabel alloc] initWithFrame:CGRectMake(0, control.origin.y-60, self.xb_width, 25)];
    miaoshulable.backgroundColor = [UIColor clearColor];
    miaoshulable.textColor = [UIColor whiteColor];
    miaoshulable.text = @"按住开始录音，松开结束录音";
    miaoshulable.hidden = YES;
    miaoshulable.textAlignment = NSTextAlignmentCenter;
    [self addSubview:miaoshulable];
    self.miaoshuLable = miaoshulable;
    
    self.okBtn = [self createBtnFrame:control.frame image:[UIImage imageNamed:@"post_icon_check_big"] select:@selector(btnAction:)];
    self.okBtn.hidden = YES;
    
    self.cancleBtn = [self createBtnFrame:control.frame image:[UIImage imageNamed:@"post_icon_voice_clear_normal"] select:@selector(btnAction:)];
    self.cancleBtn.hidden = YES;
    
    XBGifImageView *gifView = [[XBGifImageView alloc] initWithFrame:CGRectMake(10, 10, control.xb_width-20, control.height-20)];
    [self.recordControl addSubview:gifView];
    self.gifView = gifView;
    [gifView loadGIFWithPath:[self gifPath]];
    
    self.testAudioView = [[XBPublishLisonItemView alloc] initWithFrame:CGRectMake(0, 0, 200, 60)];
    self.testAudioView.center = self.center;
    self.testAudioView.manager = self.audeoManager;
    [self addSubview:self.testAudioView];
    self.testAudioView.hidden = YES;
    
}

-(UIButton *)createBtnFrame:(CGRect)frame image:(UIImage*)image select:(SEL)selectr
{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = frame;
    [btn setImage:image forState:UIControlStateNormal];
    [btn addTarget:self action:selectr forControlEvents:UIControlEventTouchUpInside];
    btn.layer.cornerRadius = frame.size.width/2;
    btn.layer.masksToBounds = YES;
    [self addSubview:btn];
    return btn;
}

-(void)btnAction:(UIButton*)btn
{
    [self closeSelectBtn];
    if (btn == self.okBtn) {
        //确定使用 进行回调
    }else if(btn == self.cancleBtn){
        //取消录音 删除之前录音的文件
        [self closeSelectBtn];
    }

}

-(void)openSelectAnimation
{
    
    self.recordControl.hidden = YES;
    [self.testAudioView reloadView];
    [UIView animateWithDuration:0.2 delay:0.05 options:UIViewAnimationOptionTransitionCrossDissolve animations:^{
        self.okBtn.hidden = NO;
        self.cancleBtn.hidden = NO;
        self.okBtn.xb_x = self.recordControl.xb_x + self.recordControl.xb_width;
        self.cancleBtn.xb_x = self.recordControl.xb_x - self.recordControl.xb_width;
        self.testAudioView.hidden = NO;
    } completion:nil];
}

-(void)closeSelectBtn
{
    self.okBtn.xb_centerX = self.recordControl.xb_centerX;
    self.cancleBtn.xb_centerX = self.recordControl.xb_centerX;
    self.okBtn.hidden = YES;
    self.cancleBtn.hidden = YES;
    self.recordControl.hidden = NO;
    self.testAudioView.hidden = YES;
}

-(void)cancleAction{
    
}

-(void)startGifAnimation
{
    [self.gifView startAnimation];
    [self.audeoManager startRecord];
    self.miaoshuLable.hidden = NO;
}

-(void)stopGifAnimation
{
    [self.gifView stopAnimation];
    [self.recordControl reset];
    self.miaoshuLable.hidden = YES;
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
        [self.audeoManager endRecord];
    }else if(state == UIGestureRecognizerStateBegan){
        [self startGifAnimation];
    }else if(state != UIGestureRecognizerStateChanged){
        [self stopGifAnimation];
        [self.audeoManager cancleRecord];
    }
}

- (void)recordControlDurationIsMaxValue:(MSRecordControl *)recordControl
{
    [self stopGifAnimation];
    [self.audeoManager endRecord];
}


#pragma mark -- record delegate
-(void)xbAudioManagerEncodeErrorDidOccur:(XBAudioManager *)recorder error:(NSError *)error
{
    
}
-(void)xbAudioManagerDidFinishRecording:(XBAudioManager *)recorder successfully:(BOOL)flag
{
    [self stopGifAnimation];
    [self openSelectAnimation];
}

@end




























