//
//  XBPublishCell.m
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishCell.h"

@implementation XBPublishCell

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
    static NSString *ID = @"Cell";
    XBPublishCell *cell = (XBPublishCell*)[tableView dequeueReusableCellWithIdentifier:ID];
    if (cell == nil){
        cell = [[XBPublishCell alloc]initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:ID];
    }

    cell.pictureImageView = [[UIImageView alloc]init];
    [cell addSubview:cell.pictureImageView];
    cell.pictureImageView.frame = CGRectMake(5, 12, 40, 40);
    
    cell.title = [[UILabel alloc]init];
    [cell addSubview:cell.title];
    cell.title.frame = CGRectMake(50, 0, 200, 64);
    
    cell.detail = [[UILabel alloc]init];
    [cell addSubview:cell.detail];
    cell.detail.frame = CGRectMake(cell.width-50, 0, 100, 64);

    
    
    UIView *line = [[UIView alloc]init];
    line.frame = CGRectMake(20, 64-0.5, cell.width, 0.5);
    line.backgroundColor = [UIColor lightGrayColor];
    [cell addSubview:line];
    return cell;
}

@end
