#import "XBMakeViewController.h"
#import "XBMacroDefinition.h"
#import "XBMakeToolView.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import "XBVideoEditController.h"
#import "XBTextEditController.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMakeContentItemView.h"
#import "XBCameraViewController.h"
#import "XBVideoPreViewController.h"
#import "UINavigationController+WXSTransition.h"
#import "MSRecordControl.h"
#import "XBPublishRecordAudioViewController.h"
#import "XBAVTools.h"



typedef NS_ENUM(NSUInteger, XBMakeToolbarItemType) {
    XBMakeToolbarItemTypeBack,
    XBMakeToolbarItemTypeCancel,
    XBMakeToolbarItemTypeNextStep,
    XBMakeToolbarItemTypeFlexibleSpace,
    XBMakeToolbarItemTypeSwapCamera,
};

typedef NS_ENUM(NSUInteger, XBMakeContentStage) {
    XBMakeContentStageCapture,
    XBMakeContentStageCaptureConfirm,
    XBMakeContentStageCaptureAddContent
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

@interface XBMakeViewController () <XBMakeToolViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, XBVideoEditControllerDelegate, XBCameraViewControllerDelegate, MSRecordControlDelegate,XBPublishRecordAudioViewDelegate,XBTextEditControllerDelegate>
@property (nonatomic, strong) XBMakeToolbar *topToolbar;
@property (nonatomic, strong) UIImageView *captureImageView;
@property (nonatomic, strong) XBMakeToolView *toolView;

@property (nonatomic, strong) AVCaptureSession *session;
@property (nonatomic, strong) AVCaptureDeviceInput *captureInput;
@property (nonatomic, strong) AVCaptureStillImageOutput *imageOutput;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *captureLayer;
@property (nonatomic, strong) MSRecordControl *captureBtn;

@property (nonatomic, assign) XBMakeContentStage stage;

@property (nonatomic, strong) UIButton *dismissButton;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *confirmButton;


@property (nonatomic, assign) CGFloat buttonsCenterY;
@property (nonatomic, assign) CGSize buttonsSize;
@end

@implementation XBMakeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor blackColor];
    self.buttonsSize = CGSizeMake(60, 60);
    self.buttonsCenterY = SCREEN_HEIGHT - BOTTOM_MARGIN - 80;

    [self initCapture];
    [self initTopToolBar];
    
    self.contentImage ? [self switchAddContentMode] : [self switchCaptureMode];

}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (self.stage == XBMakeContentStageCapture) {
        if (![self.session isRunning]) {
            [self.session startRunning];
        }
    }
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillAppear:animated];
}


