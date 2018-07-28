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

@interface XBTextEditView()<UITextViewDelegate>
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *sureButton;
@property (nonatomic, strong) UITextView *editTextView;
@property (nonatomic, strong) UIButton *textButton;
@property (nonatomic, strong) UIButton *colorButton;
@end

@implementation XBTextEditView


- (void)showTextView{
    UIWindow * window = [UIApplication sharedApplication].keyWindow;
    [window addSubview: self];
    
    [UIView animateWithDuration:0.75 animations:^{
        self.backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.7f];
    } completion:^(BOOL finished) {
        
    }];
    
    
}

- (id)initWithFrame:(CGRect)frame{
    if(self = [super initWithFrame:frame]){
        
        [self addSubview: self.backGroundView];
        self.contentView = [[UIView alloc] init];
        self.contentView.backgroundColor = [UIColor whiteColor];
        self.contentView.frame = CGRectMake(50, 120, kScreenWidth - 100, kScreenHeight-300);
        [self.backGroundView addSubview:self.contentView];
        
        
        self.editTextView = [[UITextView alloc] init];
        [self.contentView addSubview:self.editTextView];
        self.editTextView.frame = CGRectMake(10, 15, kScreenWidth - 100 - 20, 150);
        NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
        
        paragraphStyle.lineSpacing = 8;// 字体的行间距
        NSDictionary *attributes = @{
                                     NSFontAttributeName:[UIFont systemFontOfSize:15],
                                     NSParagraphStyleAttributeName:paragraphStyle
                                     };
        
        self.editTextView.attributedText = [[NSAttributedString alloc] initWithString:self.editTextView.text attributes:attributes];
        self.editTextView.textContainerInset = UIEdgeInsetsMake(20, 20, 20, 20);
        self.editTextView.backgroundColor = [UIColor orangeColor];
        
        
        self.textButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.textButton];
        [self.textButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.textButton.frame = CGRectMake(10, 180, 60, 30);
        [self.textButton setTitle:@"字体" forState:UIControlStateNormal];
        [self.textButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        
        
        
        self.colorButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.colorButton];
        [self.colorButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.colorButton.frame = CGRectMake(80, 180, 60, 30);
        [self.colorButton setTitle:@"颜色" forState:UIControlStateNormal];
        [self.colorButton setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
        
        
        
        self.cancelButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.cancelButton];
        [self.cancelButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.cancelButton.frame = CGRectMake(0, kScreenHeight-300-49, (kScreenWidth - 100)/2, 49);
        [self.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
        [self.cancelButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
        
        
        self.sureButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.sureButton];
        [self.sureButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.sureButton.frame = CGRectMake((kScreenWidth - 100)/2, kScreenHeight-300-49, (kScreenWidth - 100)/2, 49);
        [self.sureButton setTitle:@"确定" forState:UIControlStateNormal];
        [self.sureButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    }
    return self;
}

- (void)dismissAlertWindow{
    NSLog(@"dsda福利卡手机号打老虎");
    [UIView animateWithDuration:.25 animations:^{
        self.backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.f];;
        
    }completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}

#pragma mark - 代理
// 开始编辑
- (void)textViewDidBeginEditing:(UITextView *)textView{
    
}


#pragma mark - 懒
- (UIView *)backGroundView{
    if (!_backGroundView) {
        _backGroundView =  [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.7f];
        
    }
    return _backGroundView;
}
- (UIButton *)sureButton{
    if (!_sureButton) {
        _sureButton =  [[UIButton alloc] init];
        
        
    }
    return _sureButton;
}
- (UIButton *)cancelButton{
    if (!_cancelButton) {
        _cancelButton =  [[UIButton alloc] init];
        
    }
    return _cancelButton;
}
- (UITextView *)editTextView{
    if (!_editTextView) {
        _editTextView =  [[UITextView alloc] init];
        
    }
    return _editTextView;
}

- (UIButton *)textButton{
    if (!_textButton) {
        _textButton =  [[UIButton alloc] init];
        
        
    }
    return _textButton;
}
- (UIButton *)colorButton{
    if (!_colorButton) {
        _colorButton =  [[UIButton alloc] init];
        
    }
    return _colorButton;
}
@end
