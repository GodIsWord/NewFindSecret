//
//  XBVideoIntervalChooseView.h
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMedia/CMTime.h>
@class XBVideoIntervalChooseView;
@protocol XBVideoIntervalChooseViewDelegate <NSObject>
- (void)videoIntervalChooseViewEventEdittingBegan;
- (void)videoIntervalChooseViewSeekToCMTime:(CMTime)time;
- (void)videoIntervalChooseViewEventEdittingEnded;
- (void)videoShouldPlayFrom:(CMTime)fromTime to:(CMTime)toTime;
- (void)videoThumImagesDidLoad;
@end

@interface XBVideoIntervalChooseView : UIView
@property (nonatomic, weak) id<XBVideoIntervalChooseViewDelegate> delegate;
- (void)updateVideoWithUrl:(NSURL *)url;
- (void)animatedWithSeconds:(CGFloat)seconds;
- (CMTime)getStartCMTime;
- (CMTime)getStopCMTime;
@end
