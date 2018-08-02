//
//  XBRecordManager.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/2.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XBRecordManager : NSObject

-(void)startRecord;

-(void)endRecord;

-(void)playAudioWithURL:(NSURL*)urlh;

-(void)stopPlay;

-(NSString*)lastAudioPath;

@end
