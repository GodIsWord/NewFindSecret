//
//  XBARVisitCardSubbViews.m
//  FindSecret
//
//  Created by yide zhang on 2018/9/15.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBARVisitCardSubbViews.h"
#import "UIButton+Block.h"
#import <AudioToolbox/AudioToolbox.h>

@implementation XBARVisitCardSubbViews

+(void)showWithSuperView:(UIView*)superView complate:(void((^)(TakeCardPhotoActionType actionType,NSString* path)))block
{
    if (!superView) {
        return;
    }
    
    //header
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, 44)];
    headerView.backgroundColor = [UIColor whiteColor];
    headerView.tag = 14001;
    headerView.userInteractionEnabled = YES;
    [superView addSubview:headerView];
    
    //返回
    UIButton *btnBack = [UIButton buttonWithType:UIButtonTypeCustom];
    btnBack.frame = CGRectMake(10, 0, 44, 44);
    btnBack.backgroundColor = [UIColor clearColor];
    [btnBack setImage:[UIImage imageNamed:@"nav_icon_scanning_normal"] forState:UIControlStateNormal];
    [headerView addSubview:btnBack];
    [btnBack addActionHandler:^(NSInteger tag) {
        if (block) {
            block(TakeCardPhotoActionTypeCancle,nil);
        }
        [self dismissWithSuperView:superView];
    }];
    
    
    //头像框
    UIImageView *picImageKuang = [[UIImageView alloc] initWithFrame:CGRectMake(20, headerView.xb_bottom+20, ScreenWidth-40, (ScreenWidth-40)*630/590)];
    picImageKuang.image = [UIImage imageNamed:@"iconHeaderPath"];
    picImageKuang.tag = 14002;
    [superView addSubview:picImageKuang];
    
    
    //下部分的view
    UIView *backView = [[UIView alloc] initWithFrame:CGRectMake(0, picImageKuang.xb_bottom+20, ScreenWidth, ScreenHeight-picImageKuang.xb_bottom)];
    backView.backgroundColor = [UIColor whiteColor];
    backView.tag = 14003;
    [superView addSubview:backView];
    backView.userInteractionEnabled = YES;

    UILabel *miaoshuLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 10, ScreenWidth, 20)];
    miaoshuLabel.font = [UIFont systemFontOfSize:12];
    miaoshuLabel.textAlignment = NSTextAlignmentCenter;
    [backView addSubview:miaoshuLabel];
    
    
    
    //拍完照之后的btn
    UIButton *btnOK = [UIButton buttonWithType:UIButtonTypeCustom];
    btnOK.frame = CGRectMake(0, 0, 70, 70);
    [btnOK setImage:[UIImage imageNamed:@"post_icon_check_black"] forState:UIControlStateNormal];
    btnOK.backgroundColor = backView.backgroundColor;
    [backView addSubview:btnOK];
    [btnOK addActionHandler:^(NSInteger tag) {
        if (block) {
            UIImageView *picImage = [superView viewWithTag:14004];
            CGRect  rect = picImageKuang.frame;
            rect = CGRectMake(0, picImageKuang.xb_y-20, ScreenWidth, picImageKuang.xb_height+40);
            NSString *path = [self imageFromImage:picImage.image inRect:rect];
            block(TakeCardPhotoActionTypeOK,path);
        }
        [self dismissWithSuperView:superView];
    }];
    
    
    UIButton *btnCha = [UIButton buttonWithType:UIButtonTypeCustom];
    btnCha.frame = CGRectMake(0, 0, 70, 70);
    btnCha.backgroundColor = backView.backgroundColor;
    [btnCha setImage:[UIImage imageNamed:@"post_icon_retake_gray"] forState:UIControlStateNormal];
    [backView addSubview:btnCha];
    __weak typeof(btnCha) weakBtnCha = btnCha;
    [btnCha addActionHandler:^(NSInteger tag) {
        UIView *btnPictur = [backView viewWithTag:11031];
        btnPictur.hidden = NO;
        
        UIImageView *picImage = [superView viewWithTag:14004];
        picImage.hidden = YES;
        
        UIView *btnCancle = [backView viewWithTag:11002];
        btnCancle.hidden = NO;
        
        weakBtnCha.center = btnPictur.center;
        btnOK.center = btnPictur.center;
    
        weakBtnCha.hidden = YES;
        btnOK.hidden = YES;
    }];
    
    //拍照btn
    UIButton *btnPicture = [UIButton buttonWithType:UIButtonTypeCustom];
    btnPicture.frame = CGRectMake(0, 0, 70, 70);
    btnPicture.center = CGPointMake(ScreenWidth/2, backView.xb_height - 50 - btnPicture.xb_height);
    btnPicture.backgroundColor = [UIColor xb_colorFromString:@"#272727" alpha:0.7];
    btnPicture.layer.cornerRadius = btnPicture.xb_width/2;
    btnPicture.layer.masksToBounds = YES;
    [backView addSubview:btnPicture];
    btnPicture.tag = 11031;
    __weak typeof(btnPicture) weakBtnPicture = btnPicture;
    [btnPicture addActionHandler:^(NSInteger tag) {
        //拍照
        [self playSound];
        if (block) {
            block(TakeCardPhotoActionTypePicture,nil);
        }
        btnCha.xb_centerX -= btnCha.xb_width;
        btnOK.xb_centerX += btnOK.xb_width;
        weakBtnPicture.hidden = YES;
        btnOK.hidden = NO;
        btnCha.hidden = NO;
        
        UIView *btnCancle = [backView viewWithTag:11002];
        btnCancle.hidden = YES;
    }];
    
    btnOK.center = btnPicture.center;
    btnCha.center = btnPicture.center;
    
    UIView *btnSubView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 50, 50)];
    btnSubView.backgroundColor = [UIColor xb_colorFromString:@"#272727"];
    btnSubView.layer.cornerRadius = btnSubView.xb_width/2;
    btnSubView.userInteractionEnabled = NO;
    btnSubView.layer.masksToBounds = YES;
    [btnPicture addSubview:btnSubView];
    btnSubView.center = CGPointMake(btnPicture.xb_width/2, btnPicture.xb_height/2);
    
    //取消按钮
    UIButton *btnCancle = [UIButton buttonWithType:UIButtonTypeCustom];
    btnCancle.frame = CGRectMake(68, 0, 44, 44);
    btnCancle.xb_centerY = btnPicture.xb_centerY;
    btnCancle.backgroundColor = [UIColor clearColor];
    [btnCancle setImage:[UIImage imageNamed:@"post_icon_xiatui_black"] forState:UIControlStateNormal];
    [btnCancle setImageEdgeInsets:UIEdgeInsetsMake(11, 11, 11, 11)];
    [backView addSubview:btnCancle];
    btnCancle.tag = 11002;
    [btnCancle addActionHandler:^(NSInteger tag) {
        if (block) {
            block(TakeCardPhotoActionTypeCancle,nil);
        }
        [self dismissWithSuperView:superView];
    }];
    
    
}

