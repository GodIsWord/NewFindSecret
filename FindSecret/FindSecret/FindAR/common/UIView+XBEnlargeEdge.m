//
//  UIView+XBEnlargeEdge.m
//  FindSecret
//
//  Created by pillar on 2018/7/29.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "UIView+XBEnlargeEdge.h"
#import <objc/runtime.h>

@implementation UIView (XBEnlargeEdge)
- (void)setXb_enlargeEdge:(UIEdgeInsets)xb_enlargeEdge{
    NSValue *value = [NSValue valueWithUIEdgeInsets:xb_enlargeEdge];
    objc_setAssociatedObject(self, @selector(xb_enlargeEdge), value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UIEdgeInsets)xb_enlargeEdge{
    return [objc_getAssociatedObject(self, @selector(xb_enlargeEdge)) UIEdgeInsetsValue];
}
- (void)xb_setEnlargeEdgeWithTop:(CGFloat) top right:(CGFloat) right bottom:(CGFloat) bottom left:(CGFloat) left{
    [self setXb_enlargeEdge:UIEdgeInsetsMake(top, left, bottom, right)];
}
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    UIEdgeInsets touchAreaInsets = self.xb_enlargeEdge;
    CGRect bounds = self.bounds;
    bounds = CGRectMake(bounds.origin.x - touchAreaInsets.left,
                        bounds.origin.y - touchAreaInsets.top,
                        bounds.size.width + touchAreaInsets.left + touchAreaInsets.right,
                        bounds.size.height + touchAreaInsets.top + touchAreaInsets.bottom);
    return CGRectContainsPoint(bounds, point);
}

@end
