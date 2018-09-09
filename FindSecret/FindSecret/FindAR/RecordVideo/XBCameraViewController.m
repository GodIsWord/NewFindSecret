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

@interface XBCameraViewController () <AVCaptureVideoDataOutputSampleBufferDelegate,AVCaptureAudioDataOutputSampleBufferDelegate, MSRecordControlDelegate>

@property (nonatomic, strong) UIView *contentView;

@property (nonatomic, strong) MSRecordControl *recordControl;
@property (nonatomic, strong) CALayer *recordLayer;
@property (nonatomic, strong) UIButton *dismissButton;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *confirmButton;
@property (nonatomic, assign) CGFloat buttonsCenterY;
@property (nonatomic, assign) CGSize buttonsSize;

@property (nonatomic, assign) BOOL isConfirmMode;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSURL *videoUrl;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) AVPlayerLayer *playerLayer;
@property (nonatomic, assign) UIBackgroundTaskIdentifier backgroundTaskIdentifier;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;

// 会话
@property (nonatomic, strong) AVCaptureSession *captureSession;
// 视频输入
@property (nonatomic, strong) AVCaptureDeviceInput *videoDeviceInput;
// 声音输入
@property (nonatomic, strong) AVCaptureDeviceInput *audioDeviceInput;

// ----jpg----

@property (nonatomic, strong) AVCaptureStillImageOutput *captureStillImageOutput;

//----mp4----
@property (nonatomic, assign) ZRRecordingStatus recordingStatus;
@property (nonatomic, assign) CGSize outputSize;

// 视频输出
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoDataOutput;
// 音频输出
@property (nonatomic, strong) AVCaptureAudioDataOutput *audioDataOutput;

// connection
@property (nonatomic, strong) AVCaptureConnection *audioConnection;
@property (nonatomic, strong) AVCaptureConnection *videoConnection;

// 输出队列
@property (nonatomic, strong) dispatch_queue_t videoDataOutputQueue;
@property (nonatomic, strong) dispatch_queue_t audioDataOutputQueue;
@property (nonatomic, strong) dispatch_queue_t writingAssetQueue;

// 视频跟踪方向
@property (nonatomic) CGAffineTransform videoTrackTransform;

// 视频
@property (nonatomic, strong) AVAssetWriter *assetWriter;
@property (nonatomic, strong) AVAssetWriterInput *videoAssetWriterInput;
@property (nonatomic, strong) AVAssetWriterInput *audioAssetWriterInput;

@property (nonatomic, retain) __attribute__((NSObject)) CMFormatDescriptionRef outputVideoFormatDescription;
@property (nonatomic, retain) __attribute__((NSObject)) CMFormatDescriptionRef outputAudioFormatDescription;


@property (nonatomic, copy) NSString *videoFilePath;


@property (nonatomic, strong) NSDictionary *videoCompressionSettings;
@property (nonatomic, strong) NSDictionary *audioCompressionSettings;


@end

@implementation XBCameraViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // 添加播放结束动作
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    self.buttonsSize = CGSizeMake(60, 60);
    self.buttonsCenterY = SCREEN_HEIGHT - BOTTOM_MARGIN - 80;
    
    _outputSize = CGSizeMake(540, 960);
    _audioDataOutputQueue = dispatch_queue_create("com.ar.media.audio.output", DISPATCH_QUEUE_SERIAL);
    _videoDataOutputQueue = dispatch_queue_create("com.ar.media.video.output", DISPATCH_QUEUE_SERIAL);
    _writingAssetQueue = dispatch_queue_create("com.ar.video.assetwriter", DISPATCH_QUEUE_SERIAL);
    _videoTrackTransform = CGAffineTransformMakeRotation(M_PI_2);//人像方向

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

// 视频输入
- (BOOL)addCameraInputToCaptureSessionIfNeed {
    if (self.videoDeviceInput == nil) {
        NSError *error = nil;
        self.videoDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[self cameraWithPosition:AVCaptureDevicePositionBack] error:&error];
        if (error) {
            NSLog(@"配置摄像头输入错误: %@", [error localizedDescription]);
            return NO;
        } else {
            return [self addInputDeviceToCaptureSession:self.videoDeviceInput];
        }
    }else{
        return YES;
    }
}
// 声音输入
- (BOOL)addDefaultAudioInputToCaptureSessionIfNeed {
    if (self.audioDeviceInput == nil) {
        NSError *error = nil;
        self.audioDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeAudio] error:&error];
        if (error){
            NSLog(@"配置麦克风输入错误: %@", [error localizedDescription]);
            return NO;
        } else {
            return [self addInputDeviceToCaptureSession:self.audioDeviceInput];
        }
    }else{
        return YES;
    }
    
}


