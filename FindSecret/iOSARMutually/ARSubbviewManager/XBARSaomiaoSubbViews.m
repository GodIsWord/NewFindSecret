//
//  XBARSaomiaoSubbViews.m
//  FindSecret
//
//  Created by yide zhang on 2018/8/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBARSaomiaoSubbViews.h"
#import "XBTimer.h"
#import <AVFoundation/AVFoundation.h>
#import "XBWeakProxy.h"
#import "UIButton+Block.h"

@interface XBARSaomiaoSubbViews()

//@property (nonatomic,strong) XBTimer *linkTimer;
@property (nonatomic,strong) CADisplayLink *linkTimer;
@property (nonatomic,strong) AVCaptureSession * captureSession;
@property (nonatomic,strong) AVCaptureDevice * captureDevice;

@property (nonatomic,strong)UIImageView *boxView;
@property (nonatomic,strong)UIImageView *imageLine;
@property (nonatomic,strong)UIButton *btnFlash;
@property (nonatomic,strong)UIButton *btnBack;

@end

@implementation XBARSaomiaoSubbViews
+(XBARSaomiaoSubbViews *)shareInstace
{
    static XBARSaomiaoSubbViews *manager = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        manager = [[XBARSaomiaoSubbViews alloc] init];
    });
    return manager;
}
-(void)dealloc
{
    [self.linkTimer invalidate];
    self.linkTimer = nil;
}

+(void)showWithSuperView:(UIView *)superView dismisComplate:(void ((^)(void)))complate
{
    [[self shareInstace] createSubbViewSuperView:superView dismisComplate:complate];
}
+(void)dismissComplate:(void((^)(void)))complate
{
    [[self shareInstace] stopSaomiaoAnimation];
    [[self shareInstace] hiddenSaomiaoView];
}

-(void)showSaomiaoView
{
    [self setSaomiaoViewSatus:NO];
}
-(void)hiddenSaomiaoView
{
    [self setSaomiaoViewSatus:YES];
}
-(void)setSaomiaoViewSatus:(BOOL)isHidden
{
    self.boxView.hidden = isHidden;
    self.imageLine.hidden = isHidden;
    self.btnFlash.hidden = isHidden;
    self.linkTimer.paused = isHidden;
}
-(void)backForward
{
    [self stopSaomiaoAnimation];

    [self closeFlashLamp];
    
    [self hiddenSaomiaoView];
    
}

