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
    cell.pictureImageView.backgroundColor = [UIColor blackColor];
    
    cell.titleLabel = [[UILabel alloc]init];
    [cell.contentView addSubview:cell.titleLabel];
    cell.titleLabel.frame = CGRectMake(cell.pictureImageView.xb_right+5, 10, ScreenWidth-cell.pictureImageView.xb_right-20, 20);
    
    
    cell.detailLabel = [[UILabel alloc]init];
    [cell.contentView addSubview:cell.detailLabel];
    cell.detailLabel.frame = CGRectMake(cell.titleLabel.xb_x, cell.titleLabel.xb_bottom+3, ScreenWidth-cell.pictureImageView.xb_right-20, 20);
    cell.detailLabel.textColor = [UIColor lightGrayColor];
    cell.detailLabel.font = [UIFont systemFontOfSize:14];
    
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
