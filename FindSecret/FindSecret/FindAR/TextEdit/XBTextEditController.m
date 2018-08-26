//
//  XBTextEditController.m
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBTextEditController.h"
#import "XBMacroDefinition.h"

@interface XBTextEditController ()<UITextViewDelegate,UITextFieldDelegate>
@property (nonatomic, strong) UIView *backGroundView;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UITextView *editTextView;

@property (nonatomic, strong) UITextField * myTextField;
@property (nonatomic, strong) UIToolbar *customAccessoryView;
@property (nonatomic, strong) UIView *customInputView;
@property (nonatomic, strong) NSArray *styleArray;
@property (nonatomic, strong) NSArray *colorArray;
@property (nonatomic, strong) UIButton *keyboardButton;
@property (nonatomic, strong) UIButton *styleButton;
@property (nonatomic, strong) UILabel *keyboardLabel;
@property (nonatomic, strong) UILabel *styleLabel;

@property (nonatomic, assign) double keyboardHeight;
@property (nonatomic, strong) UILabel *editLabel;
@property (nonatomic, strong) CAShapeLayer *border;
@end

@implementation XBTextEditController

//    文字样式有时候不起作用、 第一次进来textfield聚焦
- (void)viewDidLoad {
    [super viewDidLoad];
    self.styleArray = @[@"SimHei",@"SimHei",@"SimSun",@"Kaiti",@"SimHei",@"STXINGKA"];
    self.colorArray= @[[UIColor whiteColor],[UIColor blackColor],[UIColor redColor],[UIColor orangeColor],[UIColor yellowColor],[UIColor greenColor],[UIColor blueColor],[UIColor purpleColor]];
    self.view.backgroundColor = [UIColor clearColor];
    [self.view addSubview:self.backGroundView];
    
    
    [self.cancelButton addTarget:self action:@selector(dismissAlertWindow:) forControlEvents:UIControlEventTouchUpInside];
    self.cancelButton.frame = CGRectMake(15, STATUSBAR_HEIGHT-3, 50, 49);
    [self.cancelButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self.cancelButton setTitle:@"取消" forState:UIControlStateNormal];
    [self.cancelButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self.backGroundView addSubview:self.cancelButton];
    
    
    self.editTextView.delegate = self;
    self.editTextView.backgroundColor = [UIColor clearColor];
    [self.backGroundView addSubview: self.editTextView];
    
    
    self.myTextField = [[UITextField alloc] init];
    self.myTextField.autocorrectionType = UITextAutocorrectionTypeNo;
    self.myTextField.backgroundColor = [UIColor whiteColor];
    self.myTextField.clearButtonMode = UITextFieldViewModeWhileEditing;
    self.myTextField.layer.masksToBounds = YES;
    self.myTextField.layer.cornerRadius = 5;
    self.myTextField.delegate = self;
    
    self.myTextField.text = self.text.length>0?self.text:@"";
    [self.customAccessoryView addSubview:self.myTextField];
    self.editTextView.inputAccessoryView = self.customAccessoryView;
    [self.myTextField mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.customAccessoryView).offset(15);
        make.right.equalTo(self.customAccessoryView.mas_right).offset(-55);
        make.top.equalTo(self.customAccessoryView).offset(10);
        make.height.mas_equalTo(36);
    }];
    
    
    [self.editTextView  becomeFirstResponder];
    self.editTextView.hidden = YES;
    
    
    self.editLabel = [[UILabel alloc]init];
    self.editLabel.numberOfLines = 0;
    [self.backGroundView addSubview:self.editLabel];

    self.editLabel.textAlignment = NSTextAlignmentCenter;
    self.editLabel.backgroundColor = [UIColor clearColor];

    if (self.text.length>0) {
        self.editLabel.text = self.text;
        [self changeEditLabelFrame];
        if(self.textColor){
            self.editLabel.textColor = self.textColor;
        }else{
            self.editLabel.textColor = [UIColor whiteColor];
        }
        if(self.textStyle.length>0){
            self.editLabel.font = [UIFont fontWithName:self.textStyle size:20];
        }else{
            self.editLabel.font = [UIFont systemFontOfSize:20];
        }
    }
    
    
    UIButton *doneButton = [[UIButton alloc] init];
    [self.customAccessoryView addSubview:doneButton];
    doneButton.titleLabel.font = [UIFont systemFontOfSize:14];
    [doneButton addTarget:self action:@selector(dismissAlertWindow:) forControlEvents:UIControlEventTouchUpInside];
    [doneButton setTitle:@"完成" forState:UIControlStateNormal];
    [doneButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    doneButton.tag = 1;
    [doneButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.right.equalTo(self.customAccessoryView.mas_right).offset(-12);
        make.centerY.equalTo(self.myTextField);
    }];
    
    
    
    self.keyboardLabel = [[UILabel alloc]init];
    [self.customAccessoryView addSubview:self.keyboardLabel];
    self.keyboardLabel.textAlignment = NSTextAlignmentCenter;
    self.keyboardLabel.text = @"键盘";
    self.keyboardLabel.font = [UIFont systemFontOfSize:12];
    self.keyboardLabel.textColor = [UIColor blackColor];
    [self.keyboardLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(self.customAccessoryView.mas_left).offset(SCREEN_WIDTH/4);
        make.bottom.equalTo(self.customAccessoryView.mas_bottom).offset(-5);
    }];
    
    
    self.keyboardButton = [[UIButton alloc] init];
    [self.keyboardButton setImage:[UIImage imageNamed:@"keyboard_selected"] forState:UIControlStateNormal];
    
    [self.keyboardButton addTarget:self action:@selector(keyboardButtonDidClicked:) forControlEvents:UIControlEventTouchUpInside];
    [self.customAccessoryView addSubview:self.keyboardButton];
    [self.keyboardButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(self.customAccessoryView.mas_left).offset(SCREEN_WIDTH/4);
        make.width.mas_equalTo(50);
        make.bottom.equalTo(self.keyboardLabel.mas_top).offset(-2);
    }];
    
    
    self.styleLabel = [[UILabel alloc]init];
    self.styleLabel.text = @"样式";
    self.styleLabel.textColor = [UIColor colorWithRed:170.0f /255.0f green:170.0f /255.0f  blue:170.0f /255.0f  alpha:1];
    
    [self.customAccessoryView addSubview:self.styleLabel];
    self.styleLabel.textAlignment = NSTextAlignmentCenter;
    self.styleLabel.font = [UIFont systemFontOfSize:12];
    [self.styleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(self.customAccessoryView.mas_right).offset(-(SCREEN_WIDTH/4));
        make.bottom.equalTo(self.customAccessoryView.mas_bottom).offset(-5);
    }];
    
    self.styleButton = [[UIButton alloc] init];
    [self.styleButton addTarget:self action:@selector(styleButtonDidClicked:) forControlEvents:UIControlEventTouchUpInside];
    [self.customAccessoryView addSubview:self.styleButton];
    [self.styleButton setImage:[UIImage imageNamed:@"style_normal"] forState:UIControlStateNormal];
    [self.styleButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(self.customAccessoryView.mas_right).offset(-(SCREEN_WIDTH/4));
        make.width.mas_equalTo(50);
        make.bottom.equalTo(self.styleLabel.mas_top).offset(-2);
    }];
    
    
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(textFieldDidChangeValue:)
                                                 name:UITextFieldTextDidChangeNotification
                                               object:self.myTextField];
    
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillShow:)
                                                 name:UIKeyboardWillShowNotification
                                               object:nil];
    
    
    
}

