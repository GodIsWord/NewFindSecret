//
//  XBARNearPointSubbviews.m
//  FindSecret
//
//  Created by yide zhang on 2018/9/10.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBARNearPointSubbviews.h"

#import "UIButton+Block.h"

@implementation XBARNearPointSubbviews
+(void)showWithSuperView:(UIView*)superView dismisComplate:(void((^)(void)))complate
{
    UIButton *btnBack = [UIButton buttonWithType:UIButtonTypeCustom];
    btnBack.frame = CGRectMake(20, 30, 44, 44);
    [btnBack setImageEdgeInsets:UIEdgeInsetsMake(5, 5, 5, 5)];
    [btnBack setBackgroundImage:[UIImage imageNamed:@"nav_icon_back_white"] forState:UIControlStateNormal];
    btnBack.backgroundColor = [UIColor clearColor];
    [superView addSubview:btnBack];
    __weak typeof(btnBack) weakBtn = btnBack;
    [btnBack addActionHandler:^(NSInteger tag) {
        [weakBtn removeFromSuperview];
        if (complate) {
            complate();
        }
    }];
}
@end
