//
//  XBGifImageView.h
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBGifImageView : UIView

/**
 根据文件夹路径加载gif图片组

 @param path gif图片组路径
 */
- (void)loadGIFWithPath:(NSString *)path;

- (void)startAnimation;

- (void)stopAnimation;

@end
