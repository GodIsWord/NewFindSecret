//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import "XBMakeContentItemView.h"
#import "XBMacroDefinition.h"
#import <AVFoundation/AVFoundation.h>

@interface XBMakeContentItemView ()
@property (nonatomic, strong) CAShapeLayer *border;
@property (weak, nonatomic) IBOutlet UIView *itemView;
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
    // 不要设太大 不然看不出效果
    [self.contentView.layer addSublayer:self.border];
}
- (IBAction)tap:(UITapGestureRecognizer *)sender {
    if (self.didClicked) {
        self.didClicked();
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
}

+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString {
    
    UILabel *contentLab = [[UILabel alloc] init];
    contentLab.numberOfLines = 0;
    contentLab.attributedText = attributedString;
    [contentLab sizeToFit];

    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    view.frame = CGRectInset(contentLab.bounds, -20, -20);
    [view.itemView addSubview:contentLab];
    view.center = CGPointMake(SCREEN_WIDTH / 2.0, SCREEN_HEIGHT / 2);
    return view;
}

+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoUrl {

    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.image = [self thumbnailImageForVideo:videoUrl];

    CGSize size = imageView.image.size;

    
    CGFloat rate = size.width / size.height;
    CGFloat width = SCREEN_WIDTH / 6.0;
    CGFloat height = width / rate;

    size.width = width;
    size.height = height;
    imageView.frame = CGRectMake(0, 0, size.width, size.height);

    
    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    view.frame = CGRectInset(imageView.bounds, -20, -20);
    [view.itemView addSubview:imageView];
    view.center = CGPointMake(SCREEN_WIDTH / 2.0, SCREEN_HEIGHT / 2);
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
    thumbnailImageRef = [assetImageGenerator copyCGImageAtTime:CMTimeMake(thumbnailImageTime, 60) actualTime:NULL error:&thumbnailImageGenerationError];

    if (!thumbnailImageRef)
        NSLog(@"thumbnailImageGenerationError %@", thumbnailImageGenerationError);

    UIImage *thumbnailImage = thumbnailImageRef ? [[UIImage alloc] initWithCGImage:thumbnailImageRef] : nil;

    return thumbnailImage;
}


- (void)layoutSubviews {
    [super layoutSubviews];
    self.border.path = [UIBezierPath bezierPathWithRect:self.contentView.bounds].CGPath;
    self.border.fillColor = nil;
    self.border.lineWidth = 1;
    self.border.lineDashPattern = @[@4, @2];
    self.border.strokeColor = [UIColor whiteColor].CGColor;
}
@end
