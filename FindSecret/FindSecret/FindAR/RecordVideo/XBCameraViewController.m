//
//  XBCameraViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/19.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBCameraViewController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMacroDefinition.h"

typedef void(^PropertyChangeBlock) (AVCaptureDevice * captureDevice);

@interface XBCameraViewController () <AVCaptureFileOutputRecordingDelegate>

@property (nonatomic, strong) AVCaptureSession * captureSession;
@property (nonatomic, strong) AVCaptureDeviceInput * videoDeviceInput;
@property (nonatomic, strong) AVCaptureDeviceInput * audioDeviceInput;
@property (nonatomic, strong) AVCaptureStillImageOutput * captureStillImageOutput;
@property (nonatomic, strong) AVCaptureMovieFileOutput * captureMovieFileOutPut;
@property (nonatomic, assign) UIBackgroundTaskIdentifier backgroundTaskIdentifier;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;
@property (nonatomic, strong) UIView * contentView;

@property (nonatomic, strong) UIButton *captureButton;
@property (nonatomic, strong) UIButton *dismissButton;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *confirmButton;

@property (nonatomic, assign) BOOL isConfirmMode;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSURL *videoUrl;

@property(nonatomic, strong) UIImageView *imageView;
@property(nonatomic, strong) AVPlayerItem *playerItem;
@property(nonatomic, strong) AVPlayer *player;
@property(nonatomic, strong) AVPlayerLayer *playerLayer;

@end

