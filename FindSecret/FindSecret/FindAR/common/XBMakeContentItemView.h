//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XBMakeContentItemView : UIView
@property(weak, nonatomic) IBOutlet UIView *contentView;
@property (nonatomic, copy) void (^didClicked)(void);
+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString;
+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoUrl;

@end
