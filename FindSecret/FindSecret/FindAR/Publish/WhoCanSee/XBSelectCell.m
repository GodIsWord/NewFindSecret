//
//  XBSelectCell.m
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBSelectCell.h"

@implementation XBSelectCell

+ (instancetype)cellWithTableView:(UITableView *)tableView{
    static NSString *ID = @"XBSelectCell";

    XBSelectCell * cell = [tableView dequeueReusableCellWithIdentifier:ID];
    if (!cell)
    {

        [tableView registerNib:[UINib nibWithNibName:@"XBSelectCell" bundle:nil] forCellReuseIdentifier:ID];
      
        cell = [tableView dequeueReusableCellWithIdentifier:ID];
        
    }

    cell.selectionStyle=UITableViewCellSelectionStyleNone;

    return cell;
}

@end
