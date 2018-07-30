//
//  XBVideoIntervalChooseView.m
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoIntervalChooseView.h"
#import <AVFoundation/AVFoundation.h>
#import "UIView+XBEnlargeEdge.h"

#define kMinFrameCount 10
#define KMinPlaySeconnd  3

@interface XBVideoThumbnailCollectionCell : UICollectionViewCell
@property (nonatomic, strong) UIImageView *imageView;

@end
@implementation XBVideoThumbnailCollectionCell
- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        _imageView = [UIImageView new];
        [self.contentView addSubview:_imageView];
        
    }
    return self;
}
- (void)layoutSubviews{
    [super layoutSubviews];
    self.imageView.frame = self.contentView.bounds;
}
@end

@interface XBVideoIntervalChooseView () <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
@property (nonatomic, strong) NSURL *videoUrl;
@property (nonatomic, strong) UICollectionView *colletionView;
@property (nonatomic, strong) NSMutableArray *framesArray;
@property (nonatomic, assign) UIEdgeInsets contentInsets;
@property (nonatomic, strong) NSMutableArray *thumImages;
@property (nonatomic, strong) CALayer *intervalLayer;
@property (nonatomic, assign) CGSize itemSize;
@property (nonatomic, assign) CGFloat contentWidth;
@property (nonatomic, assign) CGFloat speed;
@property (nonatomic, assign) CGFloat minPlayDistance;
@property (nonatomic, assign) uint32_t timescale;
@property (nonatomic, strong) UIImageView *leftControlImageView;
@property (nonatomic, strong) UIImageView *rightControlImageView;

@property (nonatomic, assign) CGRect leftFrameOrgin;
@property (nonatomic, assign) CGRect rightFrameOrgin;

@property (nonatomic, strong) CALayer *targetLayer;
@end
@implementation XBVideoIntervalChooseView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self initialize];
    }
    return self;
}
- (void)initialize {
    self.contentInsets = UIEdgeInsetsMake(4, 20, 4, 20);
    self.framesArray = [NSMutableArray array];
    self.thumImages = [NSMutableArray array];
    CGFloat width = self.bounds.size.width - self.contentInsets.left - self.contentInsets.right;
    CGFloat height =  self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom;
    self.itemSize = CGSizeMake(width/kMinFrameCount, (int)height);
    
    
    UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
    layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    self.colletionView = [[UICollectionView alloc] initWithFrame:self.bounds collectionViewLayout:layout];
    self.colletionView.backgroundColor = [UIColor clearColor];
    self.colletionView.showsHorizontalScrollIndicator = NO;
    [self.colletionView registerClass:[XBVideoThumbnailCollectionCell class] forCellWithReuseIdentifier:@"XBVideoThumbnailCollectionCell"];
    [self addSubview:self.colletionView];
    
    
    
    // 中间的layer
    
    CGFloat borderWidth = 2.0f;
    self.intervalLayer = [[CALayer alloc] init];
    self.intervalLayer.borderColor = [UIColor yellowColor].CGColor;
    self.intervalLayer.borderWidth = borderWidth;
    self.intervalLayer.frame = CGRectMake(self.contentInsets.left - borderWidth,  self.contentInsets.top - borderWidth, self.bounds.size.width - self.contentInsets.left - self.contentInsets.right + 2 * borderWidth, self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom + 2*borderWidth);
    [self.layer addSublayer:self.intervalLayer];
    
    
    CGFloat controlViewWidth = 10.0;
    
    self.leftControlImageView = [[UIImageView alloc] init];
    self.leftControlImageView.backgroundColor = [UIColor yellowColor];
    self.leftControlImageView.userInteractionEnabled = YES;
    self.leftControlImageView.frame = CGRectMake(CGRectGetMinX(self.intervalLayer.frame) - controlViewWidth + borderWidth, self.intervalLayer.frame.origin.y, controlViewWidth, self.intervalLayer.bounds.size.height);
    self.leftControlImageView.xb_enlargeEdge = UIEdgeInsetsMake(0, 4, 0, 8);
    [self addSubview:self.leftControlImageView];
    [self.leftControlImageView addObserver:self forKeyPath:@"center" options:NSKeyValueObservingOptionNew context:nil];
    UIPanGestureRecognizer *leftGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(pan:)];
    [self.leftControlImageView addGestureRecognizer:leftGesture];
    self.leftFrameOrgin = self.leftControlImageView.frame;

    
    self.rightControlImageView = [[UIImageView alloc] init];
    self.rightControlImageView.backgroundColor = [UIColor yellowColor];
    self.rightControlImageView.userInteractionEnabled = YES;
    self.rightControlImageView.frame = CGRectMake(CGRectGetMaxX(self.intervalLayer.frame) -  borderWidth, self.intervalLayer.frame.origin.y, controlViewWidth, self.intervalLayer.bounds.size.height);
    self.rightControlImageView.xb_enlargeEdge = UIEdgeInsetsMake(0, 8, 0, 4);
    [self addSubview:self.rightControlImageView];
    [self.rightControlImageView addObserver:self forKeyPath:@"center" options:NSKeyValueObservingOptionNew context:nil];
    UIPanGestureRecognizer *rightGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(pan:)];
    [self.rightControlImageView addGestureRecognizer:rightGesture];
    self.rightFrameOrgin = self.rightControlImageView.frame;
    
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context{
    
    if ([keyPath isEqualToString:@"center"]) {
        [self caculateProgressRateWithControlView:object];
    }
    
}

