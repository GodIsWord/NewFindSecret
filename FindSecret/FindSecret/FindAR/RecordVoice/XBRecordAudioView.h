//
//  XBRecordAudioView.h
//  FindSecret
//
//  Created by yidezhang on 2018/7/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString * const XBRecordAudioViewOkMessage = @"XBRecordAudioViewOkMessage";
static NSString * const XBRecordAudioViewCancleMessage = @"XBRecordAudioViewCancleMessage";

@interface XBRecordAudioView : UIView

+(void)showWithVolume:(double)volume;

+(void)hidden;

@end
