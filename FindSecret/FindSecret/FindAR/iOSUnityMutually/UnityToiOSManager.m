//
//  UnityToiOSManager.m
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/11.
//
//

#import "UnityToiOSManager.h"



@implementation UnityToiOSManager

//启动成功
+(void)unityStarted:(NSString *)str
{
    
}
//扫描成功/结束
+(void)saomiaoSucess:(NSString *)str
{
    NSLog(@"%@",str);
    
}
//拍照成功 回传照片路径
+(void)takePhotosSucess:(NSString*)path
{
    
}
+(void)recordSuccess:(NSString*)path
{
    
}

+(void)videoUIShow:(NSString *)status
{
    
}
+(void)videoPlayUIState:(NSString *)status
{
    
}
+(void)shareGame:(NSString *)path
{
    
    
}

@end
