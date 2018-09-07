//
//  XBPublishController.h
//  FindSecret
//
//  Created by 黄艳红 on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBPublishController : UITableViewController
@property(nonatomic,copy) NSString *jsonStr;
@property(nonatomic,copy) NSArray *filePaths;
@property(nonatomic,strong) UIImage *snapshotImage;
@end