+(void)setImageWithSuperView:(UIView*)superView path:(NSString *)path
{
    UIImageView *picImage = [superView viewWithTag:14004];
    if (!picImage) {
        picImage = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, ScreenHeight)];
        picImage.tag = 14004;
        [superView addSubview:picImage];
        [superView sendSubviewToBack:picImage];
    }
    UIImage *image = [UIImage imageWithContentsOfFile:path];
    picImage.image = image;
    picImage.hidden = NO;
    
}

+(void)dismissWithSuperView:(UIView*)superView
{
    for (int i=14001; i<=14004; i++) {
        UIView *btnPicture = [superView viewWithTag:i];
        if (btnPicture) {
            [btnPicture removeFromSuperview];
            btnPicture = nil;
        }
    }
    
}

+(void)playSound
{
    AudioServicesPlaySystemSound(1108);
}

+(NSString *)imageFromImage:(UIImage *)image inRect:(CGRect)rect{
    
    CGRect newRect = rect;
    NSLog(@"%f",image.scale);
    CGFloat scaleH = image.size.width/ScreenWidth;
    CGFloat scaleV = image.size.height/ScreenHeight;
    CGFloat width = rect.size.width * scaleH;
    CGFloat height = rect.size.height * scaleV;
    newRect = CGRectMake(rect.origin.x * scaleH , rect.origin.y * scaleV, width, height);
    
    CGImageRef sourceImageRef = [image CGImage];
    
    CGImageRef newImageRef = CGImageCreateWithImageInRect(sourceImageRef, newRect);
    
    UIImage *newImage = [UIImage imageWithCGImage:newImageRef];
    
    NSString *paths = NSTemporaryDirectory();
    
    NSString *filePath = [paths stringByAppendingPathComponent:@"cutPicture.png"];
    
    BOOL result =[UIImagePNGRepresentation(newImage) writeToFile:filePath atomically:YES];
    if (result == YES) {
        NSLog(@"保存成功");
    }
    
//    free(newImageRef);
    return filePath;
}


@end
