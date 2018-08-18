//
//  XBMakeViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBMakeViewController.h"
#import "XBMacroDefinition.h"
#import "XBMakeToolView.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import "XBVideoEditController.h"
#import "XBTextEditController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBRecorderTestViewController.h"
#import "XBVideoPreviewViewController.h"
#import "XBMakeContentItemView.h"
#import "XBAudioManager.h"


typedef NS_ENUM(NSUInteger, XBMakeToolbarItemType) {
    XBMakeToolbarItemTypeBack,
    XBMakeToolbarItemTypeCancel,
    XBMakeToolbarItemTypeConfirm,
    XBMakeToolbarItemTypeNextStep,
    XBMakeToolbarItemTypeNextFlexibleSpace,
    XBMakeToolbarItemTypeNextSwapCamera,
};


typedef NS_ENUM(NSUInteger, XBMakeContentStage) {
    XBMakeContentStageCapture,
    XBMakeContentStageCaptureAddContent,
};


@interface XBMakeToolbar : UIToolbar
@end

@implementation XBMakeToolbar
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *view = [super hitTest:point withEvent:event];
    if (view == self) {
        return self.superview;
    }
    return view;
}
@end


@interface XBMakeViewController () <XBMakeToolViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate,XBAudioManagerPlayDelegate,XBAudioManagerRecoderDelegate>
@property(nonatomic, strong) XBMakeToolbar *topToolbar;
@property(nonatomic, strong) UIImageView *imageView;
@property(nonatomic, strong) XBMakeToolView *toolView;

@property(nonatomic, strong) AVCaptureSession *session;//媒体管理会话
@property(nonatomic, strong) AVCaptureDeviceInput *captureInput;//输入数据对象
@property(nonatomic, strong) AVCaptureStillImageOutput *imageOutput;//输出数据对象
@property(nonatomic, strong) AVCaptureVideoPreviewLayer *captureLayer;//视频预览图层
@property(nonatomic, strong) UIButton *captureBtn;

@property(nonatomic, assign) XBMakeContentStage stage;
@property(nonatomic, strong) XBAudioManager *audioMgr;
@end

@implementation XBMakeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // 初始化预览图层
    [self initCapture];
    // UI 初始化
    [self initTopToolBar];
    // 切换到拍照模式
    [self switchCaptureMode];
    
    // 录音
    self.audioMgr = [XBAudioManager new];
    self.audioMgr.playDelegate = self;
    self.audioMgr.recordDelegate = self;

}

- (void)initCapture {
    //1. 创建媒体管理会话
    AVCaptureSession *session = [[AVCaptureSession alloc] init];
    self.session = session;

    // 判断分辨率是否支持1280*720，支持就设置为1280*720
    if ([session canSetSessionPreset:AVCaptureSessionPreset1280x720]) {
        session.sessionPreset = AVCaptureSessionPreset1280x720;
    }
    //2. 获取后置摄像头设备对象
    AVCaptureDevice *device = nil;
    NSArray *cameras = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
    for (AVCaptureDevice *camera in cameras) {
        if (camera.position == AVCaptureDevicePositionBack) {//取得后置摄像头
            device = camera;
        }
    }
    if (!device) {
        NSLog(@"取得后置摄像头错误");
        return;
    }
    //3. 创建输入数据对象
    NSError *error = nil;
    AVCaptureDeviceInput *captureInput = [[AVCaptureDeviceInput alloc] initWithDevice:device
                                                                                error:&error];
    if (error) {
        NSLog(@"创建输入数据对象错误");
        return;
    }
    self.captureInput = captureInput;
    //4. 创建输出数据对象
    AVCaptureStillImageOutput *imageOutput = [[AVCaptureStillImageOutput alloc] init];
    NSDictionary *setting = @{AVVideoCodecKey: AVVideoCodecJPEG};
    [imageOutput setOutputSettings:setting];
    self.imageOutput = imageOutput;

    //5. 添加输入数据对象和输出对象到会话中
    if ([session canAddInput:captureInput]) {
        [session addInput:captureInput];
    }
    if ([session canAddOutput:imageOutput]) {
        [session addOutput:imageOutput];
    }
    //6. 创建视频预览图层
    AVCaptureVideoPreviewLayer *videoLayer = [AVCaptureVideoPreviewLayer layerWithSession:session];
    videoLayer.frame = self.view.bounds;
    videoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
    //插入图层在拍照按钮的下方
    [self.view.layer addSublayer:videoLayer];
    self.captureLayer = videoLayer;

}

