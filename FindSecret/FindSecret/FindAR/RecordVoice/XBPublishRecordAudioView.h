//
//  XBPublishRecordAudioView.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XBPublishRecordAudioView;

@protocol XBPublishRecordAudioViewDelegate <NSObject>

@optional
-(void)XBPublishRecordFinish:(id)audioView audioPath:(NSString*)path duration:(NSTimeInterval)duration;

-(void)XBPublishRecordDismiss:(id)audioView;

@end

@interface XBPublishRecordAudioView : UIView

@property(nonatomic,weak) id<XBPublishRecordAudioViewDelegate>delegate;

@property(nonatomic,weak) UIViewController *viewController;

-(void)reloadSubbView;

@end