@implementation XBCameraViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    self.contentView.frame = self.view.bounds;
    [self.view addSubview:self.contentView];
    [self updateSessionConfigure];
    [self.captureSession startRunning];
    [self setupUI];
}
- (void)videoDidPlayToEndTimeNotification {
    if (self.captureMode == XBCameraCaptureModeVideo && self.isConfirmMode) {
        [self.player seekToTime:kCMTimeZero toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
        [self.player play];
    }
}
- (void)updateSessionConfigure {
    
    if (!_captureSession) {
        _captureSession = [[AVCaptureSession alloc] init];
        if ([_captureSession canSetSessionPreset:AVCaptureSessionPreset1280x720]) {
            _captureSession.sessionPreset=AVCaptureSessionPreset1280x720;
        }
    }
    
    if (!_videoDeviceInput) {
        NSError * error;
        _videoDeviceInput = [[AVCaptureDeviceInput alloc]initWithDevice:[self cameraWithPosition:AVCaptureDevicePositionBack] error:&error];
        if (error) {
            NSLog(@"%@",error.localizedDescription);
            return;
        }
        if ([_captureSession canAddInput:_videoDeviceInput]) {
            [_captureSession addInput:_videoDeviceInput];
        }
    }
    
    if (self.captureMode == XBCameraCaptureModePhoto) {
        
        [_captureSession beginConfiguration];
        
        // 移除麦克风输入
        if (_audioDeviceInput) {
            [_captureSession removeInput:_audioDeviceInput];
            _audioDeviceInput = nil;
        }
        // 移除视频文件输出
        if (_captureMovieFileOutPut) {
            [_captureSession removeOutput:_captureMovieFileOutPut];
            _captureMovieFileOutPut = nil;
        }
        
        
        // 添加图片输出
        if (!_captureStillImageOutput) {
            _captureStillImageOutput = [[AVCaptureStillImageOutput alloc] init];
            [_captureStillImageOutput setOutputSettings:@{AVVideoCodecKey:AVVideoCodecJPEG}];
        }
        if ([_captureSession canAddOutput:_captureStillImageOutput]) {
            [_captureSession addOutput:_captureStillImageOutput];
        }
        
        [_captureSession commitConfiguration];
        
    } else {
        
        [_captureSession beginConfiguration];
        
        // 移除图片输出
        if (_captureStillImageOutput) {
            [_captureSession removeOutput:_captureStillImageOutput];
            _captureStillImageOutput = nil;
        }
        
        
        // 添加麦克风
        if (!_audioDeviceInput) {
            NSError * error;
            _audioDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[[AVCaptureDevice devicesWithMediaType:AVMediaTypeAudio] firstObject] error:&error];
            if (error) {
                NSLog(@"%@",error.localizedDescription);
                return;
            }
        }
        if ([_captureSession canAddInput:_audioDeviceInput]) {
            [_captureSession addInput:_audioDeviceInput];
        }
        
        
        // 添加视频输出
        if (!_captureMovieFileOutPut) {
            _captureMovieFileOutPut = [[AVCaptureMovieFileOutput alloc] init];
        }
        if ([_captureSession canAddOutput:_captureMovieFileOutPut]) {
            [_captureSession addOutput:_captureMovieFileOutPut];
        }
        
        // 添加防抖
        AVCaptureConnection *connection = [_captureMovieFileOutPut connectionWithMediaType:AVMediaTypeVideo];
        if ([[UIDevice currentDevice].systemVersion floatValue] >= 8.0){
            if ([connection isVideoStabilizationSupported]) {
                connection.preferredVideoStabilizationMode = AVCaptureVideoStabilizationModeCinematic;
            }
        }
        
        [_captureSession commitConfiguration];
        
    }
    
    if (!_captureVideoPreviewLayer) {
        _captureVideoPreviewLayer = [[AVCaptureVideoPreviewLayer alloc]initWithSession:self.captureSession];
        CALayer * layer = self.contentView.layer;
        layer.masksToBounds = YES;
        _captureVideoPreviewLayer.frame = layer.bounds;
        _captureVideoPreviewLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
        [layer addSublayer:_captureVideoPreviewLayer];
    }
    
    [self addGenstureRecognizer];
    
}
- (void)setupUI {
    
    CGFloat bottomOffset = 80;
    if (!self.captureButton.superview) {
        [self.captureButton addTarget:self action:@selector(captureButtonDidTouchDown:) forControlEvents:UIControlEventTouchDown];
        [self.captureButton addTarget:self action:@selector(captureButtonDidTouchUp:) forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:self.captureButton];
    }
    NSString *title = self.captureMode == XBCameraCaptureModePhoto ? @"拍照" : @"录像";
    [self.captureButton setTitle:title forState:UIControlStateNormal];
    [self.captureButton sizeToFit];
    self.captureButton.center = CGPointMake(SCREEN_WIDTH / 2, ScreenHeight - bottomOffset);
    self.captureButton.hidden = self.isConfirmMode;
    
    if (!self.dismissButton.superview) {
        [self.dismissButton setTitle:@"关闭" forState:UIControlStateNormal];
        [self.dismissButton addTarget:self action:@selector(dismiss) forControlEvents:UIControlEventTouchUpInside];
        [self.dismissButton sizeToFit];
        self.dismissButton.center = CGPointMake(SCREEN_WIDTH / 3, ScreenHeight - bottomOffset);
        [self.view addSubview:self.dismissButton];
    }
    self.dismissButton.hidden = self.isConfirmMode;
    
    if (!self.cancelButton.superview) {
        [self.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
        [self.cancelButton addTarget:self action:@selector(cancel) forControlEvents:UIControlEventTouchUpInside];
        [self.cancelButton sizeToFit];
        self.cancelButton.center = CGPointMake(SCREEN_WIDTH / 3, ScreenHeight - bottomOffset);
        [self.view addSubview:self.cancelButton];
    }
    self.cancelButton.hidden = !self.isConfirmMode;
    
    if (!self.confirmButton.superview) {
        [self.confirmButton setTitle:@"确定" forState:UIControlStateNormal];
        [self.confirmButton addTarget:self action:@selector(confirm) forControlEvents:UIControlEventTouchUpInside];
        [self.confirmButton sizeToFit];
        self.confirmButton.center = CGPointMake((SCREEN_WIDTH / 3) * 2, ScreenHeight - bottomOffset);
        [self.view addSubview:self.confirmButton];
    }
    self.confirmButton.hidden = !self.isConfirmMode;

    if (self.captureMode == XBCameraCaptureModePhoto) {
        if (self.isConfirmMode) {
            [self.captureSession stopRunning];
            self.imageView.image = self.image;
            [self.contentView addSubview:self.imageView];
        } else {
            [self.captureSession startRunning];
            self.imageView.image = nil;
            [self.imageView removeFromSuperview];
        }
    } else{
        if (self.isConfirmMode) {
            [self.captureSession stopRunning];
            self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoUrl];
            [self.playerItem addObserver:self forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
            self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
            self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
            [self.contentView.layer addSublayer:self.playerLayer];
            self.playerLayer.frame = self.contentView.bounds;
        } else {
            [self.captureSession startRunning];
            [self.player pause];
            [self.playerLayer removeFromSuperlayer];
            self.playerLayer = nil;
            self.player = nil;
            [self.playerItem removeObserver:self forKeyPath:@"status"];
            self.playerItem = nil;
            
        }

    }
    
    
}
- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context {
    if ([keyPath isEqualToString:@"status"]) {
        switch (self.playerItem.status) {
            case AVPlayerItemStatusUnknown:
                NSLog(@"AVPlayerItemStatusUnknown");
                break;
            case AVPlayerItemStatusReadyToPlay: {
                NSLog(@"AVPlayerItemStatusReadyToPlay");
                [self.player play];
                break;
            }
            case AVPlayerItemStatusFailed:
                NSLog(@"AVPlayerItemStatusFailed");
                break;
            default:
                break;
        }
        return;
    }
    return [super observeValueForKeyPath:keyPath ofObject:object change:change context:context];
    
}

- (void)captureButtonDidTouchDown:(UIButton *)sender{
    if (self.captureMode == XBCameraCaptureModeVideo) {
        AVCaptureConnection *captureConnection=[self.captureMovieFileOutPut connectionWithMediaType:AVMediaTypeVideo];
        //根据连接取得设备输出的数据
        if (![self.captureMovieFileOutPut isRecording]) {
            //如果支持多任务则则开始多任务
            if ([[UIDevice currentDevice] isMultitaskingSupported]) {
                self.backgroundTaskIdentifier=[[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:nil];
            }
            //预览图层和视频方向保持一致
            captureConnection.videoOrientation=[self.captureVideoPreviewLayer connection].videoOrientation;
            NSString *outputFielPath=[NSTemporaryDirectory() stringByAppendingString:@"myMovie.mov"];
            NSURL *fileUrl=[NSURL fileURLWithPath:outputFielPath];
            [self.captureMovieFileOutPut startRecordingToOutputFileURL:fileUrl recordingDelegate:self];
        }
    }
}

- (void)captureButtonDidTouchUp:(UIButton *)sender{
    if (self.captureMode == XBCameraCaptureModePhoto) {
        //根据设备输出获得连接
        AVCaptureConnection *captureConnection=[self.captureStillImageOutput connectionWithMediaType:AVMediaTypeVideo];
        //根据连接取得设备输出的数据
        __weak typeof(self)wSelf = self;
        [self.captureStillImageOutput captureStillImageAsynchronouslyFromConnection:captureConnection completionHandler:^(CMSampleBufferRef imageDataSampleBuffer, NSError *error) {
            if (imageDataSampleBuffer) {
                wSelf.isConfirmMode = YES;
                NSData *imageData=[AVCaptureStillImageOutput jpegStillImageNSDataRepresentation:imageDataSampleBuffer];
                wSelf.image = [UIImage imageWithData:imageData];
                [wSelf setupUI];
            }
        }];
    } else {
        [self.captureMovieFileOutPut stopRecording];
    }
}

- (void)dismiss {
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)cancel {
    self.isConfirmMode = NO;
    [self setupUI];
    NSLog(@"%s",__func__);
}
- (void)confirm {
    if (self.captureMode == XBCameraCaptureModeVideo) {
        [self.player pause];
        [self.playerItem removeObserver:self forKeyPath:@"status"];
    }
    __weak typeof(self)wSelf = self;
    [self dismissViewControllerAnimated:YES completion:^{
        if (wSelf.captureMode == XBCameraCaptureModePhoto) {
            if ([wSelf.delegate respondsToSelector:@selector(cameraViewController:didProcessingCompletedWithImage:)]) {
                [wSelf.delegate cameraViewController:wSelf didProcessingCompletedWithImage:wSelf.image];
            }

        } else {
            if ([wSelf.delegate respondsToSelector:@selector(cameraViewController:didProcessingCompletedWithVideoUrl:)]) {
                [wSelf.delegate cameraViewController:wSelf didProcessingCompletedWithVideoUrl:wSelf.videoUrl];
            }

        }
    }];
}

- (void)dealloc{
    [self.captureSession stopRunning];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    NSLog(@"%s",__func__);
}

#pragma mark - TapGenstureRecognizer
//添加点击手势，点按时聚焦
- (void)addGenstureRecognizer{
    UITapGestureRecognizer * tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapScreen:)];
    [self.contentView addGestureRecognizer:tapGesture];
}
- (void)tapScreen:(UITapGestureRecognizer *) tapGesture{
    CGPoint point = [tapGesture locationInView:self.contentView];
    //将UI坐标转化为摄像头坐标
    CGPoint cameraPoint = [self.captureVideoPreviewLayer captureDevicePointOfInterestForPoint:point];
    [self focusWithMode:AVCaptureFocusModeAutoFocus exposureMode:AVCaptureExposureModeAutoExpose atPoint:cameraPoint];
}
//设置聚焦点
- (void)focusWithMode:(AVCaptureFocusMode)focusMode exposureMode:(AVCaptureExposureMode)exposureMode atPoint:(CGPoint)point{
    [self changeDevice:self.videoDeviceInput.device property:^(AVCaptureDevice *device) {
        if ([device isFocusModeSupported:focusMode]) {
            [device setFocusMode:AVCaptureFocusModeAutoFocus];
        }
        
        if ([device isFocusPointOfInterestSupported]) {
            [device setFocusPointOfInterest:point];
        }
        
        if ([device isExposureModeSupported:exposureMode]) {
            [device setExposureMode:AVCaptureExposureModeAutoExpose];
        }
        
        if ([device isExposurePointOfInterestSupported]) {
            [device setExposurePointOfInterest:point];
        }
        
    }];
}