- (void)initTopToolBar {
    CGRect frame = CGRectZero;
    frame.origin.x = 0;
    frame.origin.y = TOP_MARGIN;
    frame.size.width = CGRectGetWidth(self.view.bounds);
    frame.size.height = 44;
    self.topToolbar = [[XBMakeToolbar alloc] initWithFrame:frame];
    [self.topToolbar setBackgroundImage:[UIImage new] forToolbarPosition:UIBarPositionAny barMetrics:UIBarMetricsDefault];
    [self.view addSubview:self.topToolbar];
}

- (void)switchCaptureMode {

    self.stage = XBMakeContentStageCapture;
    //
    self.imageView.image = nil;

    //开始捕捉
    self.captureLayer.hidden = NO;
    [self.session startRunning];

    // 设置tool
    [self updateToolbarItemsWithTypes:@[@(XBMakeToolbarItemTypeBack), @(XBMakeToolbarItemTypeNextFlexibleSpace), @(XBMakeToolbarItemTypeNextSwapCamera)]];


    if (!self.captureBtn) {
        self.captureBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        [self.captureBtn setTitle:@"拍照" forState:UIControlStateNormal];
        [self.captureBtn addTarget:self action:@selector(captureImage) forControlEvents:UIControlEventTouchUpInside];
        self.captureBtn.bounds = CGRectMake(0, 0, 80, 40);
    }
    if (!self.captureBtn.superview) {
        self.captureBtn.center = CGPointMake(CGRectGetMidX(self.view.bounds), CGRectGetMaxY(self.view.bounds) - 20 - 30);
        [self.view addSubview:self.captureBtn];
    }
    self.captureBtn.hidden = NO;

    // 隐藏添加的工具条
    self.toolView.hidden = YES;

}

- (void)captureImage {
    //根据设备输出获得连接
    AVCaptureConnection *connection = [self.imageOutput connectionWithMediaType:AVMediaTypeVideo];
    //通过连接获得设备输出的数据
    [self.imageOutput captureStillImageAsynchronouslyFromConnection:connection
                                                  completionHandler:^(CMSampleBufferRef imageDataSampleBuffer, NSError *error) {
                                                      //获取输出的JPG图片数据
                                                      NSData *imageData =
                                                              [AVCaptureStillImageOutput jpegStillImageNSDataRepresentation:imageDataSampleBuffer];
                                                      UIImage *image = [UIImage imageWithData:imageData];
//         UIImageWriteToSavedPhotosAlbum(image, nil, nil, nil);//保存到相册
                                                      [self switchConfrimImageModeWithImage:image];
                                                  }];

}

- (void)switchConfrimImageModeWithImage:(UIImage *)image {
    if (!image) {
        return;
    }
    dispatch_async(dispatch_get_main_queue(), ^{

        self.stage = XBMakeContentStageCaptureAddContent;

        [self updateToolbarItemsWithTypes:@[@(XBMakeToolbarItemTypeCancel), @(XBMakeToolbarItemTypeNextFlexibleSpace), @(XBMakeToolbarItemTypeConfirm)]];

        if (!self.imageView) {
            self.imageView = [UIImageView new];
            self.imageView.backgroundColor = [UIColor clearColor];
            self.imageView.frame = self.view.bounds;
        }

        if (!self.imageView.superview) {
            [self.view insertSubview:self.imageView atIndex:0];
        }

        // 停止捕捉
        self.imageView.image = image;
        self.captureLayer.hidden = YES;
        self.captureBtn.hidden = YES;
        [self.session stopRunning];



        CGFloat toolViewWidth = 200;
        CGFloat toolViewHeight = 60;
        if (!self.toolView) {
            self.toolView = [XBMakeToolView toolView];
            self.toolView.delegate = self;
        }
        if (!self.toolView.superview) {
            self.toolView.frame = CGRectMake((CGRectGetWidth(self.view.frame) - toolViewWidth) / 2, CGRectGetHeight(self.view.frame) - BOTTOM_MARGIN - 20 - toolViewHeight, toolViewWidth, toolViewHeight);
            [self.view addSubview:self.toolView];
        }
        self.toolView.hidden = NO;


    });
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}


