







#import "XBCameraViewController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMacroDefinition.h"
#import "MSRecordControl.h"

typedef void(^PropertyChangeBlock)(AVCaptureDevice *captureDevice);

@interface XBCameraViewController () <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MSRecordControlDelegate>

@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) MSRecordControl *recordControl;
@property (nonatomic, strong) CALayer *recordLayer;
@property (nonatomic, strong) UIButton *dismissButton;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *confirmButton;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, assign) CGFloat buttonsCenterY;
@property (nonatomic, assign) CGSize buttonsSize;

@property (nonatomic, assign) BOOL isConfirmMode;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSURL *videoURL;
@property (nonatomic, strong) AVPlayerItem *playerItem;
@property (nonatomic, strong) AVPlayer *player;
@property (nonatomic, strong) AVPlayerLayer *playerLayer;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic, strong) AVCaptureDeviceInput *videoDeviceInput;
@property (nonatomic, strong) AVCaptureDeviceInput *audioDeviceInput;
@property (nonatomic, strong) AVCaptureStillImageOutput *captureStillImageOutput;
@property (nonatomic, assign) XBRecordingStatus recordingStatus;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoDataOutput;
@property (nonatomic, strong) AVCaptureAudioDataOutput *audioDataOutput;
@property (nonatomic, strong) AVCaptureConnection *audioConnection;
@property (nonatomic, strong) AVCaptureConnection *videoConnection;

@property (nonatomic) dispatch_queue_t videoDataOutputQueue;
@property (nonatomic) dispatch_queue_t audioDataOutputQueue;
@property (nonatomic) dispatch_queue_t writingAssetQueue;


@property (nonatomic) CGAffineTransform videoTrackTransform;

@property (nonatomic, strong) AVAssetWriter *assetWriter;
@property (nonatomic, strong) AVAssetWriterInput *videoAssetWriterInput;
@property (nonatomic, strong) AVAssetWriterInput *audioAssetWriterInput;

@property (nonatomic, retain) __attribute__((NSObject)) CMFormatDescriptionRef outputVideoFormatDescription;
@property (nonatomic, retain) __attribute__((NSObject)) CMFormatDescriptionRef outputAudioFormatDescription;


@property (nonatomic, copy) NSString *videoFilePath;
@property (nonatomic, strong) NSDictionary *videoCompressionSettings;
@property (nonatomic, strong) NSDictionary *audioCompressionSettings;

@property (nonatomic, assign) CGFloat recordSecond;

@end

@implementation XBCameraViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // 视频播放结束通知
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(videoDidPlayToEndTimeNotification) name:AVPlayerItemDidPlayToEndTimeNotification object:nil];

    // 按钮大小
    self.buttonsSize = CGSizeMake(60, 60);

    // 按钮CenterY值
    self.buttonsCenterY = SCREEN_HEIGHT - BOTTOM_MARGIN - 80;

    // 初始化视频的输出大小
    if (CGSizeEqualToSize(self.outputSize, CGSizeZero)) {
        self.outputSize = CGSizeMake(540, 960);
    }

    // 视频输出写入队列
    self.audioDataOutputQueue = dispatch_queue_create("com.ar.media.audio.output", DISPATCH_QUEUE_SERIAL);
    self.videoDataOutputQueue = dispatch_queue_create("com.ar.media.video.output", DISPATCH_QUEUE_SERIAL);
    self.writingAssetQueue = dispatch_queue_create("com.ar.video.assetWriter", DISPATCH_QUEUE_SERIAL);
    self.videoTrackTransform = CGAffineTransformMakeRotation((CGFloat) M_PI_2);

    self.contentView.frame = self.view.bounds;
    [self.view addSubview:self.contentView];

    // 更新Session配置
    [self updateSessionConfigure];
    // 更新UI
    [self setupUI];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    // 等待界面显示完成之后，捕获 画面
    if (!self.isConfirmMode) {
        [self.captureSession startRunning];
    }
}

// 播放结束之后的回调
- (void)videoDidPlayToEndTimeNotification {
    if (self.captureMode == XBCameraCaptureModeVideo && self.isConfirmMode && self.player) {
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

// 添加摄像头
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
    } else {
        return YES;
    }
}

