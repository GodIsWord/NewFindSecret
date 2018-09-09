//
//  XBMakeViewController.h
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XBMakeViewControllerDelegate <NSObject>

-(void)makeViewControllerFinish:(NSDictionary*)requestJson filePaths:(NSSet*)filePaths backImageFilePath:(NSString*)backFilePath snapshotImag:(UIImage*)snapImage;

@end

@interface XBMakeViewController : UIViewController
@property  (nonatomic, assign) BOOL onlyAddContentMode;
@property  (nonatomic, copy) NSString *contentImagePath;
@property (nonatomic, strong) UIImage *contentImage;
@property (nonatomic,weak) id<XBMakeViewControllerDelegate> delegate;

@end
