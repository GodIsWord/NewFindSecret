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

@interface ViewController () <UIImagePickerControllerDelegate, UINavigationControllerDelegate,UITableViewDelegate,UITableViewDataSource>

@property(nonatomic, strong) NSDictionary *userInfo;
@property (weak,nonatomic) UILabel *addressLabel;

@property(nonatomic,strong) UITableView *tableView;
@property(nonatomic,strong) NSArray *dataSource;


@end

@implementation ViewController



- (IBAction)goRecorder:(id)sender {
    
}

- (IBAction)changedValue:(UISegmentedControl *)sender {
    if (sender.selectedSegmentIndex == 2) {
        
    } else if (sender.selectedSegmentIndex == 1) {
        
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
    
    [self initDataSource];
    [self initTableView];
    
    UILabel *contentLabel = [[UILabel alloc]initWithFrame:CGRectMake(20, 20, ScreenWidth - 40, 0)];
    contentLabel.numberOfLines = 0;
    contentLabel.font = [UIFont systemFontOfSize:16];
    contentLabel.textColor = [UIColor lightGrayColor];
    [self.view addSubview:contentLabel];
    self.addressLabel = contentLabel;
    
}

-(void)initDataSource{
    self.dataSource = @[@"小白🐷要上天了",
                        @"选择位置",
                        @"测试录音",
                        @"东北唐山",
                        @"小白你逗我"];
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 64+80, ScreenWidth, ScreenHeight-80) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
}

- (void)initChooseAddress
{
    XBFindNearAddressVC *vc = [XBFindNearAddressVC new];
    [vc setReturnBlock:^(NSString *city,NSString *name,NSString *address,CGFloat latitude,CGFloat longitude,NSString *phone,UIImage *img){
        if (name) {
            
            self.addressLabel.width = ScreenWidth - 40;
            self.addressLabel.text = [NSString stringWithFormat:@"longitude = %.10f\nlatitude = %.10f\n%@",longitude,latitude,name];
            [self.addressLabel sizeToFit];
            
        }
        
    }];
//    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
//    [self presentViewController:nav animated:YES completion:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

-(void)publish{
    XBPublishController *vc = [XBPublishController new];
    [self.navigationController pushViewController:vc animated:YES];
}

#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataSource.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdent = @"iseng";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdent];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdent];
    }
    
    cell.textLabel.text = self.dataSource[indexPath.row];
    
    return cell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 44;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    switch (indexPath.row) {
            case 0:
            {
                [self publish];
            }
            break;
            case 1:{
                [self initChooseAddress];
            }
            break;
            case 2:{
                XBRecorderTestViewController *controller = [[XBRecorderTestViewController alloc] init];
                [self.navigationController pushViewController:controller animated:YES];
                
            }
            break;
            case 3:{
                [self gotoTextEdit];
            }
            break;
            case 4:{
                [self gotoVideoEdit];
            }
            break;
            
        default:
            break;
    }
}
@end
