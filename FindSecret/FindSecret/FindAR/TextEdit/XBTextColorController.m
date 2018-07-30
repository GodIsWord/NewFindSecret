//
//  XBColorController.m
//  调色板
//
//  Created by long on 13-6-18.
//  Copyright (c) 2013年 long. All rights reserved.
//

#import "XBTextColorController.h"

@interface XBTextColorController ()

@end

@implementation XBTextColorController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor grayColor];
    
    palette = [[Palette alloc]initWithFrame:CGRectMake(40, 80, 240, 240)];
    palette.paletteDelegate = self;
    [self.view addSubview:palette];
    
    
    sevenColorView = [[SevenColorView alloc]initWithFrame:CGRectMake(0, 360, 320, 65)];
    
    sevenColorView.sevenColorViewDelegate = self;
    [self.view addSubview:sevenColorView];
    
    
    
    UIButton *sureButton = [[UIButton alloc] initWithFrame:CGRectMake(300, 460, 50, 50)];
    [sureButton setTitle:@"确定" forState:UIControlStateNormal];
    [sureButton addTarget:self action:@selector(sureButtonDidClicked) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:sureButton];
}

-(void)sureButtonDidClicked{
    [self dismissViewControllerAnimated:YES completion:nil];
}
#pragma mark -- 代理
-(void)changeTextColor:(UIColor *)color{
    if ([self.delegate respondsToSelector:@selector(showTextColor:)]) {
        [self.delegate showTextColor:color];
    }
}

- (void)changeColor:(UIColor *)_color{
    
    if ([self.delegate respondsToSelector:@selector(showTextColor:)]) {
        [self.delegate showTextColor:_color];
    }
    
    
}
- (void)sevenColorViewChangeColor:(UIColor *)_color{
    
    if ([self.delegate respondsToSelector:@selector(showTextColor:)]) {
        [self.delegate showTextColor:_color];
    }
}
@end