- (void)addVideo {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:nil preferredStyle:UIAlertControllerStyleActionSheet];
    UIAlertAction *camera = [UIAlertAction actionWithTitle:@"拍摄" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {

        UIImagePickerController *pick = [[UIImagePickerController alloc] init];
        pick.mediaTypes = @[(NSString *) kUTTypeMovie];
        pick.videoQuality = UIImagePickerControllerQualityTypeMedium;
        pick.sourceType = UIImagePickerControllerSourceTypeCamera;
        pick.delegate = self;
        [self presentViewController:pick animated:YES completion:nil];


    }];
    UIAlertAction *album = [UIAlertAction actionWithTitle:@"相册" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {
        UIImagePickerController *picker = [[UIImagePickerController alloc] init];
        picker.mediaTypes = @[(NSString *) kUTTypeMovie];
        picker.videoQuality = UIImagePickerControllerQualityTypeMedium;
        picker.delegate = self;
        [self presentViewController:picker animated:YES completion:nil];

    }];

    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *_Nonnull action) {

    }];

    [alertController addAction:camera];
    [alertController addAction:album];
    [alertController addAction:cancel];

    [self presentViewController:alertController animated:YES completion:nil];

}

- (void)addRecordVoice {
    
}

- (void)addText {
    XBTextEditController *textEditController = [[XBTextEditController alloc] init];
    textEditController.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    textEditController.text = @"小白是🐷";
    textEditController.textColor = [UIColor redColor];
    textEditController.textStyle = @"";
    textEditController.callback = ^(NSAttributedString *content) {
        XBMakeContentItemView *itemVIew = [XBMakeContentItemView contentItemViewWithAttributedString:content];
        [self.view addSubview:itemVIew];
    };
    [self presentViewController:textEditController animated:NO completion:nil];
}

- (void)goBack {

    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:@"确认要放弃本次编辑吗？" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleDefault handler:nil];
    UIAlertAction *confrom = [UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {

        if (self.navigationController.topViewController == self && self.navigationController.viewControllers.firstObject != self) {
            [self.navigationController popViewControllerAnimated:YES];
        } else {
            UIViewController *vc = self.navigationController ?: self;
            if (vc.presentingViewController) {
                [vc dismissViewControllerAnimated:YES completion:nil];
            }
        }

    }];

    [alertController addAction:cancel];
    [alertController addAction:confrom];

    [self presentViewController:alertController animated:YES completion:nil];


}


- (BOOL)prefersStatusBarHidden {
    return YES;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation {
    return UIStatusBarAnimationNone;
}

#pragma mark - XBMakeToolViewDelegate

//- (void)makeToolView:(XBMakeToolView *)makeToolView didClickItemAtIndex:(NSInteger)index {
//}

- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchDownItemAtIndex:(NSInteger)index {
    if (index == 1) {
        [self.audioMgr startRecord];
    }
}

- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchUpAtIndex:(NSInteger)index {
    switch (index) {
        case 0:
            [self addText];
            break;
        case 1:
            [self.audioMgr endRecord];
            break;
        case 2:
            [self addVideo];
            break;
            
        default:
            break;
    }

}


#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> *)info {
    [picker dismissViewControllerAnimated:YES completion:^{

        XBVideoPreviewViewController *vc = [[XBVideoPreviewViewController alloc] init];
        vc.videoUrl = info[UIImagePickerControllerMediaURL];
        UINavigationController *nv = [[UINavigationController alloc] initWithRootViewController:vc];
        [self presentViewController:nv animated:YES completion:nil];
        // TODO:这里应该还差一个流程
//        XBVideoEditController *videoEditController = [[XBVideoEditController alloc] init];
//
//
    }];

}

#pragma mark - XBAudioManagerPlayDelegate,XBAudioManagerRecoderDelegate


