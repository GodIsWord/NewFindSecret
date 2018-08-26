//
//  XBPublishRecordAudioView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishRecordAudioView.h"

@interface XBPublishRecordAudioView()


@end

@implementation XBPublishRecordAudioView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor xb_colorFromString:@"#000000" alpha:0.4];
    }
    return self;
}

-(void)initSubbView
{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = [UIColor clearColor];
    [btn setTitle:@"取消" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(cancleAction) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:btn];
}
-(void)cancleAction{
    
}

@end