- (void)caculateProgressRateWithControlView:(UIView *)controlView{
    CMTime time = kCMTimeZero;
    if (controlView == self.leftControlImageView) {
        time = [self getStartCMTime];
    }else {
        time = [self getStopCMTime];
    }
    if ([self.delegate respondsToSelector:@selector(videoIntervalChooseViewSeekToCMTime:)]) {
        [self.delegate videoIntervalChooseViewSeekToCMTime:time];
    }    
}

- (CMTime)getStartCMTime {
    CGRect converFrame = [self convertRect:self.leftControlImageView.frame toView:self.colletionView];
    CGFloat value = CGRectGetMaxX(converFrame) - self.contentInsets.left;
    CGFloat second = value / self.speed;
    return CMTimeMakeWithSeconds(second, self.timescale);
}
- (CMTime)getStopCMTime {
    CGRect converFrame = [self convertRect:self.rightControlImageView.frame toView:self.colletionView];
    CGFloat value = CGRectGetMinX(converFrame) - self.contentInsets.left;
    CGFloat second = value / self.speed;
    return CMTimeMakeWithSeconds(second, self.timescale);
}

- (void)animatedWithSeconds:(CGFloat)seconds {
    
    if (self.targetLayer.hidden) {
        self.targetLayer.hidden = NO;
    }
    
    
    if (!self.targetLayer) {
        self.targetLayer = [CALayer new];
        self.targetLayer.backgroundColor = [UIColor yellowColor].CGColor;
        self.targetLayer.frame = CGRectMake(self.contentInsets.left - 4,  self.contentInsets.top, 4, self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom);
        [self.layer addSublayer:self.targetLayer];
    }
    
    CGFloat duration = seconds * self.speed + self.contentInsets.left;
    NSLog(@"current seconds :%f",duration);
    CGPoint point = [self.colletionView convertPoint:CGPointMake(duration, 0) toView:self];
    CGRect frame = self.targetLayer.frame;
    frame.origin.x = point.x;
    [CATransaction begin];
    [CATransaction setDisableActions:YES];
    self.targetLayer.frame = frame;
    [CATransaction commit];
}



