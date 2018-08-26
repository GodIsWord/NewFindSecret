//
//  XBRecordTestViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordTestViewController.h"
#import "XBPublishRecordAudioView.h"

@interface XBRecordTestViewController ()

@end

@implementation XBRecordTestViewController

-(void)loadView{
    XBPublishRecordAudioView *view = [[XBPublishRecordAudioView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.view = view;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [(XBPublishRecordAudioView*)self.view reloadSubbView];
}



@end
