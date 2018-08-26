//
//  XBGifImageView.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBGifImageView.h"

@interface XBGifImageView()

@property(nonatomic,strong) UIWebView *webView;

@end

@implementation XBGifImageView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        UIWebView *webView = [[UIWebView alloc] initWithFrame:self.bounds];
        webView.userInteractionEnabled = NO;
        webView.backgroundColor = [UIColor blackColor];
        webView.opaque = NO;
        [self addSubview:webView];
        _webView = webView;
    }
    return self;
}
-(void)loadGIFWithPath:(NSString*)path
{
    if (path.length<=0) {
        return;
    }
    
    NSData *gif = [NSData dataWithContentsOfFile:path];
    [self.webView loadData:gif MIMEType:@"image/gif" textEncodingName:@"UTF-8" baseURL:nil];
}

@end
