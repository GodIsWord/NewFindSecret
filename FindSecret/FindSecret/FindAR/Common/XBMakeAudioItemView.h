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
@property(nonatomic,strong) UILabel *secondsLabel;
@property(nonatomic,strong) UILabel *miaoshuLabel;
@property(nonatomic,strong) XBGifImageView *gifImageView;
@property(nonatomic,assign) BOOL isSelected;
@end