// 添加麦克风
- (BOOL)addAudioInputToCaptureSessionIfNeed {
    if (self.audioDeviceInput == nil) {
        NSError *error = nil;
        self.audioDeviceInput = [[AVCaptureDeviceInput alloc] initWithDevice:[AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeAudio] error:&error];
        if (error) {
            NSLog(@"配置麦克风输入错误: %@", [error localizedDescription]);
            return NO;
        } else {
            return [self addInputDeviceToCaptureSession:self.audioDeviceInput];
        }
    } else {
        return YES;
    }

}

// 添加图片输出
- (BOOL)addCaptureStillImageOutputIfNeed {
    if (self.captureStillImageOutput == nil) {
        self.captureStillImageOutput = [[AVCaptureStillImageOutput alloc] init];
        [self.captureStillImageOutput setOutputSettings:@{AVVideoCodecKey: AVVideoCodecJPEG}];
        return [self addOutputToCaptureSession:self.captureStillImageOutput];
    } else {
        return YES;
    }

}
// 添加 video输出
- (BOOL)addVideoOutputIfNeed {
    if (self.videoDataOutput == nil) {
        self.videoDataOutput = [[AVCaptureVideoDataOutput alloc] init];
        self.videoDataOutput.alwaysDiscardsLateVideoFrames = NO;
        [self.videoDataOutput setSampleBufferDelegate:self queue:self.videoDataOutputQueue];
        // 必须先添加输出设备
        if ([self addOutputToCaptureSession:self.videoDataOutput]) {
            // 才可以创建 connection
            self.videoConnection = [self.videoDataOutput connectionWithMediaType:AVMediaTypeVideo];
            return YES;
        } else {
            return NO;
        }
    } else {
        return YES;
    }
}

// 添加 audio 输出
- (BOOL)addAudioOutputIfNeed {
    if (self.audioDataOutput == nil) {
        self.audioDataOutput = [[AVCaptureAudioDataOutput alloc] init];
        [self.audioDataOutput setSampleBufferDelegate:self queue:self.audioDataOutputQueue];
        if ([self addOutputToCaptureSession:self.audioDataOutput]) {
            self.audioConnection = [self.audioDataOutput connectionWithMediaType:AVMediaTypeAudio];
            return YES;
        } else {
            return NO;
        }

    } else {
        return YES;
    }
}


- (BOOL)addInputDeviceToCaptureSession:(AVCaptureDeviceInput *)input {
    if ([self.captureSession canAddInput:input]) {
        [self.captureSession addInput:input];
        return YES;
    } else {
        NSLog(@"不能添加输入设备: %@", [input description]);
    }
    return NO;
}

- (BOOL)addOutputToCaptureSession:(AVCaptureOutput *)output {
    if ([self.captureSession canAddOutput:output]) {
        [self.captureSession addOutput:output];
        return YES;
    } else {
        NSLog(@"不能添加输出设备 %@", [output description]);
    }
    return NO;
}


