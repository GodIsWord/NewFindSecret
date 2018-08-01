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
- (IBAction)didClick:(UIButton *)sender {
    
    if (![self.delegate respondsToSelector:@selector(makeToolView:didClickItemAtIndex:)]) {
        return;
    }
    
    switch (sender.tag) {
        case 0:
            NSLog(@"文本");
            [self.delegate makeToolView:self didClickItemAtIndex:0];
            break;
        case 1:
            NSLog(@"录音");
            [self.delegate makeToolView:self didClickItemAtIndex:1];
            break;
        case 2:
            NSLog(@"视频");
            [self.delegate makeToolView:self didClickItemAtIndex:2];
            break;
    
        default:
            break;
    }
}
@end
