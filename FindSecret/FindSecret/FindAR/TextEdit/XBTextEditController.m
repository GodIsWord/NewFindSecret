//
//  XBTextEditController.m
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBTextEditController.h"
#import "XBMacroDefinition.h"
#import "XBTextStyleController.h"
#import "XBTextColorController.h"
@interface XBTextEditController ()<UITextViewDelegate,TextStyleDelegate,TextColorDelegate>
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *sureButton;
@property (nonatomic, strong) UITextView *editTextView;

@property (nonatomic, strong) UIButton *textButtonMore;
@property (nonatomic, strong) UIButton *colorButtonMore;
@property (nonatomic, strong) UILabel *placeholder;
@property (nonatomic, strong) UIWindow * window;

@end

@implementation XBTextEditController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor clearColor];
    [self.view addSubview:self.backGroundView];
    [self createContentView];
}

-(void)createContentView{
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
    [placeholder mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.contentView).offset(25);
        make.top.equalTo(self.contentView).offset(30);
        make.height.mas_equalTo(20);
        make.right.equalTo(self.contentView).offset(-20);
    }];
    placeholder.text = @"请输入内容";
    self.placeholder = placeholder;
    self.placeholder.font = [UIFont systemFontOfSize:16];
    self.placeholder.textColor = [UIColor lightGrayColor];
    
    
    self.editTextView = [[UITextView alloc] init];
    [self.contentView addSubview:self.editTextView];
    
    [self.editTextView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.contentView).offset(10);
        make.top.equalTo(self.contentView).offset(20);
        make.height.mas_equalTo(155);
        make.right.equalTo(self.contentView).offset(-20);
    }];
    self.editTextView.backgroundColor = [UIColor clearColor];
    self.editTextView.delegate = self;
    self.editTextView.textContainerInset = UIEdgeInsetsMake(10, 10, 10, 10);
    self.editTextView.font = [UIFont systemFontOfSize:16];
    self.editTextView.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.editTextView.layer.borderWidth = 0.5;
    self.editTextView.layer.cornerRadius = 10;
    self.editTextView.layer.masksToBounds = YES;
    
    if (self.text.length>0) {
        placeholder.hidden = YES;
        self.editTextView.text = self.text;
        if(self.textColor){
            self.editTextView.textColor = self.textColor;
        }
        if(self.textStyle.length>0){
            self.editTextView.font = [UIFont fontWithName:self.textStyle size:16];
        }
    }
    
    
    self.cancelButton = [[UIButton alloc]init];
    [self.contentView addSubview: self.cancelButton];
    [self.cancelButton addTarget:self action:@selector(dismissAlertWindow:) forControlEvents:UIControlEventTouchUpInside];
    self.cancelButton.frame = CGRectMake(0, (SCREEN_WIDTH - 100)*1.25-49, (SCREEN_WIDTH - 100)/2, 49);
    [self.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
    [self.cancelButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    
    self.cancelButton.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.cancelButton.layer.borderWidth = 0.5;
    
    
    
    
    self.sureButton = [[UIButton alloc]init];
    [self.contentView addSubview: self.sureButton];
    self.sureButton.tag = 1;
    [self.sureButton addTarget:self action:@selector(dismissAlertWindow:) forControlEvents:UIControlEventTouchUpInside];
    self.sureButton.frame = CGRectMake((SCREEN_WIDTH - 100)/2,(SCREEN_WIDTH - 100)*1.25-49, (SCREEN_WIDTH - 100)/2, 49);
    [self.sureButton setTitle:@"确定" forState:UIControlStateNormal];
    [self.sureButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    self.sureButton.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.sureButton.layer.borderWidth = 0.5;
    
    [self createTextButton];
    [self createColorButton];
}
-(void)createTextButton{
    
    NSArray * array= @[@"宋体",@"楷体",@"雅黑",@"..."];
    for (int i = 0; i<4; i++) {
        UIButton *textButton = [[UIButton alloc]init];
        [self.contentView addSubview: textButton];
        textButton.tag = 101 + i;
        [textButton addTarget:self action:@selector(changeTextStyles:) forControlEvents:UIControlEventTouchUpInside];
        [textButton setTitle:array[i] forState:UIControlStateNormal];
        [textButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        textButton.layer.masksToBounds = YES;
        textButton.layer.cornerRadius = 10;
        textButton.layer.borderWidth = 1;
        textButton.layer.borderColor = [UIColor grayColor].CGColor;
        [textButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.equalTo(self.contentView.mas_left).offset(10+50*i+3*i);
            make.width.mas_equalTo(50);
            make.height.mas_equalTo(30);
            make.bottom.equalTo(self.cancelButton.mas_top).offset(-25);
        }];
        
        if(textButton.tag == 104){
            self.textButtonMore = textButton;
        }
    }
    
}
-(void)createColorButton{
    
    NSArray * array= @[@"",@"",@"",@"",@"",@"..."];
    for (int i = 0; i<6; i++) {
        UIButton *colorButton = [[UIButton alloc]init];
        [self.contentView addSubview: colorButton];
        [colorButton addTarget:self action:@selector(changeTextColors:) forControlEvents:UIControlEventTouchUpInside];
        [colorButton setTitle:array[i] forState:UIControlStateNormal];
        [colorButton setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    
        colorButton.tag = 200 + i;
        [colorButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.equalTo(self.contentView.mas_left).offset(10+30*i+5*i);
            make.width.mas_equalTo(30);
            make.height.mas_equalTo(30);
            make.bottom.equalTo(self.textButtonMore.mas_top).offset(-15);
        }];
        
        if(colorButton.tag == 200){
            colorButton.backgroundColor = [UIColor blueColor];
            
        }else if(colorButton.tag == 201){
            colorButton.backgroundColor = [UIColor redColor];
            
        }else if(colorButton.tag == 202){
            colorButton.backgroundColor = [UIColor orangeColor];
            
        }else if(colorButton.tag == 203){
            colorButton.backgroundColor = [UIColor yellowColor];
            
        }else if(colorButton.tag == 204){
            colorButton.backgroundColor = [UIColor blackColor];
            
        }else if(colorButton.tag == 205){
            colorButton.backgroundColor = [UIColor lightGrayColor];
            self.colorButtonMore = colorButton;
            
        }
        
    }
    
    
}

- (void)dismissAlertWindow:(UIButton *)sender{
    __weak typeof(self)wSelf = self;
    [self dismissViewControllerAnimated:NO completion:^{
        if (sender.tag == 1) {
            if (wSelf.callback) {
                wSelf.callback(wSelf.editTextView.attributedText);
            }
        }
    }];
    
}
-(void)textViewEndEdit{
    [self.editTextView resignFirstResponder];
    
}
-(void)selectTextStyle{
    XBTextStyleController  *textStyle = [[XBTextStyleController alloc]init];
    textStyle.delegate = self;
    [self presentViewController:textStyle animated:YES completion:nil];
    
}
-(void)selectTextColor{
    XBTextColorController  *textColor = [[XBTextColorController alloc]init];
    textColor.delegate = self;
    [self presentViewController:textColor animated:YES completion:nil];
    
}
#pragma mark - 代理

-(void)showTextStyle:(NSString *)fontName{
    self.editTextView.font = [UIFont fontWithName:fontName size:16];
}
-(void)showTextColor:(UIColor *)_color{
    self.editTextView.textColor = _color;
    
}
-(void)changeTextStyles:(UIButton*)sender{
    
    for (NSString *fontName in [UIFont familyNames]) {
        NSLog(@"family:'%@'",fontName);
        for (NSString *font in [UIFont fontNamesForFamilyName:fontName]) {
            NSLog(@"\tfont:'%@'", font);
        }
        NSLog("=======================");
    }
    if(sender.tag == 101){
        self.editTextView.font = [UIFont fontWithName:@"SimSun" size:16];
        
    }else if(sender.tag == 102){
        self.editTextView.font = [UIFont fontWithName:@"Kaiti" size:16];
        
    }else if(sender.tag == 103){
        self.editTextView.font = [UIFont fontWithName:@"MicrosoftYaHei" size:16];
        
    }else if(sender.tag == 104){
        [self selectTextStyle];
        
    }
}

-(void)changeTextColors:(UIButton*)sender{
    
    if(sender.tag == 200){
        self.editTextView.textColor = [UIColor blueColor];
        
    }else if(sender.tag == 201){
        self.editTextView.textColor= [UIColor redColor];
        
    }else if(sender.tag == 202){
        self.editTextView.textColor = [UIColor orangeColor];
        
    }else if(sender.tag == 203){
        self.editTextView.textColor = [UIColor yellowColor];
        
    }else if(sender.tag == 204){
        self.editTextView.textColor = [UIColor blackColor];
        
    }else if(sender.tag == 205){
        [self selectTextColor];
        
    }
    
}
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
        //        if(self.textStyle.length>0){
        //            self.editTextView.font = [UIFont fontWithName:self.textStyle size:16];
        //        }else{
        //            self.editTextView.font = [UIFont systemFontOfSize:16];
        //        }
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

- (UIButton *)textButtonMore{
    if (!_textButtonMore) {
        _textButtonMore =  [[UIButton alloc] init];
        
    }
    return _textButtonMore;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
 #pragma mark - Navigation
 
 // In a storyboard-based application, you will often want to do a little preparation before navigation
 - (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
 // Get the new view controller using [segue destinationViewController].
 // Pass the selected object to the new view controller.
 }
 */

@end
