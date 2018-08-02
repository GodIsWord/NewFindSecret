//
//  XBWhoCanSeeController.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBWhoCanSeeController.h"
#import "XBSelectCell.h"

@interface XBWhoCanSeeController ()<UITableViewDelegate,UITableViewDataSource>

@end

@implementation XBWhoCanSeeController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}
#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBSelectCell *cell = [XBSelectCell cellWithTableView:tableView];
    
   
    cell.backgroundColor = [UIColor redColor];
    return cell;
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
 
    
}

@end
