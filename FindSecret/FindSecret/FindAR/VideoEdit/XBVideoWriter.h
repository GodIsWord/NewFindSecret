//
//  XBVideoWriter.h
//  FindSecret
//
//  Created by 9f on 2018/9/4.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVMediaFormat.h>
@interface XBVideoWriter : NSObject
+ (instancetype)videoWriterWithURL:(NSURL *)url fileType:(AVFileType)fileType error:(NSError *)error;
+(CGSize)maximumFrameSize;
@end
