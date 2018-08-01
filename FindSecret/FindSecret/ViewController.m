//
//  ViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "ViewController.h"
#import "XBVideoEditController.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import "XBVideoEditController.h"
#import "XBTextEditController.h"
#import "XBTextEditController.h"
#import "XBRecorderTestViewController.h"

@interface ViewController () <UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property (nonatomic, strong) NSDictionary *userInfo;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}

- (IBAction)goRecorder:(id)sender {
        XBRecorderTestViewController *controller = [[XBRecorderTestViewController alloc] init];
//        [self presentViewController:controller animated:YES completion:nil];
    [self.navigationController pushViewController:controller animated:YES];
}

- (IBAction)changedValue:(UISegmentedControl *)sender {
    if (sender.selectedSegmentIndex == 2) {
        [self gotoVideoEdit];
    }else if (sender.selectedSegmentIndex == 1) {
        [self gotoTextEdit];
    }
}
- (void)gotoVideoEdit{
    UIImagePickerController *pick = [[UIImagePickerController alloc] init];
    pick.mediaTypes = @[(NSString *)kUTTypeImage, (NSString *)kUTTypeMovie];
    pick.videoQuality = UIImagePickerControllerQualityTypeMedium;
    pick.delegate = self;
    [self presentViewController:pick animated:YES completion:nil];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    NSLog(@"Cancel");
    [picker dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *,id> *)info{
    self.userInfo = info;
    [picker dismissViewControllerAnimated:YES completion:^{
        XBVideoEditController *videoEditController =[[XBVideoEditController alloc] init];
        videoEditController.videoUrl = info[UIImagePickerControllerMediaURL];
        [self presentViewController:videoEditController animated:YES completion:nil];
    }];
    
}
- (void)gotoTextEdit{
    XBTextEditController *textXB = [[XBTextEditController alloc] init];
    
    textXB.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    textXB.text = @"柱子是🐷";
    textXB.textColor = [UIColor redColor];
    textXB.textStyle = @"";
    
    [self presentViewController:textXB animated:NO completion:nil];
    
}


@end
