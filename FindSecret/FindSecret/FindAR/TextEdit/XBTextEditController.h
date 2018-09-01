//
//  XBTextEditController.h
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>


@class XBTextEditController;
@protocol XBTextEditControllerDelegate <NSObject>
- (void)didEdited:(XBTextEditController *)textEditController;
@end

@interface XBTextEditController : UIViewController
@property (nonatomic, strong, readonly) UILabel *contentLabel;
@property (nonatomic, weak) id<XBTextEditControllerDelegate> delegate;
@end