-(void)createSubbViewSuperView:(UIView *)superView dismisComplate:(void ((^)(void)))complate
{
    if (!superView) {
        return;
    }
    
    if (!self.linkTimer) {
        
        self.linkTimer = [CADisplayLink displayLinkWithTarget:[XBWeakProxy proxyWithTarget:self] selector:@selector(moveScanLayer)];
        [self.linkTimer addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
        self.linkTimer.paused = NO;
        
        
        UIImageView *imageViewSaomiaoKuang = [[UIImageView alloc] initWithFrame:CGRectMake(50, 150, ScreenWidth-100, 200)];
        UIImage *saomiaoKuangimage = [UIImage imageNamed:@"saomiaokuang@3x"];
        imageViewSaomiaoKuang.xb_height = imageViewSaomiaoKuang.xb_width * saomiaoKuangimage.size.height/saomiaoKuangimage.size.width;
        imageViewSaomiaoKuang.image = saomiaoKuangimage;
        [superView addSubview:imageViewSaomiaoKuang];
        imageViewSaomiaoKuang.xb_centerY = ScreenHeight/2;
        self.boxView = imageViewSaomiaoKuang;
        
        
        UIImageView *imageViewLine = [[UIImageView alloc] initWithFrame:CGRectMake(3, 0, imageViewSaomiaoKuang.xb_width-6, 5)];
        UIImage *image = [UIImage imageNamed:@"saomiao_normal@3x"];
        imageViewLine.image = image;
        imageViewLine.backgroundColor = [UIColor whiteColor];
        [imageViewSaomiaoKuang addSubview:imageViewLine];
        self.imageLine = imageViewLine;
        
        UIButton *btnBack = [UIButton buttonWithType:UIButtonTypeCustom];
        btnBack.frame = CGRectMake(20, 30, 44, 44);
        [btnBack setImageEdgeInsets:UIEdgeInsetsMake(5, 5, 5, 5)];
        [btnBack setBackgroundImage:[UIImage imageNamed:@"nav_icon_back_white"] forState:UIControlStateNormal];
        btnBack.backgroundColor = [UIColor clearColor];
        [superView addSubview:btnBack];
        self.btnBack = btnBack;
        __weak typeof(self) weakSelf = self;
        [btnBack addActionHandler:^(NSInteger tag) {
            if (complate) {
                complate();
            }
            weakSelf.btnBack.hidden = YES;
            [weakSelf hiddenSaomiaoView];
        }];

        
        UIButton *btnFlash = [UIButton buttonWithType:UIButtonTypeCustom];
        btnFlash.frame = CGRectMake(ScreenWidth - 60, 30, 44, 44);
        btnFlash.backgroundColor = [UIColor clearColor];
        [btnFlash setImage:[UIImage imageNamed:@"shanguangdengguanbi_normal@3x"] forState:UIControlStateSelected];
        [btnFlash setImage:[UIImage imageNamed:@"shanguangdengkai_normal@3x"] forState:UIControlStateNormal];
        [btnFlash addTarget:self action:@selector(btnSaoMiaoAction:) forControlEvents:UIControlEventTouchUpInside];
        [superView addSubview:btnFlash];
        btnFlash.tag = 12001;
        [btnFlash setImageEdgeInsets:UIEdgeInsetsMake((btnBack.xb_width-31)/2,(btnBack.xb_width-29)/2, (btnBack.xb_width-31)/2,(btnBack.xb_width-29)/2)];
        self.btnFlash = btnFlash;
        
    }else{
        self.btnBack.hidden = NO;
        [self showSaomiaoView];
        [self startSaomiaoAnimation];
    }
}
-(void)startSaomiaoAnimation
{
    self.linkTimer.paused = NO;
}
-(void)stopSaomiaoAnimation
{
    self.linkTimer.paused = YES;
}
- (void)moveScanLayer
{
    UIView *imageLine = self.imageLine;
    if (imageLine.xb_y >= self.boxView.xb_height) {
        imageLine.xb_y = 0 ;
    }else{
        imageLine.xb_y += 5;
    }
}
-(void)btnSaoMiaoAction:(UIButton*)btn
{
    switch (btn.tag) {
        case 12001:
        {
            //打开手电
            btn.selected = !btn.selected;
            if (btn.selected) {
                [self openFlashLamp];
            }else{
                [self closeFlashLamp];
            }
        }
            break;
    }
}
+(void)saomiaoSuccess:(NSString*)str
{
    [[self shareInstace] stopSaomiaoAnimation];
    [[self shareInstace] hiddenSaomiaoView];
}
#pragma mark -  手电筒开关
-(AVCaptureSession *)captureSesion
{
    if(_captureSession == nil)
    {
        _captureSession = [[AVCaptureSession alloc] init];
    }
    return _captureSession;
}

-(AVCaptureDevice *)captureDevice
{
    if(_captureDevice == nil)
    {
        _captureDevice = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    }
    return _captureDevice;
}
-(void)openFlashLamp
{
    if([self.captureDevice hasTorch] && [self.captureDevice hasFlash])
    {
        if(self.captureDevice.torchMode == AVCaptureTorchModeOff)
        {
            [self.captureSession beginConfiguration];
            [self.captureDevice lockForConfiguration:nil];
            [self.captureDevice setTorchMode:AVCaptureTorchModeOn];
            [self.captureDevice setFlashMode:AVCaptureFlashModeOn];
            [self.captureDevice unlockForConfiguration];
            [self.captureSession commitConfiguration];
        }
    }
    [self.captureSession startRunning];
}
-(void)closeFlashLamp
{
    [self.captureSession beginConfiguration];
    [self.captureDevice lockForConfiguration:nil];
    if(self.captureDevice.torchMode == AVCaptureTorchModeOn)
    {
        [self.captureDevice setTorchMode:AVCaptureTorchModeOff];
        [self.captureDevice setFlashMode:AVCaptureFlashModeOff];
    }
    [self.captureDevice unlockForConfiguration];
    [self.captureSession commitConfiguration];
    [self.captureSession stopRunning];
}

@end














