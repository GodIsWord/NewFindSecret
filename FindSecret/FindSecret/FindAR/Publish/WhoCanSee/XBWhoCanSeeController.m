//
//  XBWhoCanSeeController.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBWhoCanSeeController.h"
#import "XBSelectCell.h"
#import "XBSelectFriendsController.h"

@interface XBWhoCanSeeController ()<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,copy) NSArray *dataSource;
@property(nonatomic,copy) NSString *selectTitle;
@end

@implementation XBWhoCanSeeController

- (void)viewDidLoad {
    [super viewDidLoad];
    if (self.type==2) {
        self.title = @"在哪里可以看";
    }else{
        self.title = @"谁可以看";
    }
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;

    [self initDataSource];
    
    UIBarButtonItem *item = [[UIBarButtonItem alloc] initWithTitle:@"完成" style:UIBarButtonItemStylePlain target:self action:@selector(confirmAction)];
    [item setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor blueColor]} forState:UIControlStateNormal];
    self.navigationItem.rightBarButtonItem = item;
}

-(void)confirmAction
{
    if (!self.selectTitle) {
        return;
    }
    [self.navigationController popViewControllerAnimated:YES];
    if ([self.delegate respondsToSelector:@selector(whoCanSeeControllerSelectType:message:)]) {
        [self.delegate whoCanSeeControllerSelectType:self.type message:@{@"title":self.selectTitle}];
    }
}

-(void)initDataSource
{
    if (self.type==1) {
        //谁可以看
        self.dataSource = @[@{@"title":@"公开",@"subTitle":@"所有人可见"},
                            @{@"title":@"好友可见",@"subTitle":@"相互通过好友验证的人可见"},
                            @{@"title":@"私密",@"subTitle":@"仅自己可见"},
                            @{@"title":@"点对点发送",@"subTitle":@"发送给特定的某人"},
                            @{@"title":@"陌生人可见",@"subTitle":@"不是好友关系人可见，好友不可见"}
                            ];
    }else{
        //在哪看
        self.dataSource = @[@{@"title":@"不限地点",@"subTitle":@"在任何地方识别相同的图片即可观看"},
                            @{@"title":@"拍摄地",@"subTitle":@"需要到拍摄地识别相同的图片才可观看"}
                            ];
    }
    
}
#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataSource.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBSelectCell *cell = [XBSelectCell cellWithTableView:tableView];
    NSDictionary *dic = self.dataSource[indexPath.item];
    cell.titleLabel.text = dic[@"title"];
    cell.detailLabel.text = dic[@"subTitle"];
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSDictionary *dic = self.dataSource[indexPath.item];
    if ([dic[@"title"] isEqualToString:@"点对点发送"]) {
        XBSelectFriendsController *contr = [[XBSelectFriendsController alloc] init];
        contr.deleage = (id)self.delegate;
        [self.navigationController pushViewController:contr animated:YES];
    }else{
        self.selectTitle = dic[@"title"];
    }
    
}

@end
