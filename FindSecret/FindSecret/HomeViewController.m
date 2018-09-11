//
//  ViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "HomeViewController.h"

#import "XBMakeViewController.h"
#import "AppDelegate.h"
#import "XBARSubbviewManager.h"
#import "HttpRequestServices.h"

#import "XBPublishController.h"
#import "XBFindNearAddressVC.h"


@interface HomeViewController () <UINavigationControllerDelegate,UITableViewDelegate,UITableViewDataSource,XBMakeViewControllerDelegate>

@property (weak,nonatomic) UILabel *addressLabel;

@property(nonatomic,strong) UITableView *tableView;
@property(nonatomic,strong) NSArray *dataSource;


@end

@implementation HomeViewController


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
    self.dataSource = @[@"启动AR，制作内容并上传",
                        @"AR扫描",
                        @"附近的人",
                        @"附近的内容",
                        @"位置"];
}

-(void)initTableView{
    UITableView *tableVIew = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) style:UITableViewStylePlain];
    tableVIew.delegate = self;
    tableVIew.dataSource = self;
    [self.view addSubview:tableVIew];
    self.tableView = tableVIew;
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
}

- (void)gotoVideoEditWithImagePath:(NSString*)path {
    XBMakeViewController *makeViewController = [[XBMakeViewController alloc] init];
    makeViewController.contentImagePath = path;
    makeViewController.onlyAddContentMode = YES;
    makeViewController.delegate = self;
    [self.navigationController presentViewController:makeViewController animated:NO completion:nil];
    
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
    switch (indexPath.row) {
            case 0:
            {
                [XBARSubbviewManager showTakePhotoComplate:^(NSString *path) {
                    [self gotoVideoEditWithImagePath:path];
                }];
            }
            break;
            case 1:{
                [XBARSubbviewManager startSaomiao];
            }
            break;
            case 2:{
                [XBARSubbviewManager showNearPeopleComplate:nil];
            }
            break;
            case 3:{
                [XBARSubbviewManager showNearPointComplate:nil];
            }
                break;
            case 4:{
                XBPublishController *publish = [[XBPublishController alloc] init];
                [self.navigationController pushViewController:publish animated:YES];
            }
            break;

            
        default:
            break;
    }
}

#pragma mark --- makeViewControllerDelegate
-(void)makeViewControllerFinish:(NSDictionary *)requestJson filePaths:(NSSet*)filePaths backImageFilePath:(NSString *)backFilePath snapshotImag:(UIImage *)snapImage
{
    
    if (requestJson.count<=0 || filePaths.count<=0) {
        return;
    }
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:requestJson options:0 error:&error];
    if (error) {
        NSLog(@"%@",error.localizedDescription);
        return @"";
    }
    NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    NSLog(@"%@",jsonStr);
    NSMutableArray *array = [NSMutableArray array];
    for (NSString *path in filePaths) {
        [array addObject:path];
    }
    XBPublishController *publish = [[XBPublishController alloc] init];
    publish.jsonStr = jsonStr;
    publish.filePaths = array;
    publish.snapshotImage = snapImage;
    [self.navigationController pushViewController:publish animated:YES];
}



@end
