//
//  XBUITestViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/23.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBUITestViewController.h"
#import "XBVideoWriter.h"
@interface XBUITestViewController ()

@end

@implementation XBUITestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"%@",NSStringFromCGSize([XBVideoWriter maximumFrameSize]));
    // Do any additional setup after loading the view from its nib.
}
- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if ([self canBecomeFirstResponder]) {    
        [self becomeFirstResponder];
    }
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
