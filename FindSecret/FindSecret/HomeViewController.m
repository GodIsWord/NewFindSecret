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
#import "HttpRequestServices.h"

@interface HomeViewController () <UIImagePickerControllerDelegate, UINavigationControllerDelegate,UITableViewDelegate,UITableViewDataSource>

@property(nonatomic, strong) NSDictionary *userInfo;
@property (weak,nonatomic) UILabel *addressLabel;

@property(nonatomic,strong) UITableView *tableView;
@property(nonatomic,strong) NSArray *dataSource;


@end

@implementation HomeViewController


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
                        @"文字",
                        @"创作AR内容",
                        @"UI测试",
                        @"启动AR",
                        @"AR扫描",
                        @"上传接口测试"];
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
}


-(void)publish{
    XBPublishController *vc = [XBPublishController new];
    [self.navigationController pushViewController:vc animated:NO];
}
- (void)gotoTextEdit {
    XBTextEditController *textXB = [[XBTextEditController alloc] init];
    textXB.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    [self presentViewController:textXB animated:NO completion:nil];
    
}
- (void)gotoVideoEditWithImagePath:(NSString*)path {
    XBMakeViewController *makeViewController = [[XBMakeViewController alloc] init];
    makeViewController.contentImage = [UIImage imageWithContentsOfFile:path];
    makeViewController.onlyAddContentMode = YES;
    UINavigationController *navigationController1 = [[UINavigationController alloc] initWithRootViewController:makeViewController];
    [self presentViewController:navigationController1 animated:NO completion:nil];
    
}
-(void)gotoMakeImage
{
    XBMakeViewController *makeViewController = [[XBMakeViewController alloc] init];
    NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:@"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1535800125540&di=731771782a91456280d10eb3d363852e&imgtype=jpg&src=http%3A%2F%2Fimg3.imgtn.bdimg.com%2Fit%2Fu%3D2212426948%2C2448091984%26fm%3D214%26gp%3D0.jpg"]];
    makeViewController.contentImage = [UIImage imageWithData:data];
    makeViewController.onlyAddContentMode = YES;
    UINavigationController *navigationController1 = [[UINavigationController alloc] initWithRootViewController:makeViewController];
    [self presentViewController:navigationController1 animated:YES completion:nil];
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
    static NSString *imagePath = nil;
    switch (indexPath.row) {
            case 0:
            {
                [self publish];
            }
            break;
            case 1:{
                
                [self gotoTextEdit];
                
                
            }
            break;
            case 2:{
                [self gotoMakeImage];
            }
            break;
            case 3:{
                XBUITestViewController *vc = [[XBUITestViewController alloc] initWithNibName:@"XBUITestViewController" bundle:nil];
                [self.navigationController pushViewController:vc animated:YES];
            }
                break;
            case 4:{
                [XBUnitySubbviewManager showTakePhotoComplate:^(NSString *path) {
                    [self gotoVideoEditWithImagePath:path];
                    imagePath = path;
                }];
                
                
            }
            break;
        case 5:{
            [XBUnitySubbviewManager startSaomiao];
        }
            break;
        case 6:{
            
//            NSDictionary *dic = @{@"arHotData":@[@{@"color":@"#FF0000FF",@"font":@"songti",@"text":@"回宿舍手机",@"height":@0.025675675,@"type":@"3",@"width":@0.2777778,@"x":@0.26904297,@"y":@0.4155273},
//                                                 @{@"duration":@4341,@"filePath":@"/storage/emulated/0/ARXunMi/mediaedit/19432719-4ba9-4dcc-940e-81486a2ce979.mp3",@"height":@0.054054055,@"type":@"4",@"width":@0.26759258,@"x":@0.19552006,@"y":@0.568572},
//                                                 @{@"duration":@3072,@"filePath":@"/storage/emulated/0/ARXunMi/mediaedit/video_1534399169159.mp4",@"thumbFilePath":@"/storage/emulated/0/ARXunMi/mediaedit/6d529a49-0e49-4335-a49b-f1f634241591.jpg",@"height":@0.2027027,@"type":@"1",@"width":@0.23425926,@"x":@0.5373537,@"y":@0.32226562}],
//                                  @"markerImageData":@{@"height":@2220,@"markerImagePath":@"/storage/emulated/0/ARXunMi/mediaedit/a05a3c4d-06db-4887-a406-c6262ae7a333.jpg",@"width":@1080}};
            if (imagePath.length>0) {
                NSDictionary *dicStr = @{@"arHotData":@[@{@"color":@"#FF00FF",@"font":@"songti",@"text":@"回宿舍手机",@"height":@0.025675675,@"type":@"3",@"width":@0.2777778,@"x":@0.26904297,@"y":@0.4155273}
                                                     ],
                                      @"markerImageData":@{@"height":@1920,@"markerImagePath":imagePath,@"width":@1080}};
                NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dicStr options:NSJSONWritingPrettyPrinted error:nil];
                NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
                jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@"\n" withString:@""];
                jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@" " withString:@""];
                NSDictionary *dic = @{@"arData":jsonStr};
               
            }
            
            //此处应该先请求甲方权限接口 再进行ar数据请求，测试阶段 直接进行ar数据请求
            [[HttpRequestServices sharedInstance] AFGETRequestHeaderAppanding:arSMPOIResources withParameters:@{@"resId":@"145"} encry:0 suceesBlock:^(NSDictionary *responseObject) {
                
            } failedBlock:^(NSError *error) {
                
            }];
        }
            break;

            
        default:
            break;
    }
}
@end