// 图片输出
- (BOOL)addCaptureStillImageOutputIfNeed{
    if (self.captureStillImageOutput == nil) {
        self.captureStillImageOutput = [[AVCaptureStillImageOutput alloc] init];
        [self.captureStillImageOutput setOutputSettings:@{AVVideoCodecKey: AVVideoCodecJPEG}];
        [self addOutputToCaptureSession:self.captureStillImageOutput];
    } else{
        return YES;
    }

}
- (BOOL)addVideoOutputIfNeed {
    if (self.videoDataOutput == nil) {
        self.videoDataOutput = [[AVCaptureVideoDataOutput alloc] init];
        // 抛弃延迟的frames
        self.videoDataOutput.alwaysDiscardsLateVideoFrames = NO;
        [self.videoDataOutput setSampleBufferDelegate:self queue:self.videoDataOutputQueue];
        if([self addOutputToCaptureSession:self.videoDataOutput]) {
            self.videoConnection = [self.videoDataOutput connectionWithMediaType:AVMediaTypeVideo];
            return YES;
        }else{
            return NO;
        }
    } else {
        return YES;
    }
}

- (BOOL)addAudioOutputIfNeed {
    if (self.audioDataOutput == nil) {
        self.audioDataOutput = [[AVCaptureAudioDataOutput alloc] init];
        [self.audioDataOutput setSampleBufferDelegate:self queue:self.audioDataOutputQueue];
        if([self addOutputToCaptureSession:self.audioDataOutput]) {
            self.audioConnection = [self.audioDataOutput connectionWithMediaType:AVMediaTypeAudio];
            return YES;
        }else{
            return NO;
        }

    } else {
        return YES;
    }
}




- (BOOL)addInputDeviceToCaptureSession:(AVCaptureDeviceInput *)input {
    if ([self.captureSession canAddInput:input]){
        [self.captureSession addInput:input];
        return YES;
    } else {
        NSLog(@"不能添加输入设备: %@", [input description]);
    }
    return NO;
}

- (BOOL)addOutputToCaptureSession:(AVCaptureOutput *)output {
    if ([self.captureSession canAddOutput:output]){
        [self.captureSession addOutput:output];
        return YES;
    } else {
        NSLog(@"不能添加输出设备 %@", [output description]);
    }
    return NO;
}




- (void)updateSessionConfigure {

    // 添加摄像头
    if (![self addCameraInputToCaptureSessionIfNeed]) {
        NSLog(@"添加摄像头失败");
        return;
    }

    if (self.captureMode == XBCameraCaptureModePhoto) {

        [self.captureSession beginConfiguration];

        // 移除麦克风输入
//        if (_audioDeviceInput) {
//            [_captureSession removeInput:_audioDeviceInput];
//            _audioDeviceInput = nil;
//        }
//        // 移除视频文件输出
//        if (_captureMovieFileOutPut) {
//            [_captureSession removeOutput:_captureMovieFileOutPut];
//            _captureMovieFileOutPut = nil;
//        }


        // 添加图片输出
        if(![self addCaptureStillImageOutputIfNeed]) {
            NSLog(@"添加图片输出失败");
        }
        [self.captureSession commitConfiguration];

    } else {

        [self.captureSession beginConfiguration];

        // 移除图片输出
//        if (_captureStillImageOutput) {
//            [_captureSession removeOutput:_captureStillImageOutput];
//            _captureStillImageOutput = nil;
//        }


        // 添加
        if (![self addDefaultAudioInputToCaptureSessionIfNeed]) {
            NSLog(@"添加录音输入设备失败");
        }

        // 添加视频输出
        [self addVideoOutputIfNeed];
        // 添加音频输出
        [self addAudioOutputIfNeed];

        [self.captureSession commitConfiguration];
        
        [self setCompressionSettings];

    }

    if (!self.captureVideoPreviewLayer) {
        self.captureVideoPreviewLayer = [[AVCaptureVideoPreviewLayer alloc] initWithSession:self.captureSession];
        CALayer *layer = self.contentView.layer;
        layer.masksToBounds = YES;
        self.captureVideoPreviewLayer.frame = layer.bounds;
        self.captureVideoPreviewLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
        [layer addSublayer:self.captureVideoPreviewLayer];
    }

    [self addGenstureRecognizerIfNeed];

}



