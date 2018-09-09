//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import "XBMakeContentItemView.h"
#import "XBMacroDefinition.h"
#import <AVFoundation/AVFoundation.h>
#import "XBMakeAudioItemView.h"
#import "XBAVTools.h"
@interface XBMakeContentItemView ()
@property (nonatomic, assign, readwrite) XBMakeContentItemType type;
@property (nonatomic, strong) CAShapeLayer *border;
@property (nonatomic, strong, readwrite) NSAttributedString *attributedText;
@property (nonatomic, strong, readwrite) NSURL *videoURL;
@property (nonatomic, strong, readwrite) NSURL *audioURL;
@property (nonatomic, strong, readwrite) UIImage *thumbnailImage;
@end


@implementation XBMakeContentItemView {

}
- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self initialize];
    }
    return self;
}
- (void)awakeFromNib {
    [super awakeFromNib];
    [self initialize];
}
- (void)initialize {
    self.border = [CAShapeLayer layer];
    [self.wrapView.layer addSublayer:self.border];
}
- (IBAction)tap:(UITapGestureRecognizer *)sender {
    if (self.didClickedContentView) {
        self.didClickedContentView();
    }
}

- (IBAction)pan:(UIPanGestureRecognizer *)recognizer {

    switch (recognizer.state) {
        case UIGestureRecognizerStateBegan: {
            break;
        }
        case UIGestureRecognizerStateChanged: {
            CGPoint translation = [recognizer translationInView:recognizer.view];
            recognizer.view.center = CGPointMake(recognizer.view.center.x + translation.x, recognizer.view.center.y + translation.y);
            [recognizer setTranslation:CGPointMake(0, 0) inView:recognizer.view];
            break;
        }
        case UIGestureRecognizerStateEnded: {
            break;
        }
        default:
            break;
    }
}

- (IBAction)close:(id)sender {
    [self removeFromSuperview];
    if (self.didClickedCloseBtn) {
        self.didClickedCloseBtn();
    }
}
- (IBAction)edit:(id)sender {
    if (self.didClickedEditBtn) {
        self.didClickedEditBtn();
    }
}

+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString {
    
    UILabel *contentLab = [[UILabel alloc] init];
    contentLab.attributedText = attributedString;
    contentLab.numberOfLines = 0;
    contentLab.frame = CGRectMake(0, 0, ScreenWidth-40, 1000);
    [contentLab sizeToFit];

    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    view.type = XBMakeContentItemTypeText;
    view.attributedText = attributedString;
    view.frame = CGRectInset(contentLab.bounds, -20, -20);
    [view.contentView addSubview:contentLab];
    view.center = CGPointMake((CGFloat) (SCREEN_WIDTH / 2.0), (CGFloat) (SCREEN_HEIGHT / 2.0));
    return view;
}

+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoURL {

    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.image = [self thumbnailImageForVideo:videoURL];
    CGSize size = imageView.image.size;
    CGFloat rate = size.width / size.height;
    CGFloat width = (CGFloat) (SCREEN_WIDTH / 6.0);
    CGFloat height = width / rate;
    size.width = width;
    size.height = height;
    imageView.frame = CGRectMake(0, 0, size.width, size.height);

    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    view.type = XBMakeContentItemTypeVideo;
    view.thumbnailImage = imageView.image;
    view.videoURL = videoURL;
    view.editBtn.hidden = YES;
    view.frame = CGRectInset(imageView.bounds, -20, -20);
    [view.contentView addSubview:imageView];
    view.center = CGPointMake((CGFloat) (SCREEN_WIDTH / 2.0), SCREEN_HEIGHT / 2);
    return view;

}


+ (UIImage *)thumbnailImageForVideo:(NSURL *)videoURL {
    AVURLAsset *videoAsset = [AVURLAsset URLAssetWithURL:videoURL options:@{AVURLAssetPreferPreciseDurationAndTimingKey: @(NO)}];
    AVAssetImageGenerator *assetImageGenerator = [[AVAssetImageGenerator alloc] initWithAsset:videoAsset];
    assetImageGenerator.appliesPreferredTrackTransform = YES;
    assetImageGenerator.apertureMode = AVAssetImageGeneratorApertureModeEncodedPixels;
    CGImageRef thumbnailImageRef = NULL;
    CFTimeInterval thumbnailImageTime = 1;
    NSError *thumbnailImageGenerationError = nil;
    thumbnailImageRef = [assetImageGenerator copyCGImageAtTime:CMTimeMake((int64_t) thumbnailImageTime, 60) actualTime:NULL error:&thumbnailImageGenerationError];
    if (!thumbnailImageRef)
        NSLog(@"thumbnailImageGenerationError %@", thumbnailImageGenerationError);

    UIImage *thumbnailImage = thumbnailImageRef ? [[UIImage alloc] initWithCGImage:thumbnailImageRef] : nil;

    return thumbnailImage;
}

+ (instancetype)contentItemViewWithAudioURL:(NSURL *)audioURL {
    XBMakeAudioItemView *itemView = [[XBMakeAudioItemView alloc] initWithFrame:CGRectMake(0, 0, 180, 40)];
    itemView.descLabel.text = [NSString stringWithFormat:@"%.01fs",[XBAVTools mediaDurationWithPath:audioURL.absoluteString]];
    
    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    view.audioURL = audioURL;
    view.type = XBMakeContentItemTypeAudio;
    view.editBtn.hidden = YES;
    view.frame = CGRectInset(itemView.bounds, -20, -20);
    [view.contentView addSubview:itemView];
    view.center = CGPointMake((CGFloat) (SCREEN_WIDTH / 2.0), (CGFloat) (SCREEN_HEIGHT / 2.0));
    return view;

}
- (void)startVoiceAnimation {
    for (UIView *view in self.contentView.subviews) {
        if ([view isKindOfClass:XBMakeAudioItemView.self]) {
            [(XBMakeAudioItemView *)view startAnimation];
        }
    }
}
- (void)stopVoiceAnimation {
    for (UIView *view in self.contentView.subviews) {
        if ([view isKindOfClass:XBMakeAudioItemView.self]) {
            [(XBMakeAudioItemView *)view stopAnimation];
        }
    }
}
- (void)layoutSubviews {
    [super layoutSubviews];
    self.border.path = [UIBezierPath bezierPathWithRect:self.wrapView.bounds].CGPath;
    self.border.fillColor = nil;
    self.border.lineWidth = 1;
    self.border.lineDashPattern = @[@4, @2];
    self.border.strokeColor = [UIColor whiteColor].CGColor;
}

@end