- (void)initCapture {

    AVCaptureSession *session = [[AVCaptureSession alloc] init];
    self.session = session;


    if ([session canSetSessionPreset:AVCaptureSessionPreset1280x720]) {
        session.sessionPreset = AVCaptureSessionPreset1280x720;
    }

    AVCaptureDevice *device = nil;
    NSArray *cameras = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
    for (AVCaptureDevice *camera in cameras) {
        if (camera.position == AVCaptureDevicePositionBack) {
            device = camera;
        }
    }
    if (!device) {
        return;
    }

    NSError *error = nil;
    AVCaptureDeviceInput *captureInput = [[AVCaptureDeviceInput alloc] initWithDevice:device error:&error];
    if (error) {
        NSLog(@"%@", error.localizedDescription);
        return;
    }
    self.captureInput = captureInput;

    AVCaptureStillImageOutput *imageOutput = [[AVCaptureStillImageOutput alloc] init];
    NSDictionary *setting = @{AVVideoCodecKey: AVVideoCodecJPEG};
    [imageOutput setOutputSettings:setting];
    self.imageOutput = imageOutput;


    if ([session canAddInput:captureInput]) {
        [session addInput:captureInput];
    }
    if ([session canAddOutput:imageOutput]) {
        [session addOutput:imageOutput];
    }

    AVCaptureVideoPreviewLayer *videoLayer = [AVCaptureVideoPreviewLayer layerWithSession:session];
    videoLayer.frame = self.view.bounds;
    videoLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;

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

- (void)reCapture {
    [self switchCaptureMode];
    if (![self.session isRunning]) {
        [self.session startRunning];
    }
}
- (void)switchCaptureMode {
    self.stage = XBMakeContentStageCapture;
    self.topToolbar.hidden = NO;
    
    self.contentImage = nil;
    self.captureImageView.image = nil;
    self.captureImageView.hidden = YES;

    self.cancelButton.hidden = YES;
    self.confirmButton.hidden = YES;

    // 捕获层
    self.captureLayer.hidden = NO;

    // 更新状态栏
    [self updateToolbarItemsWithTypes:@[@(XBMakeToolbarItemTypeFlexibleSpace), @(XBMakeToolbarItemTypeSwapCamera)]];

    if (!self.captureBtn) {
        self.captureBtn = [MSRecordControl controlWithMode:MSRecordControlTap];
        self.captureBtn.delegate = self;
        self.captureBtn.bounds = (CGRect){{0,0},self.buttonsSize};
        self.captureBtn.layer.cornerRadius = (CGFloat) (self.buttonsSize.width / 2.0);
        self.captureBtn.layer.backgroundColor = [[UIColor whiteColor] colorWithAlphaComponent:0.6].CGColor;
        self.captureBtn.progressBarColor = [UIColor colorWithRed:(CGFloat) (39.0 / 255.0) green:(CGFloat) (39.0 / 255.0) blue:(CGFloat) (39.0 / 255.0) alpha:1];

        CALayer *layer = [[CALayer alloc] init];
        layer.frame = CGRectInset(self.captureBtn.bounds, 8, 8);
        layer.cornerRadius = (CGFloat) (layer.bounds.size.width / 2.0);
        layer.backgroundColor = [UIColor whiteColor].CGColor;
        [self.captureBtn.layer insertSublayer:layer atIndex:0];

    }

    if (!self.captureBtn.superview) {
        self.captureBtn.center = CGPointMake(CGRectGetMidX(self.view.bounds), self.buttonsCenterY);
        [self.view addSubview:self.captureBtn];
    }

    if (!self.dismissButton.superview) {
        self.dismissButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [self.dismissButton setImage:[UIImage imageNamed:@"post_icon_xiatui_normal"] forState:UIControlStateNormal];
        self.dismissButton.frame = CGRectMake(0, 0, 60, 60);
        self.dismissButton.center = CGPointMake((CGFloat) (CGRectGetMidX(self.view.bounds) / 2.0), self.buttonsCenterY);
        [self.dismissButton addTarget:self action:@selector(dismissNotAlert) forControlEvents:UIControlEventTouchUpInside];
        [self.view addSubview:self.dismissButton];
    }

    self.dismissButton.hidden = NO;
    self.captureBtn.hidden = NO;

    self.toolView.hidden = YES;

}

- (void)captureImage {

    AVCaptureConnection *connection = [self.imageOutput connectionWithMediaType:AVMediaTypeVideo];
    [self.imageOutput captureStillImageAsynchronouslyFromConnection:connection completionHandler:^(CMSampleBufferRef imageDataSampleBuffer, NSError *error) {

        NSData *imageData = [AVCaptureStillImageOutput jpegStillImageNSDataRepresentation:imageDataSampleBuffer];
        UIImage *image = [UIImage imageWithData:imageData];

        [self switchConfirmImageModeWithImage:image];
    }];

}

- (void)switchConfirmImageModeWithImage:(UIImage *)image {
    if (!image) {
        return;
    }
    dispatch_async(dispatch_get_main_queue(), ^{
        self.stage = XBMakeContentStageCaptureConfirm;
        self.topToolbar.hidden = YES;

        if (!self.captureImageView) {
            self.captureImageView = [UIImageView new];
            self.captureImageView.backgroundColor = [UIColor clearColor];
            self.captureImageView.frame = self.view.bounds;
        }
        if (!self.captureImageView.superview) {
            [self.view insertSubview:self.captureImageView atIndex:0];
        }

        self.captureImageView.image = image;
        self.contentImage = image;
        
        self.captureImageView.hidden = NO;
        
        self.captureLayer.hidden = YES;
        self.captureBtn.hidden = YES;
        self.dismissButton.hidden = YES;

        [self.session stopRunning];


        if (!self.cancelButton.superview) {
            self.cancelButton = [UIButton buttonWithType:UIButtonTypeCustom];
            [self.cancelButton setImage:[UIImage imageNamed:@"post_icon_retake_big"] forState:UIControlStateNormal];
            self.cancelButton.frame = CGRectMake(0, 0, 60, 60);
            [self.cancelButton addTarget:self action:@selector(reCapture) forControlEvents:UIControlEventTouchUpInside];
            self.cancelButton.center = CGPointMake((CGFloat) (self.view.bounds.size.width / 3.0), self.buttonsCenterY);
            [self.view addSubview:self.cancelButton];
        }

        if (!self.confirmButton.superview) {
            self.confirmButton = [UIButton buttonWithType:UIButtonTypeCustom];
            [self.confirmButton setImage:[UIImage imageNamed:@"post_icon_check_big"] forState:UIControlStateNormal];
            self.confirmButton.frame = CGRectMake(0, 0, 60, 60);
            [self.confirmButton addTarget:self action:@selector(switchAddContentMode) forControlEvents:UIControlEventTouchUpInside];

            self.confirmButton.center = CGPointMake((CGFloat) (self.view.bounds.size.width / 3.0 * 2), self.buttonsCenterY);
            [self.view addSubview:self.confirmButton];
        }

        self.cancelButton.hidden = NO;
        self.confirmButton.hidden = NO;
    });

}

- (void)switchAddContentMode {
    
    dispatch_async(dispatch_get_main_queue(), ^{

        self.stage = XBMakeContentStageCaptureAddContent;
        self.cancelButton.hidden = YES;
        self.confirmButton.hidden = YES;

        [self updateToolbarItemsWithTypes:@[@(XBMakeToolbarItemTypeCancel), @(XBMakeToolbarItemTypeFlexibleSpace), @(XBMakeToolbarItemTypeNextStep)]];
        self.topToolbar.hidden = NO;

        
        if (!self.captureImageView) {
            self.captureImageView = [UIImageView new];
            self.captureImageView.backgroundColor = [UIColor clearColor];
            self.captureImageView.frame = self.view.bounds;
        }
        if (!self.captureImageView.superview) {
            [self.view insertSubview:self.captureImageView atIndex:0];
        }
        
        self.captureImageView.image = self.contentImage;
        self.captureImageView.hidden = NO;
        
        self.captureLayer.hidden = YES;
        self.captureBtn.hidden = YES;
        self.dismissButton.hidden = YES;
        
        if ([self.session isRunning]) {
            [self.session stopRunning];
        }
        
        

        CGFloat toolViewWidth = 220;
        CGFloat toolViewHeight = 60;

        if (!self.toolView) {
            self.toolView = [XBMakeToolView toolView];
            self.toolView.delegate = self;
        }
        if (!self.toolView.superview) {
            self.toolView.frame = CGRectMake(0,0, toolViewWidth, toolViewHeight);
            self.toolView.center = CGPointMake(CGRectGetMidX(self.view.bounds), self.buttonsCenterY);
            [self.view addSubview:self.toolView];
        }
        self.toolView.hidden = NO;

    });

}


- (void)addVideo {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:nil preferredStyle:UIAlertControllerStyleActionSheet];
    UIAlertAction *camera = [UIAlertAction actionWithTitle:@"拍摄" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {

        XBCameraViewController *vc = [[XBCameraViewController alloc] init];
        vc.captureMode = XBCameraCaptureModeVideo;
        vc.delegate = self;
        [self presentViewController:vc animated:YES completion:nil];


    }];
    UIAlertAction *album = [UIAlertAction actionWithTitle:@"相册" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {
        UIImagePickerController *picker = [[UIImagePickerController alloc] init];
        picker.mediaTypes = @[(NSString *) kUTTypeMovie];
        picker.videoQuality = UIImagePickerControllerQualityTypeHigh;
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

- (void)addText{
    [self addTextWithAttributedText:nil];
}
- (void)addTextWithAttributedText:(NSAttributedString *)attributedText {
    XBTextEditController *textEditController = [[XBTextEditController alloc] init];
    textEditController.contentLabel.attributedText = attributedText;
    textEditController.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    textEditController.delegate = self;
    [self presentViewController:textEditController animated:NO completion:nil];
}

- (void)addAudio {
    XBPublishRecordAudioViewController *controll = [[XBPublishRecordAudioViewController alloc] init];
    controll.delegate = self;
    controll.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    [self presentViewController:controll animated:NO completion:nil];

}
- (void)goBackAndAlert {

    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:@"确认要放弃本次编辑吗？" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleDefault handler:nil];
    UIAlertAction *confirm = [UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_Nonnull action) {
        [self cancelAction];
    }];

    [alertController addAction:cancel];
    [alertController addAction:confirm];
    [self presentViewController:alertController animated:YES completion:nil];
}

- (void)dismissNotAlert {
    if (self.navigationController.topViewController == self && self.navigationController.viewControllers.firstObject != self) {
        [self.navigationController popViewControllerAnimated:YES];
    } else {
        UIViewController *vc = (id) self.navigationController ?: self;
        if (vc.presentingViewController) {
            [vc dismissViewControllerAnimated:YES completion:nil];
        }
    }
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation {
    return UIStatusBarAnimationNone;
}

#pragma mark - MSRecordControlDelegate

- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state {
    if (state == UIGestureRecognizerStateEnded) {
        [self captureImage];
    }
}

#pragma mark - XBMakeToolViewDelegate


- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchDownItemAtIndex:(NSInteger)index {
}


- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchUpAtIndex:(NSInteger)index {
    switch (index) {
        case 0:
            [self addText];
            break;
        case 1:
            [self addAudio];
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

        XBVideoEditController *vc = [[XBVideoEditController alloc] init];
        vc.videoUrl = info[UIImagePickerControllerMediaURL];
        vc.delegate = self;
        UINavigationController *nv = [[UINavigationController alloc] initWithRootViewController:vc];
        [self presentViewController:nv animated:YES completion:nil];
    }];

}

#pragma mark - XBTextEditViewControllerDelegate
- (void)didEdited:(XBTextEditController *)textEditController{
    NSAttributedString *attributedString = textEditController.contentLabel.attributedText;
    if (attributedString.length > 0) {
        XBMakeContentItemView *itemView = [XBMakeContentItemView contentItemViewWithAttributedString:attributedString];
        __weak typeof(self)wSelf = self;
        __weak typeof(itemView)wItemView = itemView;
        itemView.didClickedEditBtn = ^{
            [wItemView removeFromSuperview];
            [wSelf addTextWithAttributedText:attributedString];
        };
        [self.view addSubview:itemView];
    }
}
#pragma mark - XBAudioManagerPlayDelegate, XBAudioManagerRecoderDelegate

- (void)XBPublishRecordFinish:(id)audioView audioPath:(NSString *)path duration:(NSTimeInterval)duration {
    XBMakeContentItemView *itemView = [XBMakeContentItemView contentItemViewWithAudioURL:[NSURL URLWithString:path]];
    __weak typeof(itemView)wItemView = itemView;
    itemView.didClickedContentView = ^{
        NSLog(@"audio playing.....");
        [wItemView startVoiceAnimation];
        [XBAVTools playAudioWithFilePath:path independent:NO completedHandle:^(NSError *error) {
            [wItemView stopVoiceAnimation];
            NSLog(@"audio played");
        }];
    };
    [self.view addSubview:itemView];

}
- (void)XBPublishRecordDismiss:(UIViewController *)vc {
    [vc dismissViewControllerAnimated:NO completion:nil];
}

#pragma mark - XBVideoEditControllerDelegate

- (void)videoEditController:(XBVideoEditController *)videoEditController didProcessingCompletedWithVideoUrl:(NSURL *)url {

    XBMakeContentItemView *itemVIew = [XBMakeContentItemView contentItemViewWithVideoUrl:url];
    __weak typeof(itemVIew) wItemVIew = itemVIew;
    itemVIew.didClickedContentView = ^{
        NSLog(@"play url:%@",url.absoluteString);
        [XBAVTools playVideoWithFilePath:url.absoluteString inView:wItemVIew.contentView independent:NO completedHandle:^(NSError *error) {
            NSLog(@"哈哈");
        }];
    };
    [self.view addSubview:itemVIew];

}

#pragma mark - XBCameraViewControllerDelegate

- (void)cameraViewController:(XBCameraViewController *)cameraViewController didProcessingCompletedWithVideoUrl:(NSURL *)url {
    XBMakeContentItemView *itemVIew = [XBMakeContentItemView contentItemViewWithVideoUrl:url];
    __weak typeof(itemVIew) wItemVIew = itemVIew;
    itemVIew.didClickedContentView = ^{
        NSLog(@"play url:%@",url.absoluteString);
        [XBAVTools playVideoWithFilePath:url.absoluteString inView:wItemVIew.contentView independent:NO completedHandle:^(NSError *error) {
            NSLog(@"哈哈");
        }];
    };
    [self.view addSubview:itemVIew];
}

#pragma mark - toolbar

- (void)updateToolbarItemsWithTypes:(NSArray *)types {

    NSMutableArray *barButtonItems = [NSMutableArray array];
    for (NSNumber *num in types) {
        XBMakeToolbarItemType type = (XBMakeToolbarItemType) [num integerValue];
        switch (type) {
            case XBMakeToolbarItemTypeBack: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(dismissNotAlert)];
                [item setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor whiteColor]} forState:UIControlStateNormal];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeCancel: {

                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithImage:[[UIImage imageNamed:@"nav_icon_back_white"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal] style:UIBarButtonItemStylePlain target:self action:@selector(goBackAndAlert)];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeNextStep: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"下一步" style:UIBarButtonItemStylePlain target:self action:@selector(nextStepAction)];
                [item setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor whiteColor]} forState:UIControlStateNormal];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeFlexibleSpace: {
                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
                [barButtonItems addObject:item];
                break;
            }
            case XBMakeToolbarItemTypeSwapCamera: {

                UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithImage:[[UIImage imageNamed:@"post_icon_huanjingtou_normal"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal] style:UIBarButtonItemStylePlain target:self action:@selector(swapCamera)];
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
    NSLog(@"we don`t talk any more");
}

- (void)cancelAction {

    for (UIView *view in self.view.subviews) {
        if ([view isKindOfClass:[XBMakeContentItemView class]]) {
            [view removeFromSuperview];
        }
    }
    if (self.stage == XBMakeContentStageCaptureAddContent) {
        self.onlyAddContentMode ? [self dismissNotAlert] : [self reCapture];
    }
}


#pragma mark - Camera

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

- (void)setContentImage:(UIImage *)contentImage {
    _contentImage = contentImage;
    
}

#pragma mark - dealloc
- (void)dealloc {
    NSLog(@"%s", __func__);
}
@end
