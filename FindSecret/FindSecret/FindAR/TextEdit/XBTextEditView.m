//
//  XBTextEditView.m
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "XBTextEditView.h"

#define kScreenWidth     [UIScreen mainScreen].bounds.size.width  //设备的宽度
#define kScreenHeight    [UIScreen mainScreen].bounds.size.height //设备的高度

@interface XBTextEditView()
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UIView *contentView;
@end

@implementation XBTextEditView


- (void)showTextView{
    UIWindow * window = [UIApplication sharedApplication].keyWindow;
    [window addSubview: self];
    
    [UIView animateWithDuration:0.75 animations:^{
        self.backGroundView.alpha = 0.78;
    } completion:^(BOOL finished) {
       
    }];


}

- (id)initWithFrame:(CGRect)frame{
    if(self = [super initWithFrame:frame]){
        
//        [self addSubview: self.backGroundView];
//        self.contentView = [[UIView alloc] init];
//        self.contentView.backgroundColor = [UIColor whiteColor];
//        self.contentView.frame = CGRectMake(50, 120, kScreenWidth - 100, kScreenHeight);
//        [self.backGroundView addSubview:self.contentView];

    }
    return self;
}

- (void)dismissAlertWindow{
    [UIView animateWithDuration:.25 animations:^{
        self.alpha = 0;

    }completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}
- (UIView*)backGroundView{
    if (!_backGroundView) {
        _backGroundView =  [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _backGroundView.backgroundColor = [UIColor blackColor];
        _backGroundView.alpha = 0.78;
    }
    return _backGroundView;
}

@end
