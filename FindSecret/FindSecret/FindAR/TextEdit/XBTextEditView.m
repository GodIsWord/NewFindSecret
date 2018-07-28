//
//  XBTextEditView.m
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "XBTextEditView.h"
#import "XBMacroDefinition.h"

@interface XBTextEditView()<UITextViewDelegate>
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *sureButton;
@property (nonatomic, strong) UITextView *editTextView;
@property (nonatomic, strong) UIButton *textButton;
@property (nonatomic, strong) UIButton *colorButton;
@property (nonatomic, strong) UILabel *placeholder;
@property (nonatomic, strong) UIWindow * window;
@end

@implementation XBTextEditView


- (void)showTextView{
    self.window = [UIApplication sharedApplication].keyWindow;
    [self.window addSubview: self];
    
    [UIView animateWithDuration:0.75 animations:^{
        self.backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.7f];
    } completion:^(BOOL finished) {
        
    }];
    
}

- (id)initWithFrame:(CGRect)frame{
    if(self = [super initWithFrame: [[UIScreen mainScreen]bounds]]){

        [self addSubview: self.backGroundView];
        self.contentView = [[UIView alloc] init];
        self.contentView.backgroundColor = [UIColor whiteColor];
        self.contentView.frame = CGRectMake(50, 130, SCREEN_WIDTH - 100, (SCREEN_WIDTH - 100)*1.25);
        [self.backGroundView addSubview:self.contentView];
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(textViewEndEdit)];
        [self.contentView addGestureRecognizer:tap];
        self.contentView.layer.borderWidth = 0.5;
        self.contentView.layer.cornerRadius = 10;
        self.contentView.layer.masksToBounds = YES;
        
        
        
        
        UILabel *placeholder = [[UILabel alloc] init];
        [self.contentView addSubview:placeholder];
        placeholder.frame = CGRectMake(25, 30, SCREEN_WIDTH - 100 - 26, 20);
        placeholder.text = @"请输入内容";
        self.placeholder = placeholder;
        self.placeholder.font = [UIFont systemFontOfSize:16];
        self.placeholder.textColor = [UIColor lightGrayColor];
        
        
        self.editTextView = [[UITextView alloc] init];
        [self.contentView addSubview:self.editTextView];
        self.editTextView.frame = CGRectMake(10, 20, SCREEN_WIDTH - 100-20, 155);
        self.editTextView.backgroundColor = [UIColor clearColor];
        self.editTextView.delegate = self;
        self.editTextView.textContainerInset = UIEdgeInsetsMake(10, 10, 10, 10);
        self.editTextView.font = [UIFont systemFontOfSize:16];
        self.editTextView.layer.borderColor = [[UIColor lightGrayColor] CGColor];
        self.editTextView.layer.borderWidth = 0.5;
        self.editTextView.layer.cornerRadius = 10;
        self.editTextView.layer.masksToBounds = YES;

        
        
        self.textButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.textButton];
        [self.textButton addTarget:self action:@selector(selectTextStyle) forControlEvents:UIControlEventTouchUpInside];
        self.textButton.frame = CGRectMake(10, 185, 60, 30);
        [self.textButton setTitle:@"字体" forState:UIControlStateNormal];
        [self.textButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        
        
        
        self.colorButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.colorButton];
        [self.colorButton addTarget:self action:@selector(selectTextColor) forControlEvents:UIControlEventTouchUpInside];
        self.colorButton.frame = CGRectMake(80, 185, 60, 30);
        [self.colorButton setTitle:@"颜色" forState:UIControlStateNormal];
        [self.colorButton setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
        
        
        
        self.cancelButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.cancelButton];
        [self.cancelButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.cancelButton.frame = CGRectMake(0, (SCREEN_WIDTH - 100)*1.25-49, (SCREEN_WIDTH - 100)/2, 49);
        [self.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
        [self.cancelButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
        
        self.cancelButton.layer.borderColor = [[UIColor lightGrayColor] CGColor];
        self.cancelButton.layer.borderWidth = 0.5;
    
        
        
        
        self.sureButton = [[UIButton alloc]init];
        [self.contentView addSubview: self.sureButton];
        [self.sureButton addTarget:self action:@selector(dismissAlertWindow) forControlEvents:UIControlEventTouchUpInside];
        self.sureButton.frame = CGRectMake((SCREEN_WIDTH - 100)/2,(SCREEN_WIDTH - 100)*1.25-49, (SCREEN_WIDTH - 100)/2, 49);
        [self.sureButton setTitle:@"确定" forState:UIControlStateNormal];
        [self.sureButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
        self.sureButton.layer.borderColor = [[UIColor lightGrayColor] CGColor];
        self.sureButton.layer.borderWidth = 0.5;
        
        
    }
    return self;
}

- (void)dismissAlertWindow{
    
    [UIView animateWithDuration:0 animations:^{
        self.backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.f];;
        
    }completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}
-(void)textViewEndEdit{
    [self.editTextView resignFirstResponder];
    
}
-(void)selectTextStyle{
    NSLog(@"选择字体样式");

}
-(void)selectTextColor{
    NSLog(@"选择字体颜色");
}
#pragma mark - 代理
// 开始编辑
- (void)textViewDidBeginEditing:(UITextView *)textView{
    self.placeholder.hidden = YES;
    
}
- (BOOL)textViewShouldBeginEditing:(UITextView *)aTextView
{
    //Has Focus
    return YES;
}
- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    if ([text isEqualToString:@"\n"])
    {
        //Lost Focus
        [textView resignFirstResponder];
    }
    return YES;
}

- (void)textViewDidChange:(UITextView *)textView{
    if (textView.text.length == 0) {
        self.placeholder.hidden = NO;
    }else{
        self.placeholder.hidden = YES;
        
    }
    
}

#pragma mark - 懒
- (UIView *)backGroundView{
    if (!_backGroundView) {
        _backGroundView =  [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.75f];
        
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
