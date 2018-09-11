//
//  XBMakeAudioItemView.m
//  FindSecret
//
//  Created by pillar on 2018/8/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBMakeAudioItemView.h"


@implementation XBMakeAudioItemView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = YES;
        [self initSubViews];
    }
    return self;
}

- (void)initSubViews {
    UIView *backView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.xb_width, self.xb_height)];
    backView.backgroundColor = [UIColor whiteColor];
    backView.layer.cornerRadius = 6;
    backView.layer.masksToBounds = YES;
    [self addSubview:backView];

    self.gifImageView = [[XBGifImageView alloc] initWithFrame:CGRectMake(0, 0, backView.xb_height, backView.xb_height)];
    [backView addSubview:self.gifImageView];
    [self.gifImageView loadGIFWithPath:[self gifPath]];

    self.titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(self.gifImageView.xb_right + 5, 0, 80, 25)];
    self.titleLabel.backgroundColor = backView.backgroundColor;
    self.titleLabel.textColor = [UIColor blackColor];
    self.titleLabel.xb_centerY = self.gifImageView.xb_centerY;
    self.titleLabel.text = @"点击试听";
    [backView addSubview:self.titleLabel];


    self.descLabel = [[UILabel alloc] initWithFrame:CGRectMake(backView.xb_width - 55, 0, 50, 25)];
    self.descLabel.backgroundColor = backView.backgroundColor;
    self.descLabel.textColor = [UIColor grayColor];
    self.descLabel.xb_centerY = self.titleLabel.xb_centerY;
    self.descLabel.textAlignment = NSTextAlignmentRight;
    [backView addSubview:self.descLabel];


}

- (void)startAnimation {
    [self.gifImageView startAnimation];
    self.titleLabel.text = @"播放中...";
}
- (void)stopAnimation {
    [self.gifImageView stopAnimation];
    self.titleLabel.text = @"点击试听";
}


- (NSString *)gifPath {
    NSString *path = [[NSBundle mainBundle] pathForResource:@"recordVoice" ofType:@"bundle"];
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return nil;
    }
    path = [path stringByAppendingPathComponent:@"voice_small3x"];
    return path;
}


@end
