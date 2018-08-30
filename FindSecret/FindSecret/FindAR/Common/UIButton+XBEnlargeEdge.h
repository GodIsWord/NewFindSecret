//
//  UIButton+XBEnlargeEdge.h
//  KTLayout
//
//  Created by XB on 15/5/27.
//  Copyright (c) 2015年 jayden. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIButton (XBEnlargeEdge)
@property (nonatomic, assign) UIEdgeInsets xb_enlargeEdge;
- (void)xb_setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left;
@end
