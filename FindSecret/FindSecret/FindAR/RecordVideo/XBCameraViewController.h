//
//  XBCameraViewController.h
//  FindSecret
//
//  Created by pillar on 2018/8/19.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, XBCameraCaptureMode) {
    XBCameraCaptureModePhoto,
    XBCameraCaptureModeVideo,
};
@class XBCameraViewController;
@protocol XBCameraViewControllerDelegate <NSObject>
- (void)cameraViewController:(XBCameraViewController *)cameraViewController didProcessingCompletedWithVideoUrl:(NSURL *)url;
- (void)cameraViewController:(XBCameraViewController *)cameraViewController didProcessingCompletedWithImage:(UIImage *)image;
@end

@interface XBCameraViewController : UIViewController
@property (nonatomic, weak) id <XBCameraViewControllerDelegate>delegate;
@property (nonatomic, assign) XBCameraCaptureMode captureMode;
@end
