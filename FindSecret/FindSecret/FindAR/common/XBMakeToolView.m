//
//  XBMakeToolView.m
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBMakeToolView.h"

@implementation XBMakeToolView
+ (instancetype)toolView{
    XBMakeToolView *toolView = [[[UINib nibWithNibName:@"XBMakeToolView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    return toolView;
}
- (IBAction)touchDown:(UIButton *)sender forEvent:(UIEvent *)event {
    if (![self.delegate respondsToSelector:@selector(makeToolView:didTouchDownItemAtIndex:)]) {
        return;
    }
    switch (sender.tag) {
        case 0:
            [self.delegate makeToolView:self didTouchDownItemAtIndex:0];
            break;
        case 1:
            [self.delegate makeToolView:self didTouchDownItemAtIndex:1];
            break;
        case 2:
            [self.delegate makeToolView:self didTouchDownItemAtIndex:2];
            break;
            
        default:
            break;
    }

}
- (IBAction)touchUp:(UIButton *)sender forEvent:(UIEvent *)event {
    if (![self.delegate respondsToSelector:@selector(makeToolView:didTouchUpAtIndex:)]) {
        return;
    }
    switch (sender.tag) {
        case 0:
            [self.delegate makeToolView:self didTouchUpAtIndex:0];
            break;
        case 1:
            [self.delegate makeToolView:self didTouchUpAtIndex:1];
            break;
        case 2:
            [self.delegate makeToolView:self didTouchUpAtIndex:2];
            break;
            
        default:
            break;
    }
}
@end
