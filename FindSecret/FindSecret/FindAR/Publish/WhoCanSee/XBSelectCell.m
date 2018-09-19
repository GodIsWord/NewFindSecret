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
        [self initSubbView];
    }
    return self;
    
}

#pragma mark - 创建cell
-(void)initSubbView
{

    self.pictureImageView = [[UIImageView alloc]init];
    [self.contentView addSubview:self.pictureImageView];
    self.pictureImageView.frame = CGRectMake(5, 18, 22, 22);
    self.pictureImageView.backgroundColor = self.backgroundColor;
    self.pictureImageView.image = [UIImage imageNamed:@"post_icon_selection_normal"];
    self.pictureImageView.highlightedImage = [UIImage imageNamed:@"post_icon_selection_selected"];
    
    self.titleLabel = [[UILabel alloc]init];
    [self.contentView addSubview:self.titleLabel];
    self.titleLabel.font = [UIFont systemFontOfSize:15];
    self.titleLabel.textColor = [UIColor xb_colorFromString:@"#333333"];
    self.titleLabel.frame = CGRectMake(self.pictureImageView.xb_right+5, 10, ScreenWidth-self.pictureImageView.xb_right-20, 20);
    
    
    self.detailLabel = [[UILabel alloc]init];
    [self.contentView addSubview:self.detailLabel];
    self.detailLabel.frame = CGRectMake(self.titleLabel.xb_x, self.titleLabel.xb_bottom+3, ScreenWidth-self.pictureImageView.xb_right-20, 20);
    self.detailLabel.textColor = [UIColor xb_colorFromString:@"#999999"];
    self.detailLabel.font = [UIFont systemFontOfSize:12];
    
    UIView *line = [[UIView alloc] init];
    [self.contentView addSubview:line];
    [line mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.titleLabel.mas_left);
        make.right.equalTo(self.contentView.mas_right).offset(-15);
        make.bottom.equalTo(self.contentView.mas_bottom).offset(-0.5);
        make.height.mas_equalTo(0.5);
    }];
    line.backgroundColor = [UIColor lightGrayColor];

}
@end
