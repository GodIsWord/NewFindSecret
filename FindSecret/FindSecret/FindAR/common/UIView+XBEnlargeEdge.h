//
//  UIView+XBEnlargeEdge.h
//  FindSecret
//
//  Created by pillar on 2018/7/29.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (XBEnlargeEdge)
@property (nonatomic, assign) UIEdgeInsets xb_enlargeEdge;
- (void)xb_setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end
