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
#import "MSRecordControl.h"

typedef void(^PropertyChangeBlock)(AVCaptureDevice *captureDevice);

@interface XBCameraViewController () <AVCaptureFileOutputRecordingDelegate, MSRecordControlDelegate>

@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic, strong) AVCaptureDeviceInput *videoDeviceInput;
@property (nonatomic, strong) AVCaptureDeviceInput *audioDeviceInput;
@property (nonatomic, strong) AVCaptureStillImageOutput *captureStillImageOutput;
@property (nonatomic, strong) AVCaptureMovieFileOutput *captureMovieFileOutPut;
@property (nonatomic, assign) UIBackgroundTaskIdentifier backgroundTaskIdentifier;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic, strong) UIView *contentView;

@property (nonatomic, strong) MSRecordControl *recordControl;
@property (nonatomic, strong) CALayer *recordLayer;
@property (nonatomic, strong) UIButton *dismissButton;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *confirmButton;

@property (nonatomic, assign) BOOL isConfirmMode;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSURL *videoUrl;

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) AVPlayerLayer *playerLayer;

@property (nonatomic, assign) CGFloat buttonsCenterY;
@property (nonatomic, assign) CGSize buttonsSize;


//----mp4----
@property (nonatomic, strong) AVAssetWriter *assetWriter;
@property (nonatomic, strong) AVAssetWriterInput *assetWriterVideoInput;
@property (nonatomic, strong) AVAssetWriterInput *assetWriterAudioInput;
@property (nonatomic, strong) NSDictionary *videoCompressionSettings;
@property (nonatomic, strong) NSDictionary *audioCompressionSettings;
@property (nonatomic, assign) BOOL canWrite;


@end

@implementation XBCameraViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    self.buttonsSize = CGSizeMake(60, 60);
    self.buttonsCenterY = SCREEN_HEIGHT - BOTTOM_MARGIN - 80;

    self.contentView.frame = self.view.bounds;
    [self.view addSubview:self.contentView];
    [self updateSessionConfigure];

    [self setupUI];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (!self.isConfirmMode) {
        [self.captureSession startRunning];
    }
}

