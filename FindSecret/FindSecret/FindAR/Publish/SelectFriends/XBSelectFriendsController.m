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
@property(nonatomic,strong) UITextField *searchTextField;

@property(nonatomic,copy) NSArray *dataSource;

@property(nonatomic,assign) NSInteger currSelectIndex;

@end

@implementation XBSelectFriendsController

static NSString* const cellID = @"steCellID";

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.currSelectIndex = -1;
    [self initDataSource];
    [self initTextField];
    [self initTableView];
}
-(void)initDataSource{
    self.dataSource = @[@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带",@"测试的管带"];
}

-(void)initTextField{
    UITextField *textField = [[UITextField alloc] initWithFrame:CGRectMake(20, 68, ScreenWidth-40, 40)];
    textField.placeholder = @"输入昵称";
    textField.textColor = [UIColor blackColor];
    textField.backgroundColor = [UIColor whiteColor];
    textField.borderStyle = UITextBorderStyleRoundedRect;
    [self.view addSubview:textField];
    self.searchTextField = textField;
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 50+64, ScreenWidth, ScreenHeight-(50+64)) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    
    [self.tableView registerClass:XBSelectFriendsTableViewCell.class forCellReuseIdentifier:cellID];
    
    
    
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"完成" style:UIBarButtonItemStylePlain target:self action:@selector(confirmAction)];
    [item setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor blueColor]} forState:UIControlStateNormal];
    self.navigationItem.rightBarButtonItem = item;
}

-(void)confirmAction{
    if (self.currSelectIndex>=0 && [self.delegate respondsToSelector:@selector(selectFriendsMess:)]) {
        NSDictionary *dic = @{@"title":@"点对点发送",@"userImage":@"taiqiu.png"};
        [self.delegate selectFriendsMess:dic];
        for (UIViewController *control in self.navigationController.viewControllers) {
            if ([control isKindOfClass:NSClassFromString(@"XBPublishController")]) {
                [self.navigationController popToViewController:control animated:YES];
                break;
            }
        }
    }
}

#pragma mark -  UITableViewDelegate

-(void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    [self.searchTextField resignFirstResponder];
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataSource.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBSelectFriendsTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    cell.nameLabel.text = self.dataSource[indexPath.item];
//    cell.typeImageView.hidden = !(indexPath.item == self.currSelectIndex);
    cell.headImageView.image = [UIImage imageNamed:@"taiqiu.png"];
    if ((indexPath.item == self.currSelectIndex)) {
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
    }else{
        cell.accessoryType = UITableViewCellAccessoryNone;
    }
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    self.currSelectIndex = indexPath.item;
    [tableView reloadData];
}

@end
