//
//  XBPointToPointPersonTableViewCell.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/16.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPointToPointPersonTableViewCell.h"


@interface XBPointToPointPersonTableViewCell()

@property(nonatomic,strong) UIImageView *headImageView;
@property(nonatomic,strong) UILabel *nameLabel;
@property(nonatomic,strong) UIImageView *typeImageView;

@end

@implementation XBPointToPointPersonTableViewCell

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self  = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self initSubbView];
    }
    return self;
}


-(void)initSubbView{
    
    UIImageView *headImageView = [[UIImageView alloc] initWithFrame:CGRectMake(10, 15, 30, 30)];
    headImageView.backgroundColor = [UIColor blueColor];
    [self addSubview:headImageView];
    headImageView.layer.cornerRadius = headImageView.width/2;
    headImageView.layer.masksToBounds = YES;
    self.headImageView = headImageView;
    
    UILabel *label = [[UILabel alloc] init];
    label.text = @"测试的测试滚";
    label.backgroundColor = self.backgroundColor;
    [self addSubview:label];
    [label mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(headImageView.mas_right).offset(5);
        make.top.bottom.equalTo(headImageView);
        make.right.mas_equalTo(ScreenWidth-80);
    }];
    
    
    UIImageView *typeImageView = [[UIImageView alloc] init];
    typeImageView.backgroundColor = [UIColor blueColor];
    [self addSubview:typeImageView];
    self.typeImageView = typeImageView;
    [typeImageView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.right.equalTo(self).offset(-10);
        make.height.width.equalTo(@(20));
        make.centerY.equalTo(headImageView.mas_centerY);
    }];
}


@end