- (BOOL)fixFrameWithView:(UIView *)touchView nextFrame:(CGRect)nextframe {
    
    
    if (touchView == self.leftControlImageView) {
        if (CGRectGetMinX(nextframe) < CGRectGetMinX(self.leftFrameOrgin) ) {
            return NO;
        }
        CGRect rightFrame = self.rightControlImageView.frame;
        CGFloat distance = CGRectGetMinX(rightFrame) - CGRectGetMaxX(nextframe);
        if (distance < self.minPlayDistance) {
            return NO;
        }else{
            return YES;
        }
    } else {
        
        if (CGRectGetMaxX(nextframe) > CGRectGetMaxX(self.rightFrameOrgin) ) {
            return NO;
        }
        CGRect leftFrame = self.leftControlImageView.frame;
        CGFloat distance = CGRectGetMinX(nextframe) - CGRectGetMaxX(leftFrame);
        if (distance < self.minPlayDistance) {
            return NO;
        } else {
            return YES;
        }

    }
}
- (void)updateIntervalLayerFrameFromView:(UIView *)view nextFrame:(CGRect)nextFrame{
    CGRect frame = self.intervalLayer.frame;
    if (view == self.leftControlImageView) {
        frame.origin.x = CGRectGetMaxX(nextFrame) - self.intervalLayer.borderWidth;
        frame.size.width =CGRectGetMinX(self.rightControlImageView.frame) - CGRectGetMaxX(nextFrame) + 2 * self.intervalLayer.borderWidth;
    }else{
        frame.size.width =CGRectGetMinX(nextFrame) - CGRectGetMaxX(self.leftControlImageView.frame) + 2 * self.intervalLayer.borderWidth;

    }
    [CATransaction begin];
    [CATransaction setDisableActions:YES];
    self.intervalLayer.frame = frame;
    [CATransaction commit];

    
}

- (void)dealloc {
    [self.leftControlImageView removeObserver:self forKeyPath:@"center"];
    [self.rightControlImageView removeObserver:self forKeyPath:@"center"];
}

- (void)pan:(UIPanGestureRecognizer *)recognizer {
    
    switch (recognizer.state) {
        case UIGestureRecognizerStateBegan:
            self.targetLayer.hidden = YES;
            if ([self.delegate respondsToSelector:@selector(videoIntervalChooseViewEventEdittingBegan)]) {
                [self.delegate videoIntervalChooseViewEventEdittingBegan];
            }
            break;
        case UIGestureRecognizerStateChanged:{
            CGPoint translation = [recognizer translationInView:recognizer.view];
            [recognizer setTranslation:CGPointMake(0, 0) inView:recognizer.view];
            CGRect nextFrame = CGRectOffset(recognizer.view.frame, translation.x, 0);
            if (![self fixFrameWithView:recognizer.view nextFrame:nextFrame]) {
                return;
            }
            [self updateIntervalLayerFrameFromView:recognizer.view nextFrame:nextFrame];
            recognizer.view.center = CGPointMake(recognizer.view.center.x + translation.x, recognizer.view.center.y);
            
            break;
        }
        case UIGestureRecognizerStateEnded:
            if ([self.delegate respondsToSelector:@selector(videoIntervalChooseViewEventEdittingEnded)]) {
                [self.delegate videoIntervalChooseViewEventEdittingEnded];
            }
            if ([self.delegate respondsToSelector:@selector(videoShouldPlayFrom:to:)]) {
                [self.delegate videoShouldPlayFrom:[self getStartCMTime] to:[self getStopCMTime]];
            }
            break;

            
        default:
            break;
    }
    
}

