//
//  XBVideoWriter.m
//  FindSecret
//
//  Created by 9f on 2018/9/4.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBVideoWriter.h"
#import <AVFoundation/AVFoundation.h>
static BOOL checkedForFrameSize = NO;
static CGSize maxFrameSize;
@interface XBVideoWriter ()
@property (nonatomic, strong) AVAssetWriter *writer;
@end
@implementation XBVideoWriter
+ (instancetype)videoWriterWithURL:(NSURL *)url fileType:(AVFileType)fileType error:(NSError *)error {
    XBVideoWriter *videoWriter = [[self alloc] init];
    videoWriter.writer = [AVAssetWriter assetWriterWithURL:url fileType:fileType error:&error];
    return videoWriter;
}




+(BOOL)_softwareAvailable {
    Class assetWriter = NSClassFromString(@"AVAssetWriter");
    return assetWriter == nil ? NO : YES;
}

+(BOOL)deviceSupportsVideoEncoding {
    if ([XBVideoWriter _softwareAvailable]) {
        return !CGSizeEqualToSize(CGSizeMake(0, 0), [XBVideoWriter maximumFrameSize]);
    }
    return NO;
}

+(CGSize)maximumFrameSize {
    if (!checkedForFrameSize) {
        int frameWidth = 0;
        int frameHeight = 0;
        if ([XBVideoWriter _softwareAvailable]) {
            NSArray* availablePresents = [AVAssetExportSession allExportPresets];
            NSString *regex = @"AVAssetExportPreset\\d+x\\d+";
            for (NSString* preset in availablePresents) {
                NSPredicate *pred = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
                if ([pred evaluateWithObject:preset])
                {
                    NSString *presetCut = [preset substringFromIndex:19];
                    NSArray* heightAndWidth = [presetCut componentsSeparatedByString:@"x"];
                    int testWidth = [[heightAndWidth objectAtIndex:0] intValue];
                    if (testWidth > frameWidth) {
                        frameWidth = testWidth;
                        frameHeight = [[heightAndWidth objectAtIndex:1] intValue];
                    }
                }
            }
            NSLog(@"%@", availablePresents);
            NSLog(@"%d, %d", frameWidth, frameHeight);
        }
        maxFrameSize = CGSizeMake(frameWidth, frameHeight);
        checkedForFrameSize = YES;
    }
    return maxFrameSize;
}
@end
