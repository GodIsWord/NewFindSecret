//
//  XBMakeViewController.h
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBMakeViewController : UIViewController
@property  (nonatomic, assign) BOOL onlyAddContentMode;
@property  (nonatomic, strong) UIImage *contentImage;
- (NSString *)requestJson;
@end