- (void)videoDidPlayToEndTimeNotification {
    if (self.captureMode == XBCameraCaptureModeVideo && self.isConfirmMode) {
        [self.player seekToTime:kCMTimeZero toleranceBefore:kCMTimeZero toleranceAfter:kCMTimeZero];
        [self.player play];
    }
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation {
    return UIStatusBarAnimationNone;
}

- (void)updateSessionConfigure {

    if (!_captureSession) {
        _captureSession = [[AVCaptureSession alloc] init];
        if ([_captureSession canSetSessionPreset:AVCaptureSessionPreset1280x720]) {
            _captureSession.sessionPreset = AVCaptureSessionPreset1280x720;
        }
    }

    if (!_videoDeviceInput) {
        NSError *error;
        _videoDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[self cameraWithPosition:AVCaptureDevicePositionBack] error:&error];
        if (error) {
            NSLog(@"%@", error.localizedDescription);
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
            [_captureStillImageOutput setOutputSettings:@{AVVideoCodecKey: AVVideoCodecJPEG}];
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
            NSError *error;
            _audioDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[[AVCaptureDevice devicesWithMediaType:AVMediaTypeAudio] firstObject] error:&error];
            if (error) {
                NSLog(@"%@", error.localizedDescription);
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
        if ([[UIDevice currentDevice].systemVersion floatValue] >= 8.0) {
            if ([connection isVideoStabilizationSupported]) {
                connection.preferredVideoStabilizationMode = AVCaptureVideoStabilizationModeCinematic;
            }
        }

        [_captureSession commitConfiguration];

    }

    if (!_captureVideoPreviewLayer) {
        _captureVideoPreviewLayer = [[AVCaptureVideoPreviewLayer alloc] initWithSession:self.captureSession];
        CALayer *layer = self.contentView.layer;
        layer.masksToBounds = YES;
        _captureVideoPreviewLayer.frame = layer.bounds;
        _captureVideoPreviewLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
        [layer addSublayer:_captureVideoPreviewLayer];
    }

    [self addGenstureRecognizer];

}

- (void)setupUI {

    if (!self.recordControl) {
        self.recordControl = [MSRecordControl controlWithMode:(MSRecordControlMode)self.captureMode];
        self.recordControl.duration = 10;
        self.recordControl.delegate = self;
        self.recordControl.bounds = (CGRect) {{0, 0}, self.buttonsSize};
        self.recordControl.layer.cornerRadius = (CGFloat) (self.buttonsSize.width / 2.0);
        self.recordControl.layer.backgroundColor = [[UIColor whiteColor] colorWithAlphaComponent:0.6].CGColor;
        self.recordControl.progressBarColor = [UIColor colorWithRed:(CGFloat) (39.0 / 255.0) green:(CGFloat) (39.0 / 255.0) blue:(CGFloat) (39.0 / 255.0) alpha:1];

        self.recordLayer = [[CALayer alloc] init];
        self.recordLayer.frame = CGRectInset(self.recordControl.bounds, 8, 8);
        self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);
        self.recordLayer.backgroundColor = [UIColor whiteColor].CGColor;
        [self.recordControl.layer insertSublayer:self.recordLayer atIndex:0];

        self.recordControl.center = (CGPoint) {CGRectGetMidX(self.view.bounds), self.buttonsCenterY};
        [self.view addSubview:self.recordControl];

    }
    self.recordControl.hidden = self.isConfirmMode;


    if (!self.dismissButton.superview) {
        [self.dismissButton addTarget:self action:@selector(dismiss) forControlEvents:UIControlEventTouchUpInside];
        self.dismissButton.center = CGPointMake((CGFloat) (CGRectGetMidX(self.view.bounds) / 2.0), self.buttonsCenterY);
        [self.view addSubview:self.dismissButton];
    }
    self.dismissButton.hidden = self.isConfirmMode;

    if (!self.cancelButton.superview) {
        [self.cancelButton addTarget:self action:@selector(cancel) forControlEvents:UIControlEventTouchUpInside];
        self.cancelButton.center = CGPointMake(SCREEN_WIDTH / 3, self.buttonsCenterY);
        [self.view addSubview:self.cancelButton];
    }
    self.cancelButton.hidden = !self.isConfirmMode;

    if (!self.confirmButton.superview) {
        [self.confirmButton addTarget:self action:@selector(confirm) forControlEvents:UIControlEventTouchUpInside];
        self.confirmButton.center = CGPointMake((SCREEN_WIDTH / 3) * 2, self.buttonsCenterY);
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
    } else {
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


- (void)dismiss {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)cancel {
    self.isConfirmMode = NO;
    [self setupUI];
    NSLog(@"%s", __func__);
}

- (void)confirm {
    if (self.captureMode == XBCameraCaptureModeVideo) {
        [self.player pause];
        [self.playerItem removeObserver:self forKeyPath:@"status"];
    }
    __weak typeof(self) wSelf = self;
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

- (void)switchCaptureMode {
    self.captureMode = !self.captureMode;
    [self updateSessionConfigure];
    [self setupUI];
}

- (void)dealloc {
    [self.captureSession stopRunning];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    NSLog(@"%s", __func__);
}


#pragma mark - MSRecordControlDelegate

- (void)recordControlDidBeginRecord:(MSRecordControl *)recordControl {
    if (self.captureMode == XBCameraCaptureModeVideo) {
        AVCaptureConnection *captureConnection = [self.captureMovieFileOutPut connectionWithMediaType:AVMediaTypeVideo];
        //根据连接取得设备输出的数据
        if (![self.captureMovieFileOutPut isRecording]) {
            //如果支持多任务则则开始多任务
            if ([[UIDevice currentDevice] isMultitaskingSupported]) {
                self.backgroundTaskIdentifier = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:nil];
            }
            //预览图层和视频方向保持一致
            
            captureConnection.videoOrientation = [self.captureVideoPreviewLayer connection].videoOrientation;
            NSString *str = [NSString stringWithFormat:@"%ld.mov",(long)([[NSDate date] timeIntervalSince1970]*1000)];
            NSString *outputFielPath = [NSTemporaryDirectory() stringByAppendingString:str];
            NSURL *fileUrl = [NSURL fileURLWithPath:outputFielPath];
            [self.captureMovieFileOutPut startRecordingToOutputFileURL:fileUrl recordingDelegate:self];

            self.recordControl.progressBarHidden = NO;
            self.recordLayer.frame = self.recordControl.bounds;
            self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);

        }
    } else if (self.captureMode == XBCameraCaptureModePhoto) {
        //根据设备输出获得连接
        AVCaptureConnection *captureConnection = [self.captureStillImageOutput connectionWithMediaType:AVMediaTypeVideo];
        //根据连接取得设备输出的数据
        __weak typeof(self) wSelf = self;
        [self.captureStillImageOutput captureStillImageAsynchronouslyFromConnection:captureConnection completionHandler:^(CMSampleBufferRef imageDataSampleBuffer, NSError *error) {
            if (imageDataSampleBuffer) {
                wSelf.isConfirmMode = YES;
                NSData *imageData = [AVCaptureStillImageOutput jpegStillImageNSDataRepresentation:imageDataSampleBuffer];
                wSelf.image = [UIImage imageWithData:imageData];
                [wSelf setupUI];
            }
        }];
    }
}

- (void)recordControlDurationIsMaxValue:(MSRecordControl *)recordControl {
    if (self.captureMode == XBCameraCaptureModeVideo) {
        [self.captureMovieFileOutPut stopRecording];
    }
}

- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state {
    if (state == UIGestureRecognizerStateEnded) {
        if (self.captureMode == XBCameraCaptureModeVideo) {
            self.recordControl.progressBarHidden = YES;
            self.recordLayer.frame = CGRectInset(self.recordControl.bounds, 8, 8);
            self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);
            [self.recordControl reset];
            if (recordControl.progress < 1) {
                [self.captureMovieFileOutPut stopRecording];
            }
        }
        [self handleWhenTheVideoIsProcessed];
    }
}

