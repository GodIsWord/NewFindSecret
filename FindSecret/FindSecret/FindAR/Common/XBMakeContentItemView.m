//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import "XBMakeContentItemView.h"
#import "XBMacroDefinition.h"
#import <AVFoundation/AVFoundation.h>

@interface XBMakeContentItemView ()

@end


@implementation XBMakeContentItemView {

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
    [view.contentView addSubview:contentLab];

    CGSize size = contentLab.bounds.size;
    if (size.width < 80) {
        size.width = 80;
    }
    size.height += 40;
    view.bounds = (CGRect) {{0, 0}, size};
    view.center = CGPointMake(SCREEN_WIDTH / 2.0, SCREEN_HEIGHT / 2);
    return view;
}

+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoUrl {

    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.image = [self thumbnailImageForVideo:videoUrl];

    CGSize size = imageView.image.size;

    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    [view.contentView addSubview:imageView];

    CGFloat rate = size.width / size.height;

    CGFloat width = SCREEN_WIDTH / 6.0;
    CGFloat height = width / rate;

    size.width = width;
    size.height = height;
    imageView.frame = CGRectMake(0, 0, size.width, size.height);

    size.height += 40;
    view.bounds = (CGRect) {{0, 0}, size};
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

@end
