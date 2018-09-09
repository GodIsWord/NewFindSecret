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
typedef NS_ENUM( NSInteger, ZRRecordingStatus) {
    ZRRecordingStatusIdle = 0,
    ZRRecordingStatusRecording,
    ZRRecordingStatusFinished,
    ZRRecordingStatusFailed,
};

@class XBCameraViewController;
@protocol XBCameraViewControllerDelegate <NSObject>
@optional
- (void)cameraViewController:(XBCameraViewController *)cameraViewController didProcessingCompletedWithVideoUrl:(NSURL *)url;
- (void)cameraViewController:(XBCameraViewController *)cameraViewController didProcessingCompletedWithImage:(UIImage *)image;
@end

@interface XBCameraViewController : UIViewController
/**
 * 视频比特率
 * 建议值：2.5 - 6.0
 *       最低2.5，普通模式，也是默认值
 *       最高6.0，视频文件大小不会占用太多
 **/
@property (nonatomic, assign) float averageBitRate;
@property (nonatomic, weak) id <XBCameraViewControllerDelegate>delegate;
@property (nonatomic, assign) XBCameraCaptureMode captureMode;
@end
