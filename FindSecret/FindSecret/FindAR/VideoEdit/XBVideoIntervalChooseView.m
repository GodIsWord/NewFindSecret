//
//  XBVideoIntervalChooseView.m
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoIntervalChooseView.h"
#import <AVFoundation/AVFoundation.h>

#define kMinFrameCount 10

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
@property (nonatomic, strong) UIImageView *leftControlImageView;
@property (nonatomic, strong) UIImageView *rightControlImageView;
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
    self.intervalLayer.borderColor = [UIColor whiteColor].CGColor;
    self.intervalLayer.borderWidth = borderWidth;
    self.intervalLayer.frame = CGRectMake(self.contentInsets.left - borderWidth,  self.contentInsets.top - borderWidth, self.bounds.size.width - self.contentInsets.left - self.contentInsets.right + 2 * borderWidth, self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom + 2*borderWidth);
    [self.layer addSublayer:self.intervalLayer];
    
    CGFloat controlViewWidth = 10.0;
    
    self.leftControlImageView = [[UIImageView alloc] init];
    self.leftControlImageView.backgroundColor = [UIColor yellowColor];
    self.leftControlImageView.userInteractionEnabled = YES;
    self.leftControlImageView.frame = CGRectMake(CGRectGetMinX(self.intervalLayer.frame) - controlViewWidth + borderWidth, self.intervalLayer.frame.origin.y, controlViewWidth, self.intervalLayer.bounds.size.height);
    [self addSubview:self.leftControlImageView];
    [self.leftControlImageView addObserver:self forKeyPath:@"center" options:NSKeyValueObservingOptionNew context:nil];
    
    UIPanGestureRecognizer *leftGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(pan:)];
    [self.leftControlImageView addGestureRecognizer:leftGesture];

    
    self.rightControlImageView = [[UIImageView alloc] init];
    self.rightControlImageView.backgroundColor = [UIColor yellowColor];
    self.rightControlImageView.userInteractionEnabled = YES;
    self.rightControlImageView.frame = CGRectMake(CGRectGetMaxX(self.intervalLayer.frame) - controlViewWidth + borderWidth, self.intervalLayer.frame.origin.y, controlViewWidth, self.intervalLayer.bounds.size.height);
    [self addSubview:self.rightControlImageView];
    [self.rightControlImageView addObserver:self forKeyPath:@"center" options:NSKeyValueObservingOptionNew context:nil];
    
    UIPanGestureRecognizer *rightGesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(pan:)];
    [self.rightControlImageView addGestureRecognizer:rightGesture];

    
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context{
    
    if ([keyPath isEqualToString:@"center"]) {
    
        NSLog(@"%@",change);
        
        if (object == self.leftControlImageView) {
            
        } else if (object == self.rightControlImageView) {
            
        }
        
    }
    
}
- (void)dealloc {
    [self.leftControlImageView removeObserver:self forKeyPath:@"center"];
    [self.rightControlImageView removeObserver:self forKeyPath:@"center"];
}

- (void)pan:(UIPanGestureRecognizer *)recognizer {
    
    switch (recognizer.state) {
        case UIGestureRecognizerStateBegan:
            break;
        case UIGestureRecognizerStateChanged:{
            CGPoint translation = [recognizer translationInView:recognizer.view];
            recognizer.view.center = CGPointMake(recognizer.view.center.x + translation.x, recognizer.view.center.y);
            [recognizer setTranslation:CGPointMake(0, 0) inView:recognizer.view];
            break;
        }
        case UIGestureRecognizerStateEnded:
            break;

            
        default:
            break;
    }
    
}

- (void)updateVideoWithUrl:(NSURL *)url {
    // 读取新的
    self.videoUrl = url;
    AVURLAsset *videoAsset = [AVURLAsset assetWithURL:url];
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
    
    // 如果少于10秒
    if (seconds < kMinFrameCount) {
        seconds = kMinFrameCount;
        // 降低桢率
        timescale = (int32_t)(videoAsset.duration.value / seconds);
        
    }
    // 生成 桢 数组
    for (int i = 0 ; i < seconds; i++) {
        // 一帧
        CMTime frame = CMTimeMake(i * timescale, videoAsset.duration.timescale);
        [self.framesArray addObject:[NSValue valueWithCMTime:frame]];
    }
    
    [self.thumImages removeAllObjects];
    
    __block int count = 0;
    
    
    self.contentWidth = self.framesArray.count * self.itemSize.width;
    self.speed = self.contentWidth / seconds;
    
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
