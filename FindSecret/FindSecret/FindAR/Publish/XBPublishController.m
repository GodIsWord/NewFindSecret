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
#import "XBSelectFriendsController.h"
@interface XBPublishController ()<UITextViewDelegate,UITableViewDelegate,UITableViewDataSource>
@property (nonatomic, strong) UITextView *editTextView;
@property (nonatomic, strong) UILabel *placeholder;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, copy) NSArray *titleDataSource;


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
    
    cell.pictureImageView.backgroundColor= [UIColor redColor];
    cell.detail.text = @"🐷";
    return cell;
}


- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 220;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    
    UIView *view = [[UIView alloc]init];
    view.frame = CGRectMake(0, 0, SCREEN_WIDTH, 180);
    view.backgroundColor = [UIColor whiteColor];
    UILabel *placeholder = [[UILabel alloc] init];
    [view addSubview:placeholder];
    placeholder.frame = CGRectMake(25, 30, SCREEN_WIDTH - 100 - 26, 20);
    
    placeholder.text = @"说点什么呢...";
    self.placeholder = placeholder;
    self.placeholder.font = [UIFont systemFontOfSize:16];
    self.placeholder.textColor = [UIColor lightGrayColor];
    
    
    self.editTextView = [[UITextView alloc] init];
    [view addSubview:self.editTextView];
    self.editTextView.frame = CGRectMake(20, 20, SCREEN_WIDTH-40, 180);
    self.editTextView.backgroundColor = [UIColor clearColor];
    self.editTextView.delegate = self;
    self.editTextView.textContainerInset = UIEdgeInsetsMake(10, 10, 10, 10);
    self.editTextView.font = [UIFont systemFontOfSize:16];
    self.editTextView.layer.borderColor = [[UIColor lightGrayColor] CGColor];
    self.editTextView.layer.borderWidth = 0.5;
    self.editTextView.layer.cornerRadius = 10;
    self.editTextView.layer.masksToBounds = YES;
    return view;
    
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    return 0.01;
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if(indexPath.row == 0){
        XBFindNearAddressVC *vc = [XBFindNearAddressVC new];
        [self.navigationController pushViewController:vc animated:YES];
        
    }else if (indexPath.row == 1){
        XBWhoCanSeeController *vc = [XBWhoCanSeeController new];
        [self.navigationController pushViewController:vc animated:YES];
        
    }else if (indexPath.row == 2){
        XBSelectFriendsController *vc = [XBSelectFriendsController new];
        [self.navigationController pushViewController:vc animated:YES];
        
    }
 
}
@end
