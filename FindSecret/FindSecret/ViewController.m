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
#import "XBMakeViewController.h"
#import "XBFindNearAddressVC.h"
#import "XBPublishController.h"
@interface ViewController () <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property(nonatomic, strong) NSDictionary *userInfo;
@property (weak,nonatomic) UILabel *addressLabel;


@end

@implementation ViewController



- (IBAction)goRecorder:(id)sender {
    XBRecorderTestViewController *controller = [[XBRecorderTestViewController alloc] init];
    [self.navigationController pushViewController:controller animated:YES];
}

- (IBAction)changedValue:(UISegmentedControl *)sender {
    if (sender.selectedSegmentIndex == 2) {
        [self gotoVideoEdit];
    } else if (sender.selectedSegmentIndex == 1) {
        [self gotoTextEdit];
    }
}

- (void)gotoVideoEdit {

    XBMakeViewController *makeViewController = [[XBMakeViewController alloc] init];
    NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:@"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1533143165406&di=9f6a1195ec0d8dcf09f46e07cf71beb8&imgtype=jpg&src=http%3A%2F%2Fimg1.imgtn.bdimg.com%2Fit%2Fu%3D3324201526%2C3766957536%26fm%3D214%26gp%3D0.jpg"]];
    makeViewController.contentImage = [UIImage imageWithData:data];
    UINavigationController *navigationController1 = [[UINavigationController alloc] initWithRootViewController:makeViewController];
    [self presentViewController:navigationController1 animated:YES completion:nil];
    return;
    UIImagePickerController *pick = [[UIImagePickerController alloc] init];
    pick.mediaTypes = @[(NSString *) kUTTypeImage, (NSString *) kUTTypeMovie];
    pick.videoQuality = UIImagePickerControllerQualityTypeMedium;
    pick.delegate = self;
    [self presentViewController:pick animated:YES completion:nil];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [picker dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> *)info {
    self.userInfo = info;
    [picker dismissViewControllerAnimated:YES completion:^{
        XBVideoEditController *videoEditController = [[XBVideoEditController alloc] init];
        videoEditController.videoUrl = info[UIImagePickerControllerMediaURL];
        [self presentViewController:videoEditController animated:YES completion:nil];
    }];

}
- (void)gotoTextEdit {
    XBTextEditController *textXB = [[XBTextEditController alloc] init];
    textXB.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    textXB.text = @"柱子是🐷";
    textXB.textColor = [UIColor redColor];
    textXB.textStyle = @"";
    [self presentViewController:textXB animated:NO completion:nil];

}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIFont *titleFont = [UIFont systemFontOfSize:16];
    
    UIButton *rightBarBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    rightBarBtn.backgroundColor = GREENColor;
    rightBarBtn.frame = CGRectMake((ScreenWidth - 100)/2, 100,100, 50);
    [rightBarBtn setTitleColor:[UIColor blackColor] forState:0];
    [rightBarBtn setTitle:@"选择位置" forState:0];
    rightBarBtn.titleLabel.font = titleFont;
    [rightBarBtn addTarget:self action:@selector(initChooseAddress) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:rightBarBtn];
    
    UILabel *contentLabel = [[UILabel alloc]initWithFrame:CGRectMake(20, rightBarBtn.bottom+20, ScreenWidth - 40, 0)];
    contentLabel.numberOfLines = 0;
    contentLabel.font = [UIFont systemFontOfSize:16];
    contentLabel.textColor = [UIColor lightGrayColor];
    [self.view addSubview:contentLabel];
    self.addressLabel = contentLabel;
    
    
    
    UIButton *publishBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    publishBtn.backgroundColor = GREENColor;
    publishBtn.frame = CGRectMake((ScreenWidth - 100)/2, ScreenHeight-200,100, 50);
    [publishBtn setTitleColor:[UIColor blackColor] forState:0];
    [publishBtn setTitle:@"我要上天了" forState:0];
    publishBtn.titleLabel.font = titleFont;
    [publishBtn addTarget:self action:@selector(publish) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:publishBtn];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)initChooseAddress
{
    XBFindNearAddressVC *vc = [XBFindNearAddressVC new];
    [vc setReturnBlock:^(NSString *city,NSString *name,NSString *address,CGFloat latitude,CGFloat longitude,NSString *phone,UIImage *img){
        if (name) {
            
            _addressLabel.width = ScreenWidth - 40;
            _addressLabel.text = [NSString stringWithFormat:@"longitude = %.10f\nlatitude = %.10f\n%@",longitude,latitude,name];
            [_addressLabel sizeToFit];
            
        }
        
    }];
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
    [self presentViewController:nav animated:YES completion:nil];
}

-(void)publish{
    XBPublishController *vc = [XBPublishController new];
//    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
//    [self presentViewController:nav animated:YES completion:nil];
    [self.navigationController pushViewController:vc animated:YES];
}
@end
