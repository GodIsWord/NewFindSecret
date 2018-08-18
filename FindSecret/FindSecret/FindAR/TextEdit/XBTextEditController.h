//
//  XBTextEditController.h
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBTextEditController : UIViewController
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) void (^callback) (NSAttributedString *content);
@end
