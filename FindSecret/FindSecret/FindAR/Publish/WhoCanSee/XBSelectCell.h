//
//  XBSelectCell.h
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBSelectCell : UITableViewCell
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *detailLabel;
@property (nonatomic, strong) UIImageView *pictureImageView;
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
