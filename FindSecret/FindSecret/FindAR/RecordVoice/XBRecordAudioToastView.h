//
//  XBRecordAudioToastView.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XBRecordAudioToastView : UIView

+(void)showWithVolume:(double)volume;

+(void)hidden;

@end