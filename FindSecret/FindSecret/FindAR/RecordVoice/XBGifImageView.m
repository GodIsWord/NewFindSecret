//
//  XBGifImageView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBGifImageView.h"

@interface XBGifImageView()

//@property(nonatomic,strong) UIImageView *gifimageView;
@property(nonatomic,copy) NSString *imagsPath;
@property(nonatomic,strong) UIImageView *replaceImageView;
@property(nonatomic,strong) UIImageView *gifImage;

@end

@implementation XBGifImageView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        UIImageView *imageView = [[UIImageView alloc] initWithFrame:self.bounds];
        imageView.userInteractionEnabled = NO;
        imageView.backgroundColor = self.backgroundColor;
        imageView.opaque = YES;
        imageView.animationDuration = 1.5 ;     //执行一次完整动画所需的时长
        imageView.animationRepeatCount = 0;  //动画重复次数
        [self addSubview:imageView];
        self.gifImage = imageView;
        
        UIImageView *replaceImageView = [[UIImageView alloc] initWithFrame:self.bounds];
        replaceImageView.userInteractionEnabled = NO;
        [self addSubview:replaceImageView];
        _replaceImageView = replaceImageView;
    }
    return self;
}
-(void)loadGIFWithPath:(NSString*)path
{
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return;
    }
    self.imagsPath = path;
    
    NSArray *arrayName = [manager contentsOfDirectoryAtPath:self.imagsPath error:nil];
    NSMutableArray *imagesArr = [NSMutableArray array];
    for (NSString *name in arrayName) {
        UIImage *image = [UIImage imageWithContentsOfFile:[self.imagsPath stringByAppendingPathComponent:name]];
        if (image) {
            [imagesArr addObject:image];
            if ([arrayName indexOfObject:name] == 0) {
                self.replaceImageView.image = image;
            }
        }
    }
    self.gifImage.animationImages = imagesArr;
    
}
-(void)replaceholdImage:(UIImage *)image
{
    self.replaceImageView.image = image;
}
-(void)startAnimation
{
    if (!self.gifImage.animating) {
        [self.gifImage startAnimating];
    }
    self.replaceImageView.hidden=YES;
}
-(void)stopAnimation
{
    self.replaceImageView.hidden = NO;

    if ([self.gifImage isAnimating]) {
        [self.gifImage stopAnimating];
    }
    
}
@end