- (void)updateVideoWithUrl:(NSURL *)url {
    // 读取新的
    self.videoUrl = url;
    AVURLAsset *videoAsset = [AVURLAsset assetWithURL:url];
    // 保存帧率
    self.timescale = videoAsset.duration.timescale;
    
    AVAssetImageGenerator *generator = [[AVAssetImageGenerator alloc] initWithAsset:videoAsset];
    generator.maximumSize = CGSizeMake(self.bounds.size.width - self.contentInsets.left - self.contentInsets.right, self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom);
    generator.appliesPreferredTrackTransform = YES;
    // 默认是图片总长度
    generator.requestedTimeToleranceBefore = kCMTimeZero;
    generator.requestedTimeToleranceAfter = kCMTimeZero;
    
    [self.framesArray removeAllObjects];
    
    // 获取视频秒数
    CGFloat seconds = CMTimeGetSeconds(videoAsset.duration);
    // 帧率
    int32_t timescale = videoAsset.duration.timescale;
    
    NSInteger frameCount = seconds;
    // 如果少于10秒
    if (seconds < kMinFrameCount) {
        frameCount = kMinFrameCount;
        // 降低桢率
        timescale = (int32_t)(videoAsset.duration.value / frameCount);
        
    }
    // 生成 桢 数组
    for (int i = 0 ; i < frameCount; i++) {
        // 一帧
        CMTime frame = CMTimeMake(i * timescale, videoAsset.duration.timescale);
        [self.framesArray addObject:[NSValue valueWithCMTime:frame]];
    }
    
    [self.thumImages removeAllObjects];
    
    __block int count = 0;
    
    
    self.contentWidth = self.framesArray.count * self.itemSize.width;
    self.speed = self.contentWidth / seconds;
    self.minPlayDistance = self.speed * KMinPlaySeconnd;
    
    NSLog(@"contentWidth = %f",self.contentWidth);
    
    [generator generateCGImagesAsynchronouslyForTimes:self.framesArray completionHandler:^(CMTime requestedTime, CGImageRef  _Nullable image, CMTime actualTime, AVAssetImageGeneratorResult result, NSError * _Nullable error) {
    
        
        if (error) {
            NSLog(@"%s %@",__func__,error);
            [generator cancelAllCGImageGeneration];
            return ;
        }
        
        switch (result) {
            case AVAssetImageGeneratorSucceeded: {
                [self.thumImages addObject:[UIImage imageWithCGImage:image]];
                break;
            }
            default:{
                if (error) {
                    NSLog(@"%s %@",__func__,error);
                    [generator cancelAllCGImageGeneration];
                }
                break;
            }
        }
        count ++;
        if (count == self.framesArray.count) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [self refreshData];
            });
        }

    }];
    
}
- (void)refreshData {
    self.colletionView.dataSource = self;
    self.colletionView.delegate = self;
    self.colletionView.frame = self.bounds;
    [self.colletionView reloadData];
    if ([self.delegate respondsToSelector:@selector(videoThumImagesDidLoad)]) {
        [self.delegate videoThumImagesDidLoad];
    }
    if ([self.delegate respondsToSelector:@selector(videoShouldPlayFrom:to:)]) {
        [self.delegate videoShouldPlayFrom:[self getStartCMTime] to:[self getStopCMTime]];
    }
}
#pragma mark - ScrollViewDelegate

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
    self.targetLayer.hidden = YES;
    if ([self.delegate respondsToSelector:@selector(videoIntervalChooseViewEventEdittingBegan)]) {
        [self.delegate videoIntervalChooseViewEventEdittingBegan];
    }
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    
    CGFloat value = scrollView.contentOffset.x - self.contentInsets.left;
    CGFloat second = value / self.speed;
    if ([self.delegate respondsToSelector:@selector(videoIntervalChooseViewSeekToCMTime:)]) {
        [self.delegate videoIntervalChooseViewSeekToCMTime:CMTimeMakeWithSeconds(second, self.timescale)];
    }

}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate {
    if (decelerate == NO) {
        if ([self.delegate respondsToSelector:@selector(videoShouldPlayFrom:to:)]) {
            [self.delegate videoShouldPlayFrom:[self getStartCMTime] to:[self getStopCMTime]];
        }
    }
}
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    if ([self.delegate respondsToSelector:@selector(videoShouldPlayFrom:to:)]) {
        [self.delegate videoShouldPlayFrom:[self getStartCMTime] to:[self getStopCMTime]];
    }
}
#pragma mark - UICollectionViewDelegateFlowLayout

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath {
    return self.itemSize;
    
}
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout insetForSectionAtIndex:(NSInteger)section {
    return self.contentInsets;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section {
    return 0.0f;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout*)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section {
    return 0.0f;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return self.thumImages.count;
}

// The cell that is returned must be retrieved from a call to -dequeueReusableCellWithReuseIdentifier:forIndexPath:
- (__kindof UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    XBVideoThumbnailCollectionCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"XBVideoThumbnailCollectionCell" forIndexPath:indexPath];
    cell.imageView.image = self.thumImages[indexPath.item];
    return cell;
}

@end
