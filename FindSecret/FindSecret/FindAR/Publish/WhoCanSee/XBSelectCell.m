//
//  XBSelectCell.m
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBSelectCell.h"

@implementation XBSelectCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        self.accessoryType = UITableViewCellAccessoryNone;
        self.detailTextLabel.textColor = [UIColor grayColor];
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        
    }
    return self;
    
}

#pragma mark - 创建cell
+ (instancetype)cellWithTableView:(UITableView *)tableView
{
    static NSString *ID = @"XBSelectCell";
    XBSelectCell *cell = (XBSelectCell*)[tableView dequeueReusableCellWithIdentifier:ID];
    if (cell == nil){
        cell = [[XBSelectCell alloc]initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:ID];
    }
    
    cell.pictureImageView = [[UIImageView alloc]init];
    [cell.contentView addSubview:cell.pictureImageView];
    cell.pictureImageView.frame = CGRectMake(5, 12, 40, 40);
    
    cell.title = [[UILabel alloc]init];
    [cell.contentView addSubview:cell.title];
    [cell.title mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(cell.contentView.mas_left).offset(50);
        make.centerY.equalTo(cell.contentView);
    }];
    cell.detail = [[UILabel alloc]init];
    [cell.contentView addSubview:cell.detail];
    [cell.detail mas_makeConstraints:^(MASConstraintMaker *make) {
        make.right.equalTo(cell.contentView.mas_right).offset(-20);
        make.centerY.equalTo(cell.contentView);
    }];
    
    UIView *line = [[UIView alloc] init];
    [cell.contentView addSubview:line];

    [line mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(cell.contentView.mas_left).offset(20);
        make.right.equalTo(cell.contentView.mas_right).offset(-20);
        make.bottom.equalTo(cell.contentView.mas_bottom).offset(-0.5);
        make.height.mas_equalTo(0.5);
    }];
    line.backgroundColor = [UIColor lightGrayColor];
    return cell;
}
@end
