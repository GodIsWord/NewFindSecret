//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, XBMakeContentItemType) {
    XBMakeContentItemTypeVideo = 1,
    XBMakeContentItemTypeText = 3,
    XBMakeContentItemTypeAudio = 4,
};

@interface XBMakeContentItemView : UIView
@property (weak, nonatomic) IBOutlet UIButton *closeBtn;
@property (weak, nonatomic) IBOutlet UIView *wrapView;
@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet UIButton *editBtn;
@property (nonatomic, assign, readonly) XBMakeContentItemType type;
@property (nonatomic, strong, readonly) NSAttributedString *attributedText;
@property (nonatomic, strong, readonly) NSURL *videoURL;
@property (nonatomic, strong, readonly) UIImage *thumbnailImage;
@property (nonatomic, strong, readonly) NSURL *audioURL;
@property (nonatomic, copy) NSString *arFontName;


@property (nonatomic, copy) void (^didClickedContentView)(void);
@property (nonatomic, copy) void (^didClickedCloseBtn)(void);
@property (nonatomic, copy) void (^didClickedEditBtn)(void);
+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString;
+ (instancetype)contentItemViewWithVideoUrl:(NSURL *)videoUrl;
+ (instancetype)contentItemViewWithAudioURL:(NSURL *)audioURL;
- (void)layoutWithAttributedText:(NSAttributedString *)attributedText;
- (void)startVoiceAnimation;
- (void)stopVoiceAnimation;
//- (void)playVideo;
//- (void)pauseVideo;
@end
