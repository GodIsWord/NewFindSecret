//
//  ViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "HomeViewController.h"
#import "XBVideoEditController.h"
#import <MobileCoreServices/UTCoreTypes.h>
#import "XBVideoEditController.h"
#import "XBTextEditController.h"
#import "XBTextEditController.h"
#import "XBMakeViewController.h"
#import "XBFindNearAddressVC.h"
#import "XBPublishController.h"
#import "XBUITestViewController.h"
#import "XBPublishRecordAudioViewController.h"

#import "AppDelegate.h"
#import "XBUnitySubbviewManager.h"

@interface HomeViewController () <UIImagePickerControllerDelegate, UINavigationControllerDelegate,UITableViewDelegate,UITableViewDataSource>

@property(nonatomic, strong) NSDictionary *userInfo;
@property (weak,nonatomic) UILabel *addressLabel;

@property(nonatomic,strong) UITableView *tableView;
@property(nonatomic,strong) NSArray *dataSource;


@end

@implementation HomeViewController

- (void)gotoVideoEdit {
    XBMakeViewController *makeViewController = [[XBMakeViewController alloc] init];
    UINavigationController *navigationController1 = [[UINavigationController alloc] initWithRootViewController:makeViewController];
    [self presentViewController:navigationController1 animated:YES completion:nil];
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
    self.view.backgroundColor = [UIColor whiteColor];
    
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
    self.dataSource = @[@"发布",
                        @"选择位置",
                        @"文字",
                        @"创作AR内容",
                        @"UI测试",
                        @"启动AR",
                        @"AR扫描"];
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) style:UITableViewStylePlain];
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

            self.addressLabel.xb_width = ScreenWidth - 40;
            self.addressLabel.text = [NSString stringWithFormat:@"longitude = %.10f\nlatitude = %.10f\n%@",longitude,latitude,name];
            [self.addressLabel sizeToFit];

        }

    }];
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
    [self presentViewController:nav animated:YES completion:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

-(void)publish{
    XBPublishController *vc = [XBPublishController new];
    [self.navigationController pushViewController:vc animated:NO];
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
                
                [self gotoTextEdit];
                
                
            }
            break;
            case 3:{
                [self gotoVideoEdit];
            }
            break;
            case 4:{
                XBUITestViewController *vc = [[XBUITestViewController alloc] initWithNibName:@"XBUITestViewController" bundle:nil];
                [self.navigationController pushViewController:vc animated:YES];
            }
                break;
            case 5:{
                [XBUnitySubbviewManager showTakePhotoComplate:^(NSString *path) {
                    [self publish];
                }];
                
            }
            break;
        case 6:{
            [XBUnitySubbviewManager startSaomiao];
        }
            break;

            
        default:
            break;
    }
}
@end
