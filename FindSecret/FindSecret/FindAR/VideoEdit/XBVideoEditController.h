//
//  XBVideoEditController.h
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XBVideoEditController;

@protocol XBVideoEditControllerDelegate <NSObject>
- (void)videoEditController:(XBVideoEditController *)videoEditController didProcessingCompletedWithVideoUrl:(NSURL *)url;
@end

@interface XBVideoEditController : UIViewController
@property (nonatomic, weak) id<XBVideoEditControllerDelegate> delegate;
@property (nonatomic, assign) BOOL isEidt;
@property (nonatomic, strong) NSURL *videoUrl;
@end
