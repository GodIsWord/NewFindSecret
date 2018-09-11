//
// Created by 9f on 2018/9/1.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface XBAVTools : NSObject
+ (void)stopAllPlayer;
+ (CGFloat)mediaDurationWithPath:(NSString *)path;
+ (BOOL)isPlayingWithPath:(NSString *)path;
+ (void)playAudioWithFilePath:(NSString *)path independent:(BOOL)independent completedHandle:(void (^)(NSError *error))completedHandle;
+ (void)stopPlayingWithPath:(NSString *)path;
+ (void)playVideoWithFilePath:(NSString *)path inView:(UIView *)view independent:(BOOL)independent completedHandle:(void (^)(NSError *error))completedHandle;
@end