- (void)setCompressionSettings {
    
    
    NSInteger numPixels = self.outputSize.width * self.outputSize.height;
    
    //每像素比特
    CGFloat bitsPerPixel = 3;
    NSInteger bitsPerSecond = numPixels * bitsPerPixel;
    
    // 码率和帧率设置
    NSDictionary *compressionProperties = @{ AVVideoAverageBitRateKey : @(bitsPerSecond),
                                             AVVideoExpectedSourceFrameRateKey : @(30),
                                             AVVideoMaxKeyFrameIntervalKey : @(30),
                                             AVVideoProfileLevelKey : AVVideoProfileLevelH264Main41 };
    
    //这是系统推荐的使用的视频参数，但是我们不适用，因为不同的屏幕拍摄的大小肯定不一样
    self.videoCompressionSettings = [self.videoDataOutput recommendedVideoSettingsForAssetWriterWithOutputFileType:AVFileTypeMPEG4];
    
    self.videoCompressionSettings = @{ AVVideoCodecKey : AVVideoCodecH264,
                                       AVVideoScalingModeKey : AVVideoScalingModeResizeAspectFill,
                                       AVVideoWidthKey : @(self.outputSize.height),
                                       AVVideoHeightKey : @(self.outputSize.width),
                                       AVVideoCompressionPropertiesKey : compressionProperties };
    
    // 音频设置
    self.audioCompressionSettings = @{ AVEncoderBitRatePerChannelKey : @(28000),
                                       AVFormatIDKey : @(kAudioFormatMPEG4AAC),
                                       AVNumberOfChannelsKey : @(1),
                                       AVSampleRateKey : @(22050) };
}

- (void)resetAssetWriter {
    self.assetWriter = nil;
    self.videoAssetWriterInput = nil;
    self.audioAssetWriterInput = nil;
}

- (void)addAssetWriter {
    
    NSError *error = nil;
    NSFileManager *fileManager = [NSFileManager defaultManager];
    if ([fileManager fileExistsAtPath:self.videoFilePath]) {
        [fileManager removeItemAtPath:self.videoFilePath error:&error];
        if (error) {
            NSLog(@"%@", error);
            return;
        }
    }
    
    self.assetWriter = [[AVAssetWriter alloc] initWithURL:[NSURL fileURLWithPath:self.videoFilePath] fileType:AVFileTypeMPEG4 error:&error];
    if (!error) {
        [self setupAssetWriterVideoInputWithError:&error];
    }
    if (!error) {
        [self setupAssetWriterAudioInputWithError:&error];
    }
    if (!error) {
        if (![self.assetWriter startWriting]) {
            error = self.assetWriter.error;
            NSLog(@"%@", error);
        }
        self.recordingStatus = ZRRecordingStatusRecording;
    } else {
        self.recordingStatus = ZRRecordingStatusFailed;
    }
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
    [self resetAssetWriter];
    [self.captureSession stopRunning];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    NSLog(@"%s", __func__);
}


#pragma mark - MSRecordControlDelegate

