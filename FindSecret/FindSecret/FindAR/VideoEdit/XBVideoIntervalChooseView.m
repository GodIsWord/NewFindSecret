//
//  XBVideoIntervalChooseView.m
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoIntervalChooseView.h"
#import <AVFoundation/AVFoundation.h>


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

@interface XBVideoIntervalChooseView () <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) NSURL *videoUrl;
@property (nonatomic, strong) UICollectionView *colletionView;
@property (nonatomic, strong) NSMutableArray *framesArray;
@property (nonatomic, assign) UIEdgeInsets contentInsets;
@property (nonatomic, strong) NSMutableArray *thumImages;
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
    
    UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
    layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    self.colletionView = [[UICollectionView alloc] initWithFrame:self.bounds collectionViewLayout:layout];
    self.colletionView.backgroundColor = [UIColor clearColor];
    self.colletionView.showsHorizontalScrollIndicator = NO;
    [self.colletionView registerClass:[XBVideoThumbnailCollectionCell class] forCellWithReuseIdentifier:@"XBVideoThumbnailCollectionCell"];
    [self addSubview:self.colletionView];
}
- (void)updateVideoWithUrl:(NSURL *)url {
    // 读取新的
    self.videoUrl = url;
    AVURLAsset *videoAsset = [AVURLAsset assetWithURL:url];
    int seconds = (int)(videoAsset.duration.value / videoAsset.duration.timescale);
    
    AVAssetImageGenerator *generator = [[AVAssetImageGenerator alloc] initWithAsset:videoAsset];
    generator.maximumSize = CGSizeMake(self.bounds.size.width - self.contentInsets.left - self.contentInsets.right, self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom);
    generator.appliesPreferredTrackTransform = YES;
    // 默认是图片总长度
    generator.requestedTimeToleranceBefore = kCMTimeZero;
    generator.requestedTimeToleranceAfter = kCMTimeZero;
    
    // 至少 10 张预览图
    [self.framesArray removeAllObjects];
    seconds = MAX(seconds, 10);
    
    for (int i = 0 ; i < seconds; i++) {
        // 一帧
        CMTime frame = CMTimeMake(i * videoAsset.duration.timescale, videoAsset.duration.timescale);
        [self.framesArray addObject:[NSValue valueWithCMTime:frame]];
    }
    
    [self.thumImages removeAllObjects];
    
    __block int count = 0;
    
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
    //最少10张图
    CGFloat width = self.bounds.size.width - self.contentInsets.left - self.contentInsets.right;
    CGFloat height =  self.bounds.size.height - self.contentInsets.top - self.contentInsets.bottom;
    return CGSizeMake((int)(width/10.0), (int)height);
    
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