- (void)updateSessionConfigure {

    if (![self addCameraInputToCaptureSessionIfNeed]) {
        NSLog(@"添加摄像头失败");
        return;
    }

    
    
    if (self.captureMode == XBCameraCaptureModePhoto) {

        [self.captureSession beginConfiguration];
        

        // 移除麦克风输入
        if (self.audioDeviceInput) {
            [self.captureSession removeInput:self.audioDeviceInput];
            self.audioDeviceInput = nil;
        }

        // 移除视频输出

        if (self.videoDataOutput) {
            [self.captureSession removeOutput:self.videoDataOutput];
            self.videoDataOutput = nil;
        }

        // 移除音频输出
        if (self.audioDataOutput) {
            [self.captureSession removeOutput:self.audioDataOutput];
            self.audioDataOutput = nil;
        }
        
        if (![self addCaptureStillImageOutputIfNeed]) {
            NSLog(@"添加图片输出失败");
        }
        
        [self.captureSession commitConfiguration];

    } else {

        [self.captureSession beginConfiguration];
        
        // 移除拍照输出
        if (self.captureStillImageOutput) {
            [self.captureSession removeOutput:self.captureStillImageOutput];
            self.captureStillImageOutput = nil;
        }
        
        if (![self addAudioInputToCaptureSessionIfNeed]) {
            NSLog(@"添加录音设备失败");
        }

        
        if (![self addVideoOutputIfNeed]) {
            NSLog(@"添加视频输出失败");
        }


        
        if (![self addAudioOutputIfNeed]) {
            NSLog(@"添加音频输出失败");
        }

        [self.captureSession commitConfiguration];
        
        // 设置录像参数
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
    
    // 每一帧的像素点
    NSInteger numPixels = self.outputSize.width * self.outputSize.height;
    
    // 比特率
    CGFloat bitsPerPixel = self.averageBitRate;
    NSInteger bitsPerSecond = numPixels * bitsPerPixel;

    // 压缩属性
    NSDictionary *compressionProperties = @{AVVideoAverageBitRateKey: @(bitsPerSecond),
                                            AVVideoExpectedSourceFrameRateKey: @(30),
                                            AVVideoMaxKeyFrameIntervalKey: @(30),
                                            AVVideoProfileLevelKey: AVVideoProfileLevelH264Main41};

    
    // mp4 格式
    self.videoCompressionSettings = [self.videoDataOutput recommendedVideoSettingsForAssetWriterWithOutputFileType:AVFileTypeMPEG4];
    
    self.videoCompressionSettings = @{AVVideoCodecKey: AVVideoCodecH264,
                                      AVVideoScalingModeKey: AVVideoScalingModeResizeAspectFill,
                                      AVVideoWidthKey: @(self.outputSize.height),
                                      AVVideoHeightKey: @(self.outputSize.width),
                                      AVVideoCompressionPropertiesKey: compressionProperties};

    
    self.audioCompressionSettings = @{AVEncoderBitRatePerChannelKey: @(28000),
                                      AVFormatIDKey: @(kAudioFormatMPEG4AAC),
                                      AVNumberOfChannelsKey: @(1),
                                      AVSampleRateKey: @(22050)};
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
        self.recordingStatus = XBRecordingStatusRecording;
    } else {
        self.recordingStatus = XBRecordingStatusFailed;
    }
}


- (void)setupUI {

    if (!self.recordControl) {
        self.recordControl = [MSRecordControl controlWithMode:(MSRecordControlMode) self.captureMode];
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
            if ([self.captureSession isRunning]) {
                [self.captureSession stopRunning];
            }
            self.playerItem = [[AVPlayerItem alloc] initWithURL:self.videoURL];
            [self.playerItem addObserver:self forKeyPath:@"status" options:NSKeyValueObservingOptionNew context:nil];
            self.player = [[AVPlayer alloc] initWithPlayerItem:self.playerItem];
            self.playerLayer = [AVPlayerLayer playerLayerWithPlayer:self.player];
            [self.contentView.layer addSublayer:self.playerLayer];
            self.playerLayer.frame = self.contentView.bounds;
        } else {
            if (![self.captureSession isRunning]) {
                [self.captureSession startRunning];
            }
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
            if ([wSelf.delegate respondsToSelector:@selector(cameraViewController:didProcessingCompletedWithVideoURL:)]) {
                [wSelf.delegate cameraViewController:wSelf didProcessingCompletedWithVideoURL:wSelf.videoURL];
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
        self.recordSecond = 0;
        self.recordControl.progressBarHidden = NO;
        self.recordLayer.frame = self.recordControl.bounds;
        self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);
        [self startCapturing];

    } else if (self.captureMode == XBCameraCaptureModePhoto) {
        AVCaptureConnection *captureConnection = [self.captureStillImageOutput connectionWithMediaType:AVMediaTypeVideo];
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
        self.recordSecond =  recordControl.duration;
        [self stopCapturing];
    }
}

- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state {
    if (state == UIGestureRecognizerStateEnded) {
        if (self.captureMode == XBCameraCaptureModeVideo) {
            if (recordControl.progress < 1) {
                self.recordSecond = recordControl.progress * recordControl.duration;
                [self stopCapturing];
            }
            self.recordControl.progressBarHidden = YES;
            self.recordLayer.frame = CGRectInset(self.recordControl.bounds, 8, 8);
            self.recordLayer.cornerRadius = (CGFloat) (self.recordLayer.bounds.size.width / 2.0);
            [self.recordControl reset];
            [self handleWhenTheVideoIsProcessed];
        }
    }
}

static int gCheckCount = 10;

- (void)handleWhenTheVideoIsProcessed {
    
    if (self.videoURL == nil && gCheckCount > 0) {
        NSLog(@"waiting。。。。。。")
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t) (0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            gCheckCount--;
            [self handleWhenTheVideoIsProcessed];
        });
        return;
    }
    
    
    gCheckCount = 10;
    if (self.videoURL && self.recordSecond >= 3.0) {
        self.isConfirmMode = YES;
    } else if (self.videoURL && self.recordSecond < 3.0){
        self.isConfirmMode = NO;
        self.videoURL = nil;
        self.recordSecond = 0;
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"录制时间少于三秒" message:@"请重新录制" delegate:nil cancelButtonTitle:@"确定" otherButtonTitles:nil];
        [alertView show];
    } else {
        self.isConfirmMode = NO;
        self.videoURL = nil;
        self.recordSecond = 0;
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"未知错误" message:@"请重新录制" delegate:nil cancelButtonTitle:@"确定" otherButtonTitles:nil];
        [alertView show];
    }
    [self setupUI];
}


- (void)checkVideoRecordDurtion {
    
}
#pragma mark - TapGenstureRecognizer


- (void)addGenstureRecognizerIfNeed {
    if (self.contentView.gestureRecognizers.count == 0) {
        UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapScreen:)];
        [self.contentView addGestureRecognizer:tapGesture];
    }
}