-(void)xbAudioManagerEncodeErrorDidOccur:(XBAudioManager *)recorder error:(NSError *)error {
    NSLog(@"%s %@",__func__,error);
}
-(void)xbAudioManagerDidFinishRecording:(XBAudioManager *)recorder successfully:(BOOL)flag {
    NSString *filePath = [recorder lastAudioPath];
    NSLog(@"%s",__func__);
}
//播放结束时执行的动作
- (void)xbAudioManagerPlayerDidFinishPlaying:(XBAudioManager*)player successfully:(BOOL)flag {
    NSLog(@"%s",__func__);
}
//解码错误执行的动作
- (void)xbAudioManagerPlayerDecodeErrorDidOccur:(XBAudioManager*)player error:(NSError *)error {
    NSLog(@"%s %@",__func__,error);
}
//处理中断的代码
- (void)xbAudioManagerPlayerBeginInteruption:(XBAudioManager*)player {
    NSLog(@"%s",__func__);
}
//处理中断结束的代码
- (void)xbAudioManagerPlayerEndInteruption:(XBAudioManager*)player {
    NSLog(@"%s",__func__);
}


- (void)updateToolbarItemsWithTypes:(NSArray *)types {

    NSMutableArray *barButtonItems = [NSMutableArray array];
    for (NSNumber *num in types) {
        XBMakeToolbarItemType type = (XBMakeToolbarItemType) [num integerValue];
        switch (type) {
            case XBMakeToolbarItemTypeBack: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(goBack)];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeCancel: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStylePlain target:self action:@selector(cancelAction)];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeConfirm: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"确定" style:UIBarButtonItemStylePlain target:self action:@selector(confirmAction)];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeNextStep: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"下一步" style:UIBarButtonItemStylePlain target:self action:@selector(nextStepAction)];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeNextFlexibleSpace: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeNextSwapCamera: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"切换摄像头" style:UIBarButtonItemStylePlain target:self action:@selector(swapCamera)];
                [barButtonItems addObject:item];
                break;
            }
            default:
                break;
        }
    }
    [self.topToolbar setItems:barButtonItems animated:NO];
}

- (void)nextStepAction {

}

- (void)confirmAction {

}

- (void)cancelAction {

    if (self.stage == XBMakeContentStageCaptureAddContent) {
        [self switchCaptureMode];
    }
}


#pragma mark - Camera

- (BOOL)isCameraAvailable {
    return [UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera];
}

- (BOOL)isFrontCameraAvailable {
    return [UIImagePickerController isCameraDeviceAvailable:UIImagePickerControllerCameraDeviceFront];
}

- (BOOL)isRearCameraAvailable {
    return [UIImagePickerController isCameraDeviceAvailable:UIImagePickerControllerCameraDeviceRear];
}

- (BOOL)hasMultipleCameras {
    NSArray *devices = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
    return devices != nil && [devices count] > 1;
}

- (AVCaptureDevice *)cameraWithPosition:(AVCaptureDevicePosition)position {
    NSArray *devices = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
    for (AVCaptureDevice *device in devices) {
        if (device.position == position) {
            return device;
        }
    }
    return nil;
}

- (void)swapCamera {

    NSUInteger cameraCount = [[AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo] count];
    if (cameraCount > 1) {
        NSError *error;
        AVCaptureDevice *newCamera = nil;
        AVCaptureDeviceInput *newInput = nil;
        AVCaptureDevicePosition position = [[self.captureInput device] position];
        if (position == AVCaptureDevicePositionFront) {
            newCamera = [self cameraWithPosition:AVCaptureDevicePositionBack];
        } else {
            newCamera = [self cameraWithPosition:AVCaptureDevicePositionFront];
        }
        //生成新的输入
        newInput = [AVCaptureDeviceInput deviceInputWithDevice:newCamera error:&error];

        if (newInput != nil) {
            [self.session beginConfiguration];
            [self.session removeInput:self.captureInput];
            if ([self.session canAddInput:newInput]) {
                [self.session addInput:newInput];
                self.captureInput = newInput;
            } else {
                [self.session addInput:self.captureInput];
            }
            [self.session commitConfiguration];

        } else if (error) {
            NSLog(@"toggle carema failed, error = %@", error);
        }
    }
}
@end
