//
//  XBPointToPointSendViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/16.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPointToPointSendViewController.h"

#import "XBPointToPointPersonTableViewCell.h"

@interface XBPointToPointSendViewController ()<UITableViewDelegate,UITableViewDataSource>

@property(nonatomic,strong) UITableView *tableView;

@end

@implementation XBPointToPointSendViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    [self initTableView];
    
    
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 64+80, ScreenWidth, ScreenHeight-80) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
}

#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdent = @"iseng";
    XBPointToPointPersonTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdent];
    if (!cell) {
        cell = [[XBPointToPointPersonTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdent];
    }
    
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}


@end
