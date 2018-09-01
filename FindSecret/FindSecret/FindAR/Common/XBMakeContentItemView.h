//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XBMakeContentItemView : UIView
@property (weak, nonatomic) IBOutlet UIButton *closeBtn;
@property (weak, nonatomic) IBOutlet UIView *wrapView;
@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet UIButton *editBtn;
@property (nonatomic, copy) void (^didClickedContentView)(void);
@property (nonatomic, copy) void (^didClickedCloseBtn)(void);
@property (nonatomic, copy) void (^didClickedEditBtn)(void);
+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString;
+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoUrl;
+ (instancetype)contentItemViewWithAudioURL:(NSURL *)audioURL;
- (void)startVoiceAnimation;
- (void)stopVoiceAnimation;
- (void)playVideo;
- (void)pauseVideo;
@end
