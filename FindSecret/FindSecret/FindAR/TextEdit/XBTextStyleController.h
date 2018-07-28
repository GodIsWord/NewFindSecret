//
//  XBTextStyleController.h
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TextStyleDelegate <NSObject>
- (void)showTextStyle:(NSString *)fontName;
@end
@interface XBTextStyleController : UITableViewController
@property (nonatomic, weak) id <TextStyleDelegate> delegate;
- (void)changeTextStyle;
@end
