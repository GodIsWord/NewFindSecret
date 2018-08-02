//
//  XBFindNearAddressVC.h
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBBaseTableViewController.h"

@interface XBFindNearAddressVC : XBBaseTableViewController
typedef void (^ChooseAddressSuccessBlock)(NSString *city,NSString *name,NSString *address,CGFloat latitude,CGFloat longitude,NSString *phone,UIImage *img);
@property(nonatomic,copy)ChooseAddressSuccessBlock returnBlock;
@end
