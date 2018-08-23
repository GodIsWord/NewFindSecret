//
//  XBRecordControl.h
//  FindSecret
//
//  Created by pillar on 2018/8/17.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CaptureType){
    CaptureTypeRecord = 100,
    CaptureTypePhoto
};

@class XBRecordControl;

@protocol XBRecordControlDelegate <NSObject>
- (void)recordControlDidStartCapture:(XBRecordControl *)recordControl;
- (void)recordControlDidPauseCapture:(XBRecordControl *)recordControl;
- (void)recordControlDidEndCapture:(XBRecordControl *)recordControl;
- (void)recordControlDidTap:(XBRecordControl *)recordControl;
@end


@interface XBRecordControl : UIView

@property (nonatomic, assign) CaptureType type;
@property (nonatomic, weak) IBOutlet id<XBRecordControlDelegate> delegate;
@property (nonatomic, assign) CGFloat progress;

- (void)setProgress:(CGFloat)newProgress;
- (void)resetCapture;
@end
