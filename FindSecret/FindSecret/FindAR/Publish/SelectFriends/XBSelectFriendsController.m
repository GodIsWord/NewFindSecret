//
//  XBSelectFriendsController.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBSelectFriendsController.h"
#import "XBSelectFriendsTableViewCell.h"

@interface XBSelectFriendsController ()<UITableViewDelegate,UITableViewDataSource>

@property(nonatomic,strong) UITableView *tableView;
@property(nonatomic,strong) UITextField *textField;

@end

@implementation XBSelectFriendsController

static NSString* const cellID = @"steCellID";

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initTextField];
    [self initTableView];
}

-(void)initTextField{
    UITextField *textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 74, ScreenWidth, 60)];
    textField.placeholder = @"输入昵称";
    [self.view addSubview:textField];
    self.textField = textField;
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 64+80, ScreenWidth, ScreenHeight-80) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    
    [self.tableView registerClass:XBSelectFriendsTableViewCell.class forCellReuseIdentifier:cellID];
}

#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBSelectFriendsTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}

@end
