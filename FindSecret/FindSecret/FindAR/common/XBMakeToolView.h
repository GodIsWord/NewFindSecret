//
//  XBMakeToolView.h
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XBMakeToolView;
@protocol XBMakeToolViewDelegate <NSObject>
- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchDownItemAtIndex:(NSInteger)index;
- (void)makeToolView:(XBMakeToolView *)makeToolView didTouchUpAtIndex:(NSInteger)index;
@end

@interface XBMakeToolView : UIView
@property (nonatomic, weak) id<XBMakeToolViewDelegate>delegate;
+ (instancetype)toolView;
@end
