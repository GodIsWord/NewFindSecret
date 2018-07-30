//
//  XBColorController.m
//  调色板
//
//  Created by long on 13-6-18.
//  Copyright (c) 2013年 long. All rights reserved.
//

#import "XBTextColorController.h"

@interface XBTextColorController ()
@property (nonatomic, strong) UIColor *selectColor;

@end

@implementation XBTextColorController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor grayColor];
    
    displayView = [[UIView alloc]initWithFrame:CGRectMake(10, 40, 40, 40)];
    [self.view addSubview:displayView];
    displayView.backgroundColor = [UIColor blackColor];
    
    palette = [[Palette alloc]initWithFrame:CGRectMake(self.view.frame.size.width/2-100, 80, 200, 200)];
    [self.view addSubview:palette];
    
    __weak typeof(self) weakSelf = self;
    palette.currentColorBlock = ^(UIColor *color){
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if ([strongSelf.delegate respondsToSelector:@selector(showTextColor:)]) {
            displayView.backgroundColor = color;
            strongSelf.selectColor = color;
            
        }
        
    };
    
    sevenColorView = [[SevenColorView alloc]initWithFrame:CGRectMake(30, 360, 320, 105)];
    
    sevenColorView.sevenColorViewDelegate = self;
    [self.view addSubview:sevenColorView];
    
    
    
    UIButton *sureButton = [[UIButton alloc] initWithFrame:CGRectMake(300, 460, 50, 50)];
    [sureButton setTitle:@"确定" forState:UIControlStateNormal];
    [sureButton addTarget:self action:@selector(sureButtonDidClicked) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:sureButton];
    
    UIButton *cancelButton = [[UIButton alloc] initWithFrame:CGRectMake(30, 460, 50, 50)];
    [cancelButton setTitle:@"取消" forState:UIControlStateNormal];
    [cancelButton addTarget:self action:@selector(cancelButtonDidClicked) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:cancelButton];
    
    
}

-(void)cancelButtonDidClicked{
    [self dismissViewControllerAnimated:YES completion:nil];
    
}

-(void)sureButtonDidClicked{
    if ([self.delegate respondsToSelector:@selector(showTextColor:)]) {
        [self.delegate showTextColor:self.selectColor];
        displayView.backgroundColor = self.selectColor;
        
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}
#pragma mark -- 代理

- (void)sevenColorViewChangeColor:(UIColor *)_color{
    self.selectColor = _color;
    displayView.backgroundColor = _color;
    
    
}
@end
