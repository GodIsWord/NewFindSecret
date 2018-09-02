//
//  XBPublishController.m
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishController.h"
#import "XBMacroDefinition.h"
#import "XBFindNearAddressVC.h"
#import "XBPublishCell.h"
#import "XBWhoCanSeeController.h"
#import "Masonry.h"

@interface XBPublishController ()<UITextViewDelegate,UITableViewDelegate,UITableViewDataSource,UIScrollViewDelegate>
@property (nonatomic, strong) UITextView *editTextView;
@property (nonatomic, strong) UILabel *placeholder;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, copy) NSArray *titleDataSource;
@property (nonatomic, copy) NSArray *imageDataSource;
@property (nonatomic, copy) NSArray *detailDataSource;

@property (nonatomic, strong) UIImageView *picView;
@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *lastImageView;
@property (nonatomic, assign) CGRect originalFrame;
@property (nonatomic, assign) BOOL isDoubleTap;
@end

@implementation XBPublishController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"发布";
    self.view.backgroundColor = [UIColor whiteColor];
    static NSString *ID = @"cell";
    
    self.tableView = [[UITableView alloc]initWithFrame:CGRectMake(20, 20, SCREEN_WIDTH-40, 80*3+2) style:UITableViewStyleGrouped];
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:ID];
    
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.tableView.backgroundColor = [UIColor whiteColor];
    
    self.titleDataSource = @[@"所在位置",@"谁可以看",@"在哪里可以看"];
    self.imageDataSource = @[@"3",@"3",@"3"];
    self.detailDataSource = @[@"",@"点对点发送",@"不限地点"];
}

#pragma mark -- textView Delegate
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
#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBPublishCell *cell = [XBPublishCell cellWithTableView:tableView];
    
    NSString *str = self.titleDataSource[indexPath.row];
    cell.title.text = str;
    cell.title.textColor = [UIColor grayColor];
    cell.pictureImageView.image = [UIImage imageNamed:self.imageDataSource[indexPath.row]];
    cell.detail.text = self.detailDataSource[indexPath.row];
    cell.detail.textColor = [UIColor grayColor];
    return cell;
}


- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 270;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    
    UIView *view = [[UIView alloc]init];
    view.frame = CGRectMake(0, 0, SCREEN_WIDTH, 180);
    view.backgroundColor = [UIColor whiteColor];
    UILabel *placeholder = [[UILabel alloc] init];
    [view addSubview:placeholder];
    [placeholder mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(view).offset(35);
        make.top.equalTo(view).offset(30);
        make.height.mas_equalTo(20);
        make.right.equalTo(view).offset(-20);
    }];
    
    placeholder.text = @"说点什么呢...";
    self.placeholder = placeholder;
    self.placeholder.font = [UIFont systemFontOfSize:16];
    self.placeholder.textColor = [UIColor lightGrayColor];
    
    
    self.editTextView = [[UITextView alloc] init];
    [view addSubview:self.editTextView];
    
    self.editTextView.backgroundColor = [UIColor clearColor];
    self.editTextView.delegate = self;
    self.editTextView.textContainerInset = UIEdgeInsetsMake(10, 10, 10, 10);
    self.editTextView.font = [UIFont systemFontOfSize:16];
    self.editTextView.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.editTextView.layer.borderWidth = 0.5;
    self.editTextView.layer.cornerRadius = 10;
    self.editTextView.layer.masksToBounds = YES;
    
    [self.editTextView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(view).offset(20);
        make.top.equalTo(view).offset(20);
        make.right.equalTo(view.mas_right).offset(-20);
        make.height.mas_equalTo(180);
    }];
    
    self.picView = [[UIImageView alloc]init];
    [view addSubview:self.picView];
    self.picView.userInteractionEnabled = YES;
    self.picView.image = [UIImage imageNamed:@"style_selected"];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(showZoomImageView:)];
    self.picView.contentMode = UIViewContentModeScaleAspectFit;
    [self.picView addGestureRecognizer:tap];
    [self.picView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.editTextView.mas_bottom).offset(10);
        make.left.equalTo(view).offset(20);
        make.width.height.mas_equalTo(50);
    }];
    return view;
    
}