-(void)createTextButton{
    
    
    for (int i = 0; i<6; i++) {
        UIButton *textButton = [[UIButton alloc]init];
        [self.customInputView addSubview:textButton];
        textButton.tag = 101 + i;
        [textButton addTarget:self action:@selector(changeTextStyles:) forControlEvents:UIControlEventTouchUpInside];
        [textButton setTitle:@"寻秘" forState:UIControlStateNormal];
        
        [textButton setTitleColor:[UIColor lightGrayColor] forState:UIControlStateNormal];
        
        NSString *str = self.styleArray[i];
        if(str.length > 0){
            textButton.titleLabel.font = [UIFont fontWithName:str size:17];
            
        }
        [textButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.equalTo(self.customInputView.mas_left).offset(10+50*i+5*i);
            make.width.mas_equalTo(50);
            make.height.mas_equalTo(30);
            make.top.equalTo(self.customInputView.mas_top).offset(168);
        }];
        
    }
    
}

-(void)createColorButton{
    
    for (int i = 0; i<8; i++) {
        UIButton *colorButton = [[UIButton alloc]init];
        [self.customInputView addSubview: colorButton];
        [colorButton addTarget:self action:@selector(changeTextColors:) forControlEvents:UIControlEventTouchUpInside];
        [colorButton setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
        colorButton.backgroundColor = self.colorArray[i];
        colorButton.layer.masksToBounds = YES;
        colorButton.layer.cornerRadius = 11;
        colorButton.layer.borderWidth = 2;
        colorButton.layer.borderColor = [[UIColor colorWithRed:221.0f /255.0f  green:221.0f /255.0f blue:221.0f /255.0f alpha:1] CGColor];
        colorButton.tag = 200 + i;
        [colorButton mas_makeConstraints:^(MASConstraintMaker *make) {
            make.left.equalTo(self.customInputView.mas_left).offset(10+22*i+15*i);
            make.width.mas_equalTo(22);
            make.height.mas_equalTo(22);
            make.top.equalTo(self.customInputView.mas_top).offset(68);
        }];
        
        
    }
    
}

#pragma mark - 监听

- (void)keyboardWillShow:(NSNotification *)aNotification{
    NSDictionary *userInfo = [aNotification userInfo];
    NSValue *aValue = [userInfo objectForKey:UIKeyboardFrameEndUserInfoKey];
    CGRect keyboardRect = [aValue CGRectValue];
    double height = keyboardRect.size.height;
    self.keyboardHeight = height;
    
}

- (void)textFieldDidChangeValue:(NSNotification *)notification{
    UITextField *sender = (UITextField *)[notification object];
    self.editLabel.text = sender.text;
    self.text = sender.text;
    [self changeEditLabelFrame];
    
}
-(void)textViewDidBeginEditing:(UITextView *)textView{
    [self.myTextField becomeFirstResponder];
}

#pragma mark - 点击

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

- (void)changeTextStyles:(UIButton*)sender{
    
    NSString *str = self.styleArray[sender.tag - 101];
    self.editLabel.font = [UIFont fontWithName:str size:20];
    self.textStyle = str;
    
}

- (void)changeTextColors:(UIButton*)sender{
    
    self.editLabel.textColor = self.colorArray[sender.tag - 200];
    self.textColor = self.colorArray[sender.tag - 200];
    
}

- (void)styleButtonDidClicked:(UIButton *)sender{
    
    [self.keyboardButton setImage:[UIImage imageNamed:@"keyboard_normal"] forState:UIControlStateNormal];
    [self.styleButton setImage:[UIImage imageNamed:@"style_selected"] forState:UIControlStateNormal];
    self.styleLabel.textColor = [UIColor blackColor];
    self.keyboardLabel.textColor = [UIColor colorWithRed:170.0f /255.0f  green:170.0f /255.0f  blue:170.0f /255.0f  alpha:1];
    self.myTextField.inputView = self.customInputView;
    [self.myTextField becomeFirstResponder];
    
}

- (void)keyboardButtonDidClicked:(UIButton *)sender{
    [self.keyboardButton setImage:[UIImage imageNamed:@"keyboard_selected"] forState:UIControlStateNormal];
    [self.styleButton setImage:[UIImage imageNamed:@"style_normal"] forState:UIControlStateNormal];
    self.myTextField.inputView = nil;
    [self.myTextField becomeFirstResponder];
    self.styleLabel.textColor = [UIColor colorWithRed:170.0f /255.0f  green:170.0f /255.0f  blue:170.0f /255.0f  alpha:1];
    self.keyboardLabel.textColor = [UIColor blackColor];
    
}

-(void)changeEditLabelFrame{
    
    [self.border removeFromSuperlayer];
    NSDictionary *dict = @{NSFontAttributeName : [UIFont systemFontOfSize:20.0]};
    CGSize size = [self.text boundingRectWithSize:CGSizeMake(SCREEN_WIDTH-30, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:dict context:nil].size;
    
    self.editLabel.frame = CGRectMake(0, STATUSBAR_And_NAVIGATIONBAR_HEIGHT, size.width+20,  size.height+30);
    self.editLabel.centerX = self.backGroundView.centerX;
    self.editLabel.size = CGSizeMake(size.width+20,  size.height+30);
    self.border = [CAShapeLayer layer];
    self.border.strokeColor = [UIColor whiteColor].CGColor;   //虚线的颜色
    self.border.fillColor = [UIColor clearColor].CGColor;//填充的颜色
    self.border.path = [UIBezierPath bezierPathWithRect:self.editLabel.bounds].CGPath;//设置路径
    self.border.frame = self.editLabel.bounds;
    //虚线的宽度
    self.border.lineWidth = 1.f;
    self.border.lineDashPattern = @[@4, @2];
    [self.editLabel.layer addSublayer:self.border];
}
#pragma mark - 懒
- (UIView *)backGroundView{
    if (!_backGroundView) {
        _backGroundView =  [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _backGroundView.backgroundColor = [[UIColor blackColor]colorWithAlphaComponent:0.3f];
        
    }
    return _backGroundView;
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

- (UIToolbar *)customAccessoryView{
    if (!_customAccessoryView) {
        _customAccessoryView = [[UIToolbar alloc]initWithFrame:(CGRect){0,0,SCREEN_WIDTH,100}];
        _customAccessoryView.barTintColor = [UIColor colorWithRed:244.0f /255.0f  green:244.0f /255.0f  blue:244.0f /255.0f  alpha:1];
        UIBarButtonItem *space = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
        
        [_customAccessoryView setItems:@[space,space]];
    }
    return _customAccessoryView;
}



- (UIView *)customInputView{
    if (!_customInputView) {
        _customInputView = [[UIView alloc]initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH,self.keyboardHeight-100)];
        _customInputView.backgroundColor = [UIColor whiteColor];
        [self createEditStyleVIew];
        
    }
    return _customInputView;
}
- (void)createEditStyleVIew{
    
    UILabel *color = [[UILabel alloc] init];
    color.text = @"选择颜色";
    color.font = [UIFont systemFontOfSize:15];
    [self.customInputView addSubview:color];
    [color mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.customInputView).offset(15);
        make.top.equalTo(self.customInputView).offset(40);
    }];
    
    
    
    UILabel *style = [[UILabel alloc] init];
    style.text = @"选择字体";
    style.font = [UIFont systemFontOfSize:15];
    [self.customInputView addSubview:style];
    [style mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.customInputView.mas_left).offset(15);
        make.top.equalTo(self.customInputView.mas_top).offset(139);
    }];
    
    [self createColorButton];
    [self createTextButton];
    
}

- (void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}
@end
