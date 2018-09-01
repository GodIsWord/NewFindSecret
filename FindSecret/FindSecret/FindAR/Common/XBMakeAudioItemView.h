//
//  XBMakeAudioItemView.h
//  FindSecret
//
//  Created by pillar on 2018/8/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBGifImageView.h"

@interface XBMakeAudioItemView : UIView
@property (nonatomic, strong) UILabel *descLabel;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) XBGifImageView *gifImageView;
- (void)startAnimation;
- (void)stopAnimation;
@end
