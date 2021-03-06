//
//  XBPublishCell.h
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBPublishCell : UITableViewCell
@property (nonatomic, strong) UILabel *title;
@property (nonatomic, strong) UILabel *detail;
@property (nonatomic, strong) UIImageView *pictureImageView;
@property (nonatomic, strong) UIImageView *rightHeaderImage;
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