- (void)tapScreen:(UITapGestureRecognizer *)tapGesture {
    CGPoint point = [tapGesture locationInView:self.contentView];
    
    CGPoint cameraPoint = [self.captureVideoPreviewLayer captureDevicePointOfInterestForPoint:point];
    [self focusWithMode:AVCaptureFocusModeAutoFocus exposureMode:AVCaptureExposureModeAutoExpose atPoint:cameraPoint];
}


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
    
    if ([device lockForConfiguration:&error]) {
        propertyChange(device);
        [device unlockForConfiguration];
    } else {
        NSLog(@"设置设备属性过程发生错误，错误信息：%@", error.localizedDescription);
    }
}
- (void)captureOutput:(AVCaptureOutput *)captureOutput didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer fromConnection:(AVCaptureConnection *)connection {
    if (connection == self.videoConnection) {
        if (!self.outputVideoFormatDescription) {
            @synchronized (self) {
                CMFormatDescriptionRef formatDescription = CMSampleBufferGetFormatDescription(sampleBuffer);
                self.outputVideoFormatDescription = formatDescription;
            }
        } else {
            @synchronized (self) {
                if (self.recordingStatus == XBRecordingStatusRecording) {
                    [self appendVideoSampleBuffer:sampleBuffer];
                }
            }
        }
    } else if (connection == self.audioConnection) {
        if (!self.outputAudioFormatDescription) {
            @synchronized (self) {
                CMFormatDescriptionRef formatDescription = CMSampleBufferGetFormatDescription(sampleBuffer);
                self.outputAudioFormatDescription = formatDescription;
            }
        }
        @synchronized (self) {

            if (self.recordingStatus == XBRecordingStatusRecording) {
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

    // 生成一个随机文件名
    NSString *fileName = [NSString stringWithFormat:@"%ld.mp4",(long)([[NSDate date] timeIntervalSince1970] * 1000)];
    self.videoFilePath = [NSTemporaryDirectory() stringByAppendingPathComponent:fileName];
    self.videoURL = nil;
    
    [UIApplication sharedApplication].idleTimerDisabled = YES;

    [self resetAssetWriter];
    [self addAssetWriter];
}

- (void)stopCapturing {
    [UIApplication sharedApplication].idleTimerDisabled = NO;
    [self finishWritingVideo];
}


#pragma mark -

- (BOOL)setupAssetWriterVideoInputWithError:(NSError **)errorOut {
    if ([self.assetWriter canApplyOutputSettings:self.videoCompressionSettings forMediaType:AVMediaTypeVideo]) {
        self.videoAssetWriterInput = [[AVAssetWriterInput alloc] initWithMediaType:AVMediaTypeVideo outputSettings:self.videoCompressionSettings sourceFormatHint:self.outputVideoFormatDescription];
        self.videoAssetWriterInput.expectsMediaDataInRealTime = YES;
        self.videoAssetWriterInput.transform = self.videoTrackTransform;
        if ([self.assetWriter canAddInput:self.videoAssetWriterInput]) {
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
    if ([self.assetWriter canApplyOutputSettings:self.audioCompressionSettings forMediaType:AVMediaTypeAudio]) {
        self.audioAssetWriterInput = [[AVAssetWriterInput alloc] initWithMediaType:AVMediaTypeAudio outputSettings:self.audioCompressionSettings sourceFormatHint:self.outputAudioFormatDescription];
        self.audioAssetWriterInput.expectsMediaDataInRealTime = YES;

        if ([self.assetWriter canAddInput:self.audioAssetWriterInput]) {
            [self.assetWriter addInput:self.audioAssetWriterInput];
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

- (NSError *)cannotSetupInputError {
    NSDictionary *errorDict = @{NSLocalizedDescriptionKey: @"AVAssetWriterInput cannot be added", NSLocalizedFailureReasonErrorKey: @"Failed to initialize in AVAssetWriterInput"};
    return [NSError errorWithDomain:@"com.victor.TakeVideo" code:0 userInfo:errorDict];
}

- (void)appendVideoSampleBuffer:(CMSampleBufferRef)sampleBuffer {
    [self appendSampleBuffer:sampleBuffer ofMediaType:AVMediaTypeVideo];
}

- (void)appendAudioSampleBuffer:(CMSampleBufferRef)sampleBuffer {
    [self appendSampleBuffer:sampleBuffer ofMediaType:AVMediaTypeAudio];
}

- (void)appendSampleBuffer:(CMSampleBufferRef)sampleBuffer ofMediaType:(NSString *)mediaType {
    if (sampleBuffer == NULL) {
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

                AVAssetWriterInput *input = (mediaType == AVMediaTypeVideo) ? self.videoAssetWriterInput : self.audioAssetWriterInput;

                if (input.readyForMoreMediaData) {
                    BOOL success = [input appendSampleBuffer:sampleBuffer];
                    if (!success) {
                        NSError *error = self.assetWriter.error;
                        @synchronized (self) {
                            NSLog(@"%@", error);
                        }
                    } else {
                        NSLog(@"视频录制中...");
                    }
                } else {
                    NSLog(@"%@ 输入不能添加更多数据了，抛弃 buffer", mediaType);
                }
            }
            CFRelease(sampleBuffer);
        }
    });
}

- (void)finishWritingVideo {
    self.recordingStatus = XBRecordingStatusFinished;

    switch (self.assetWriter.status) {
        case AVAssetWriterStatusCompleted:
            break;
        case AVAssetWriterStatusWriting: {
            dispatch_async(_writingAssetQueue, ^{
                @autoreleasepool {
                    [self.assetWriter finishWritingWithCompletionHandler:^{
                        @synchronized (self) {
                            NSError *error = self.assetWriter.error;
                            if (error) {
                                NSLog(@"%@", error);
                                return;
                            }
                            NSLog(@"录制完成");
                            self.videoURL = [NSURL fileURLWithPath:self.videoFilePath];
                        }
                    }];
                }
            });
        }
            break;
        case AVAssetWriterStatusFailed:
        case AVAssetWriterStatusCancelled:
            self.recordingStatus = XBRecordingStatusFailed;
            NSLog(@"%@", self.assetWriter.error);
            self.videoURL = nil;
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
