//
//  XBGifImageView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBGifImageView.h"

@interface XBGifImageView ()

@property (nonatomic, copy) NSString *imagePath;
@property (nonatomic, strong) UIImageView *replaceImageView;
@property (nonatomic, strong) UIImageView *gifImageView;

@end

@implementation XBGifImageView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self initSubViews];
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    [self initSubViews];
}

- (void)initSubViews {
    self.gifImageView = [[UIImageView alloc] initWithFrame:self.bounds];
    self.gifImageView.userInteractionEnabled = NO;
    self.gifImageView.backgroundColor = self.backgroundColor;
    self.gifImageView.opaque = YES;
    self.gifImageView.animationDuration = 1.5;     //执行一次完整动画所需的时长
    self.gifImageView.animationRepeatCount = 0;  //动画重复次数
    [self addSubview:self.gifImageView];

    self.replaceImageView = [[UIImageView alloc] initWithFrame:self.bounds];
    self.replaceImageView.userInteractionEnabled = NO;
    [self addSubview:self.replaceImageView];
}


- (void)layoutSubviews {
    [super layoutSubviews];
    self.gifImageView.frame = self.bounds;
    self.replaceImageView.frame = self.bounds;
}

- (void)loadGIFWithPath:(NSString *)path {

    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return;
    }
    self.imagePath = path;

    NSArray *arrayName = [manager contentsOfDirectoryAtPath:self.imagePath error:nil];
    NSMutableArray *imagesArr = [NSMutableArray array];
    for (NSString *name in arrayName) {
        UIImage *image = [UIImage imageWithContentsOfFile:[self.imagePath stringByAppendingPathComponent:name]];
        if (image) {
            [imagesArr addObject:image];
        }
    }
    self.replaceImageView.image = [imagesArr firstObject];
    self.gifImageView.animationImages = imagesArr;

}

- (void)startAnimation {
    if (!self.gifImageView.animating) {
        [self.gifImageView startAnimating];
    }
    self.replaceImageView.hidden = YES;
}

- (void)stopAnimation {
    self.replaceImageView.hidden = NO;
    if ([self.gifImageView isAnimating]) {
        [self.gifImageView stopAnimating];
    }

}
@end