- (void)recordControlDidBeginRecord:(MSRecordControl *)recordControl {
    if (self.captureMode == XBCameraCaptureModeVideo) {
//        AVCaptureConnection *captureConnection = [self.captureMovieFileOutPut connectionWithMediaType:AVMediaTypeVideo];
//        //根据连接取得设备输出的数据
//        if (![self.captureMovieFileOutPut isRecording]) {
//            //如果支持多任务则则开始多任务
//            if ([[UIDevice currentDevice] isMultitaskingSupported]) {
//                self.backgroundTaskIdentifier = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:nil];
//            }
//            //预览图层和视频方向保持一致
//
//            captureConnection.videoOrientation = [self.captureVideoPreviewLayer connection].videoOrientation;
//            NSString *str = [NSString stringWithFormat:@"%ld.mov",(long)([[NSDate date] timeIntervalSince1970]*1000)];
//            NSString *outputFielPath = [NSTemporaryDirectory() stringByAppendingString:str];
//            NSURL *fileUrl = [NSURL fileURLWithPath:outputFielPath];
//            [self.captureMovieFileOutPut startRecordingToOutputFileURL:fileUrl recordingDelegate:self];
//
//            self.recordControl.progressBarHidden = NO;
//            self.recordLayer.frame = self.recordControl.bounds;
//            self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);
//
//        }
        [self startCapturing];
        
        
        
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
        [self stopCapturing];
        
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
                [self stopCapturing];
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
- (void)addGenstureRecognizerIfNeed {
    if (self.contentView.gestureRecognizers.count == 0) {
        UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapScreen:)];
        [self.contentView addGestureRecognizer:tapGesture];
    }
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



// captureOutput->当前output  sampleBuffer->样本缓冲  connection->捕获连接

- (void)captureOutput:(AVCaptureOutput *)captureOutput didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer fromConnection:(AVCaptureConnection *)connection {
    if (connection == self.videoConnection){
        if (!self.outputVideoFormatDescription) {
            @synchronized(self) {
                CMFormatDescriptionRef formatDescription = CMSampleBufferGetFormatDescription(sampleBuffer);
                self.outputVideoFormatDescription = formatDescription;
            }
        } else {
            @synchronized(self) {
                if (self.recordingStatus == ZRRecordingStatusRecording) {
                    [self appendVideoSampleBuffer:sampleBuffer];
                }
            }
        }
    } else if (connection == self.audioConnection ){
        if (!self.outputAudioFormatDescription) {
            @synchronized(self) {
                CMFormatDescriptionRef formatDescription = CMSampleBufferGetFormatDescription(sampleBuffer);
                self.outputAudioFormatDescription = formatDescription;
            }
        }
        @synchronized(self) {
            
            if (self.recordingStatus == ZRRecordingStatusRecording) {
                [self appendAudioSampleBuffer:sampleBuffer];
            }
        }
    }
}


- (void)startCapturing {
    if (TARGET_IPHONE_SIMULATOR) {
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:nil message:@"Do not support Simulator when capturing video!" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
        [alertView show];
        return;
    }
    
    NSString *tempFileName = [NSProcessInfo processInfo].globallyUniqueString;
    self.videoFilePath = [NSTemporaryDirectory() stringByAppendingPathComponent:[tempFileName stringByAppendingPathExtension:@"mp4"]];
    self.videoUrl = nil;
    //静止自动锁屏
    [UIApplication sharedApplication].idleTimerDisabled = YES;
    
    [self resetAssetWriter];
    [self addAssetWriter];
}

- (void)stopCapturing {
    //静止自动锁屏
    [UIApplication sharedApplication].idleTimerDisabled = NO;
    
    [self finishWritingVideo];
}



#pragma mark -

- (BOOL)setupAssetWriterVideoInputWithError:(NSError **)errorOut {
    if ([self.assetWriter canApplyOutputSettings:self.videoCompressionSettings forMediaType:AVMediaTypeVideo]){
        self.videoAssetWriterInput = [[AVAssetWriterInput alloc] initWithMediaType:AVMediaTypeVideo outputSettings:self.videoCompressionSettings sourceFormatHint:self.outputVideoFormatDescription];
        self.videoAssetWriterInput.expectsMediaDataInRealTime = YES;
        self.videoAssetWriterInput.transform = self.videoTrackTransform;
        if ([self.assetWriter canAddInput:self.videoAssetWriterInput]){
            [self.assetWriter addInput:self.videoAssetWriterInput];
        } else {
            if (errorOut) {
                *errorOut = [self cannotSetupInputError];
            }
            return NO;
        }
    } else {
        if (errorOut) {
            *errorOut = [self cannotSetupInputError];
        }
        return NO;
    }
    return YES;
}

- (BOOL)setupAssetWriterAudioInputWithError:(NSError **)errorOut {
    if ([self.assetWriter canApplyOutputSettings:self.audioCompressionSettings forMediaType:AVMediaTypeAudio]){
        self.audioAssetWriterInput = [[AVAssetWriterInput alloc] initWithMediaType:AVMediaTypeAudio outputSettings:self.audioCompressionSettings sourceFormatHint:self.outputAudioFormatDescription];
        self.audioAssetWriterInput.expectsMediaDataInRealTime = YES;
        
        if ([self.assetWriter canAddInput:self.audioAssetWriterInput]){
            [self.assetWriter addInput:self.audioAssetWriterInput];
        } else {
            if (errorOut) {
                *errorOut = [self cannotSetupInputError];
            }
            return NO;
        }
    }
    else {
        if (errorOut) {
            *errorOut = [self cannotSetupInputError];
        }
        return NO;
    }
    return YES;
}

- (NSError *)cannotSetupInputError {
    NSDictionary *errorDict = @{ NSLocalizedDescriptionKey : @"AVAssetWriterInput cannot be added",
                                 NSLocalizedFailureReasonErrorKey : @"Failed to initialize in AVAssetWriterInput" };
    return [NSError errorWithDomain:@"com.victor.TakeVideo" code:0 userInfo:errorDict];
}

- (void)appendVideoSampleBuffer:(CMSampleBufferRef)sampleBuffer {
    [self appendSampleBuffer:sampleBuffer ofMediaType:AVMediaTypeVideo];
}

- (void)appendAudioSampleBuffer:(CMSampleBufferRef)sampleBuffer {
    [self appendSampleBuffer:sampleBuffer ofMediaType:AVMediaTypeAudio];
}

- (void)appendSampleBuffer:(CMSampleBufferRef)sampleBuffer ofMediaType:(NSString *)mediaType {
    if (sampleBuffer == NULL){
        NSLog(@"sampleBuffer is NULL!");
        return;
    }
    if (self.assetWriter.status == AVAssetWriterStatusCompleted) {
        return;
    }
    
    CFRetain(sampleBuffer);
    dispatch_async(self.writingAssetQueue, ^{
        @autoreleasepool {
            
            if (mediaType == AVMediaTypeVideo) {
                [self.assetWriter startSessionAtSourceTime:CMSampleBufferGetPresentationTimeStamp(sampleBuffer)];
                
                AVAssetWriterInput *input =
                (mediaType == AVMediaTypeVideo) ? self.videoAssetWriterInput : self.audioAssetWriterInput;
                
                if (input.readyForMoreMediaData){
                    BOOL success = [input appendSampleBuffer:sampleBuffer];
                    if (!success){
                        NSError *error = self.assetWriter.error;
                        @synchronized(self){
                            NSLog(@"%@", error);
                        }
                    } else {
                        NSLog(@"视频录制中...");
                    }
                } else {
                    NSLog( @"%@ 输入不能添加更多数据了，抛弃 buffer", mediaType );
                }
            }
            CFRelease(sampleBuffer);
        }
    });
}
- (void)finishWritingVideo {
    self.recordingStatus = ZRRecordingStatusFinished;
    
    switch (self.assetWriter.status) {
        case AVAssetWriterStatusCompleted:
            break;
        case AVAssetWriterStatusWriting:
        {
            dispatch_async(_writingAssetQueue, ^{
                @autoreleasepool {
                    [self.assetWriter finishWritingWithCompletionHandler:^{
                        @synchronized(self) {
                            NSError *error = self.assetWriter.error;
                            if (error) {
                                NSLog(@"%@", error);
                            }
                        }
                        NSLog(@"录制完成");
                        self.videoUrl = [NSURL fileURLWithPath:self.videoFilePath];
                    }];
                }
            });
        }
            break;
        case AVAssetWriterStatusFailed:
        case AVAssetWriterStatusCancelled:
            self.recordingStatus = ZRRecordingStatusFailed;
            NSLog(@"%@", self.assetWriter.error);
            break;
        default:
            break;
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

- (float)averageBitRate {
    if (_averageBitRate == 0) {
        _averageBitRate = 2.5;
    }
    return _averageBitRate;
}


- (AVCaptureSession *)captureSession {
    if (!_captureSession) {
        _captureSession = [[AVCaptureSession alloc] init];
        if ([_captureSession canSetSessionPreset:AVCaptureSessionPreset1280x720]) {
            _captureSession.sessionPreset = AVCaptureSessionPreset1280x720;
        }
    }
    return _captureSession;
}

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