- (void)changeDevice:(AVCaptureDevice *)device property:(PropertyChangeBlock ) propertyChange{
    NSError * error;
    //注意改变设备属性前一定要首先调用lockForConfiguration:调用完之后使用unlockForConfiguration方法解锁
    if ([device lockForConfiguration:&error]) {
        propertyChange(device);
        [device unlockForConfiguration];
    } else {
        NSLog(@"设置设备属性过程发生错误，错误信息：%@", error.localizedDescription);
    }
}

#pragma mark - 视频输出代理
-(void)captureOutput:(AVCaptureFileOutput *)captureOutput didStartRecordingToOutputFileAtURL:(NSURL *)fileURL fromConnections:(NSArray *)connections{
    NSLog(@"开始录制...");
}
-(void)captureOutput:(AVCaptureFileOutput *)captureOutput didFinishRecordingToOutputFileAtURL:(NSURL *)outputFileURL fromConnections:(NSArray *)connections error:(NSError *)error{
    NSLog(@"视频录制完成. %@",outputFileURL);
    //视频录入完成之后在后台将视频存储到相簿
    self.isConfirmMode = YES;
    self.videoUrl = outputFileURL;
    [self setupUI];
    UIBackgroundTaskIdentifier lastBackgroundTaskIdentifier = self.backgroundTaskIdentifier;
    self.backgroundTaskIdentifier = UIBackgroundTaskInvalid;
    
    
    
//    ALAssetsLibrary *assetsLibrary=[[ALAssetsLibrary alloc]init];
//    [assetsLibrary writeVideoAtPathToSavedPhotosAlbum:outputFileURL completionBlock:^(NSURL *assetURL, NSError *error) {
//        if (error) {
//            NSLog(@"保存视频到相簿过程中发生错误，错误信息：%@",error.localizedDescription);
//        }
//        if (lastBackgroundTaskIdentifier!=UIBackgroundTaskInvalid) {
//            [[UIApplication sharedApplication] endBackgroundTask:lastBackgroundTaskIdentifier];
//        }
//        NSLog(@"成功保存视频到相簿.");
//    }];
    
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
        AVCaptureDevicePosition position = [[self.videoDeviceInput device] position];
        if (position == AVCaptureDevicePositionFront) {
            newCamera = [self cameraWithPosition:AVCaptureDevicePositionBack];
        } else {
            newCamera = [self cameraWithPosition:AVCaptureDevicePositionFront];
        }
        
        newInput = [AVCaptureDeviceInput deviceInputWithDevice:newCamera error:&error];
        if (newInput != nil) {
            [self.captureSession beginConfiguration];
            [self.captureSession removeInput:self.videoDeviceInput];
            if ([self.captureSession canAddInput:newInput]) {
                [self.captureSession addInput:newInput];
                self.videoDeviceInput = newInput;
            } else {
                [self.captureSession addInput:self.videoDeviceInput];
            }
            [self.captureSession commitConfiguration];
        } else if (error) {
            NSLog(@"toggle carema failed, error = %@", error);
        }
    }
}

#pragma mark - getter
- (UIImageView *)imageView {
    if (!_imageView) {
        _imageView = [[UIImageView alloc] initWithFrame:self.view.bounds];
    }
    return _imageView;
}
- (UIButton *)captureButton {
    if (!_captureButton) {
        _captureButton = [UIButton buttonWithType:UIButtonTypeCustom];
    }
    return _captureButton;
}
- (UIButton *)dismissButton {
    if (!_dismissButton) {
        _dismissButton = [UIButton buttonWithType:UIButtonTypeCustom];
    }
    return _dismissButton;
}
- (UIButton *)cancelButton {
    if (!_cancelButton) {
        _cancelButton = [UIButton buttonWithType:UIButtonTypeCustom];
    }
    return _cancelButton;
}
- (UIButton *)confirmButton {
    if (!_confirmButton) {
        _confirmButton = [UIButton buttonWithType:UIButtonTypeCustom];
    }
    return _confirmButton;

}
- (UIView *)contentView{
    if (!_contentView) {
        _contentView = [[UIView alloc] init];
    }
    return _contentView;
}
@end
