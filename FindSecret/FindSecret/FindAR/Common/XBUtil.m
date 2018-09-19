//
//  XBUtil.m
//  FindSecret
//
//  Created by pillar on 2018/9/19.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBUtil.h"

@implementation XBUtil
+ (void)deleteAllFilesUnderTempDirectory {
    
    NSString *tempPath = NSTemporaryDirectory();
    NSArray *filePathsToRemove = @[tempPath];
    NSFileManager *fileMgr = [NSFileManager defaultManager];
    for (NSString *filePath in filePathsToRemove) {
        if ([fileMgr fileExistsAtPath:filePath]) {
            NSArray *subFileArray = [fileMgr contentsOfDirectoryAtPath:filePath error:nil];
            for (NSString *subFileName in subFileArray) {
                NSString *subFilePath = [filePath stringByAppendingPathComponent:subFileName];
                if ([fileMgr removeItemAtPath:subFilePath error:nil]) {
                    NSLog(@"removed file path:%@", subFilePath);
                } else {
                    NSLog(@"failed to remove file path:%@", subFilePath);
                }
            }
        } else {
            NSLog(@"failed to remove non-existing file path:%@", filePath);
        }
    }
}
@end
