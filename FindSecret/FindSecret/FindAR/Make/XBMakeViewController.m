//
//  XBMakeViewController.m
//  FindSecret
//
//  Created by pillar on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBMakeViewController.h"
#import "XBMacroDefinition.h"
#import "XBMakeToolView.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import "XBVideoEditController.h"
#import "XBTextEditController.h"
#import "XBRecorderTestViewController.h"
@interface XBMakeViewController () <XBMakeToolViewDelegate, UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property (nonatomic, strong) UIToolbar *confirmToolbar;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) XBMakeToolView *toolView;
@end

@implementation XBMakeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.imageView = [[UIImageView alloc] initWithFrame:self.view.bounds];
    self.imageView.image = self.contentImage;
    self.imageView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.imageView];


    CGRect frame;
    frame.origin.x = 0;
    frame.origin.y = TOP_MARGIN;
    frame.size.width = CGRectGetWidth(self.view.bounds);
    frame.size.height = 44;
    self.confirmToolbar = [[UIToolbar alloc] initWithFrame:frame];
    UIBarButtonItem *cancelItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(goBack)];
    [self.confirmToolbar setItems:@[cancelItem] animated:NO];
    [self.confirmToolbar setBackgroundImage:[UIImage new] forToolbarPosition:UIBarPositionAny barMetrics:UIBarMetricsDefault];
    [self.view addSubview:self.confirmToolbar];
    
    
    CGFloat toolViewWidth = 100;
    CGFloat toolViewHeight = 30;
    self.toolView = [XBMakeToolView toolView];
    self.toolView.delegate = self;
    self.toolView.frame = CGRectMake((CGRectGetWidth(self.view.frame) - toolViewWidth)/2, CGRectGetHeight(self.view.frame) - BOTTOM_MARGIN - 20 - toolViewHeight, toolViewWidth, toolViewHeight);
    [self.view addSubview:self.toolView];
    
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}
- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController setNavigationBarHidden:NO animated:YES];
}


- (void)addVideo {
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:nil preferredStyle:UIAlertControllerStyleActionSheet];
    UIAlertAction *camera = [UIAlertAction actionWithTitle:@"拍摄" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
        UIImagePickerController *pick = [[UIImagePickerController alloc] init];
        pick.mediaTypes = @[(NSString *) kUTTypeMovie];
        pick.videoQuality = UIImagePickerControllerQualityTypeMedium;
        pick.sourceType = UIImagePickerControllerSourceTypeCamera;
        pick.delegate = self;
        [self presentViewController:pick animated:YES completion:nil];
        
        
    }];
    UIAlertAction *album = [UIAlertAction actionWithTitle:@"相册" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        UIImagePickerController *pick = [[UIImagePickerController alloc] init];
        pick.mediaTypes = @[(NSString *) kUTTypeMovie];
        pick.videoQuality = UIImagePickerControllerQualityTypeMedium;
        pick.delegate = self;
        [self presentViewController:pick animated:YES completion:nil];

    }];
    
    UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    
    [alertController addAction:camera];
    [alertController addAction:album];
    [alertController addAction:cancel];
    
    [self presentViewController:alertController animated:YES completion:nil];
    
}
- (void)addRecordVoice {
    XBRecorderTestViewController *controller = [[XBRecorderTestViewController alloc] init];
    [self.navigationController pushViewController:controller animated:YES];
}
- (void)addText{
    XBTextEditController *textXB = [[XBTextEditController alloc] init];
    textXB.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    textXB.text = @"小白是🐷";
    textXB.textColor = [UIColor redColor];
    textXB.textStyle = @"";
    [self presentViewController:textXB animated:NO completion:nil];
}

- (void)goBack{
    if (self.navigationController.topViewController == self && self.navigationController.viewControllers.firstObject != self) {
        [self.navigationController popViewControllerAnimated:YES];
    } else {
        UIViewController *vc = self.navigationController ?: self;
        if (vc.presentingViewController) {
            [vc dismissViewControllerAnimated:YES completion:nil];
        }
    }
}


- (BOOL)prefersStatusBarHidden{
    return YES;
}
- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation{
    return UIStatusBarAnimationNone;
}

#pragma mark - XBMakeToolViewDelegate

- (void)makeToolView:(XBMakeToolView *)makeToolView didClickItemAtIndex:(NSInteger)index{
    switch (index) {
        case 0:
            [self addText];
            break;
        case 1:
            [self addRecordVoice];
            break;
        case 2:
            [self addVideo];
            break;
            
        default:
            break;
    }
}




#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> *)info {
    [picker dismissViewControllerAnimated:YES completion:^{
        
        // TODO:这里应该还差一个流程
        XBVideoEditController *videoEditController = [[XBVideoEditController alloc] init];
        videoEditController.videoUrl = info[UIImagePickerControllerMediaURL];
        [self presentViewController:videoEditController animated:YES completion:nil];
    }];
    
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