-(UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section{
    UIView *view = [[UIView alloc]init];
    view.backgroundColor = [UIColor whiteColor];
    UIButton *publish = [[UIButton alloc] init];
    publish.backgroundColor = [UIColor orangeColor];
    [publish setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [publish setTitle:@"发布" forState:UIControlStateNormal];
    [publish addTarget:self action:@selector(publishBUttonDidClicked:) forControlEvents:UIControlEventTouchUpInside];
    [view addSubview:publish];
    [publish mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(view).offset(30);
        make.top.equalTo(view).offset(30);
        make.height.mas_equalTo(49);
        make.right.equalTo(view).offset(-30);
    }];
    
    return view;
}
-(void)publishBUttonDidClicked:(UIButton *)sender{
    
}
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    return 49;
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if(indexPath.row == 0){
        XBFindNearAddressVC *vc = [XBFindNearAddressVC new];
        [self.navigationController pushViewController:vc animated:YES];
        [vc setReturnBlock:^(NSString *city,NSString *name,NSString *address,CGFloat latitude,CGFloat longitude,NSString *phone,UIImage *img){
            if (name) {
                
                XBPublishCell *cell = [tableView cellForRowAtIndexPath:indexPath];
                cell.title.text = name;
                cell.title.textColor = [UIColor blueColor];
                //                self.addressLabel.width = ScreenWidth - 40;
                //                cell.text = [NSString stringWithFormat:@"longitude = %.10f\nlatitude = %.10f\n%@",longitude,latitude,name];
                //                [self.addressLabel sizeToFit];
                
            }
            
        }];
    }else if (indexPath.row == 1){
        XBWhoCanSeeController *vc = [XBWhoCanSeeController new];
        vc.type = 1;
        [self.navigationController pushViewController:vc animated:YES];
        
    }else if (indexPath.row == 2){
        XBWhoCanSeeController *vc = [XBWhoCanSeeController new];
        vc.type = 2;
        [self.navigationController pushViewController:vc animated:YES];
        
    }
    
}

#pragma mark == 放大图片

-(void)showZoomImageView:(UITapGestureRecognizer *)tap
{
    if (![(UIImageView *)tap.view image]) {
        return;
    }
    //scrollView作为背景
    UIScrollView *bgView = [[UIScrollView alloc] init];
    bgView.frame = [UIScreen mainScreen].bounds;
    bgView.backgroundColor = [UIColor blackColor];
    UITapGestureRecognizer *tapBg = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapBgView:)];
    [bgView addGestureRecognizer:tapBg];
    
    UIImageView *picView = (UIImageView *)tap.view;
    
    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.image = picView.image;
    imageView.frame = [bgView convertRect:picView.frame fromView:self.view];
    [bgView addSubview:imageView];
    
    [[[UIApplication sharedApplication] keyWindow] addSubview:bgView];
    
    self.lastImageView = imageView;
    self.originalFrame = imageView.frame;
    self.scrollView = bgView;
    //最大放大比例
    self.scrollView.maximumZoomScale = 1.5;
    self.scrollView.delegate = self;
    
    [UIView animateWithDuration:0.5 animations:^{
        CGRect frame = imageView.frame;
        frame.size.width = bgView.frame.size.width;
        frame.size.height = frame.size.width * (imageView.image.size.height / imageView.image.size.width);
        frame.origin.x = 0;
        frame.origin.y = (bgView.frame.size.height - frame.size.height) * 0.5;
        imageView.frame = frame;
    }];
}

-(void)tapBgView:(UITapGestureRecognizer *)tapBgRecognizer
{
    self.scrollView.contentOffset = CGPointZero;
    [UIView animateWithDuration:0.5 animations:^{
        self.lastImageView.frame = self.originalFrame;
        tapBgRecognizer.view.backgroundColor = [UIColor clearColor];
    } completion:^(BOOL finished) {
        [tapBgRecognizer.view removeFromSuperview];
        self.scrollView = nil;
        self.lastImageView = nil;
    }];
}

//返回可缩放的视图
-(UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView
{
    return self.lastImageView;
}
@end
