//
//  XBFindFriendCell.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBFindFriendCell.h"

@implementation XBFindFriendCell
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
       
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        self.accessoryType = UITableViewCellAccessoryNone;
        self.detailTextLabel.textColor = [UIColor grayColor];
        
    }
    return self;
    
}

#pragma mark - 创建cell
+ (instancetype)cellWithTableView:(UITableView *)tableView
{
    static NSString *ID = @"XBFindFriendCell";
    XBFindFriendCell *cell = (XBFindFriendCell*)[tableView dequeueReusableCellWithIdentifier:ID];
    if (cell == nil){
        cell = [[XBFindFriendCell alloc]initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:ID];
    }
    return cell;
}
#pragma mark - cell height
+ (CGFloat)getCellHeight
{
    
    return 65;
    
}
@end