static int gCheckCount = 10;

- (void)handleWhenTheVideoIsProcessed {
    if (self.videoUrl == nil && gCheckCount > 0) {
        NSLog(@"waiting。。。。。。")
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            gCheckCount --;
            [self handleWhenTheVideoIsProcessed];
        });
        return;
    }
    if (self.videoUrl) {
        self.isConfirmMode = YES;
        [self setupUI];
        return;
    }
    
    gCheckCount = 10;
}

#pragma mark - TapGenstureRecognizer

//添加点击手势，点按时聚焦
- (void)addGenstureRecognizer {
    UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapScreen:)];
    [self.contentView addGestureRecognizer:tapGesture];
}

- (void)tapScreen:(UITapGestureRecognizer *)tapGesture {
    CGPoint point = [tapGesture locationInView:self.contentView];
    //将UI坐标转化为摄像头坐标
    CGPoint cameraPoint = [self.captureVideoPreviewLayer captureDevicePointOfInterestForPoint:point];
    [self focusWithMode:AVCaptureFocusModeAutoFocus exposureMode:AVCaptureExposureModeAutoExpose atPoint:cameraPoint];
}

//设置聚焦点
- (void)focusWithMode:(AVCaptureFocusMode)focusMode exposureMode:(AVCaptureExposureMode)exposureMode atPoint:(CGPoint)point {
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


- (void)changeDevice:(AVCaptureDevice *)device property:(PropertyChangeBlock)propertyChange {
    NSError *error;
    //注意改变设备属性前一定要首先调用lockForConfiguration:调用完之后使用unlockForConfiguration方法解锁
    if ([device lockForConfiguration:&error]) {
        propertyChange(device);
        [device unlockForConfiguration];
    } else {
        NSLog(@"设置设备属性过程发生错误，错误信息：%@", error.localizedDescription);
    }
}





#pragma mark - 视频输出代理

- (void)captureOutput:(AVCaptureFileOutput *)captureOutput didStartRecordingToOutputFileAtURL:(NSURL *)fileURL fromConnections:(NSArray *)connections {
    NSLog(@"开始录制...");
    self.videoUrl = nil;
}

- (void)captureOutput:(AVCaptureFileOutput *)captureOutput didFinishRecordingToOutputFileAtURL:(NSURL *)outputFileURL fromConnections:(NSArray *)connections error:(NSError *)error {
    NSLog(@"视频录制完成. %@", outputFileURL);
    //视频录入完成之后在后台将视频存储到相簿
    self.videoUrl = outputFileURL;


//    UIBackgroundTaskIdentifier lastBackgroundTaskIdentifier = self.backgroundTaskIdentifier;
//    self.backgroundTaskIdentifier = UIBackgroundTaskInvalid;

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



#pragma mark -

/**
 *  设置写入视频属性
 */

- (void)setUpWriter
{

    NSString *videoPath = [NSTemporaryDirectory() stringByAppendingPathComponent:[NSString stringWithFormat:@"%ld.mp4",(long)[[NSDate date] timeIntervalSince1970] * 1000]];
    
    self.assetWriter = [AVAssetWriter assetWriterWithURL:[NSURL URLWithString:videoPath] fileType:AVFileTypeMPEG4 error:nil];
    //写入视频大小
    NSInteger numPixels = SCREEN_WIDTH * SCREEN_HEIGHT;
    
    //每像素比特
    CGFloat bitsPerPixel = 12.0;
    NSInteger bitsPerSecond = numPixels * bitsPerPixel;
    
    // 码率和帧率设置
    NSDictionary *compressionProperties = @{ AVVideoAverageBitRateKey : @(bitsPerSecond),
                                             AVVideoExpectedSourceFrameRateKey : @(15),
                                             AVVideoMaxKeyFrameIntervalKey : @(15),
                                             AVVideoProfileLevelKey : AVVideoProfileLevelH264BaselineAutoLevel };
    CGFloat width = SCREEN_WIDTH;
    CGFloat height = SCREEN_HEIGHT;
    //视频属性
    self.videoCompressionSettings = @{ AVVideoCodecKey : AVVideoCodecH264,
                                       AVVideoWidthKey : @(width * 2),
                                       AVVideoHeightKey : @(height * 2),
                                       AVVideoScalingModeKey : AVVideoScalingModeResizeAspectFill,
                                       AVVideoCompressionPropertiesKey : compressionProperties };
    
    _assetWriterVideoInput = [AVAssetWriterInput assetWriterInputWithMediaType:AVMediaTypeVideo outputSettings:self.videoCompressionSettings];
    //expectsMediaDataInRealTime 必须设为yes，需要从capture session 实时获取数据
    _assetWriterVideoInput.expectsMediaDataInRealTime = YES;
        
    // 音频设置
    self.audioCompressionSettings = @{ AVEncoderBitRatePerChannelKey : @(28000),
                                       AVFormatIDKey : @(kAudioFormatMPEG4AAC),
                                       AVNumberOfChannelsKey : @(1),
                                       AVSampleRateKey : @(22050) };
    
    _assetWriterAudioInput = [AVAssetWriterInput assetWriterInputWithMediaType:AVMediaTypeAudio outputSettings:self.audioCompressionSettings];
    _assetWriterAudioInput.expectsMediaDataInRealTime = YES;
    
    if ([_assetWriter canAddInput:_assetWriterVideoInput])
    {
        [_assetWriter addInput:_assetWriterVideoInput];
    }
    else
    {
        NSLog(@"AssetWriter videoInput append Failed");
    }
    
    if ([_assetWriter canAddInput:_assetWriterAudioInput])
    {
        [_assetWriter addInput:_assetWriterAudioInput];
    }
    else
    {
        NSLog(@"AssetWriter audioInput Append Failed");
    }
    
    _canWrite = NO;
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

- (UIButton *)dismissButton {
    if (!_dismissButton) {
        _dismissButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [_dismissButton setImage:[UIImage imageNamed:@"post_icon_xiatui_normal"] forState:UIControlStateNormal];
        _dismissButton.frame = CGRectMake(0, 0, 60, 60);
    }
    return _dismissButton;
}

- (UIButton *)cancelButton {
    if (!_cancelButton) {
        _cancelButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [_cancelButton setImage:[UIImage imageNamed:@"post_icon_retake_big"] forState:UIControlStateNormal];
        _cancelButton.frame = CGRectMake(0, 0, 60, 60);

    }
    return _cancelButton;
}

- (UIButton *)confirmButton {
    if (!_confirmButton) {
        _confirmButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [_confirmButton setImage:[UIImage imageNamed:@"post_icon_check_big"] forState:UIControlStateNormal];
        _confirmButton.frame = CGRectMake(0, 0, 60, 60);
    }
    return _confirmButton;

}

- (UIView *)contentView {
    if (!_contentView) {
        _contentView = [[UIView alloc] init];
    }
    return _contentView;
}
@end
