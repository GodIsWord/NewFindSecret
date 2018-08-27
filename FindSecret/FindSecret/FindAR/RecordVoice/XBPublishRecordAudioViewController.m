
//
//  XBPublishRecordAudioViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/27.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishRecordAudioViewController.h"
#import "XBPublishRecordAudioView.h"

@interface XBPublishRecordAudioViewController ()

@end

@implementation XBPublishRecordAudioViewController

-(void)loadView{
    XBPublishRecordAudioView *view = [[XBPublishRecordAudioView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.view = view;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [(XBPublishRecordAudioView*)self.view reloadSubbView];
    [(XBPublishRecordAudioView*)self.view setViewController:self];
}

@end
