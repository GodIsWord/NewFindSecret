//
//  iOSUnityMutually.m
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/8.
//
//

#import "UnityToiOSManager.h"
#import "XBUnitySubbviewManager.h"

void u3dStarted(void)
{
    
}
//unity启动结束
void unityStarted(void)
{
    
}
// 显示Toast:
void showToastMessage(void)
{
    
}
//AR云数据获取成功
void arCloudSuccess(char *metaID)
{
    
}
//AR扫描成功
void arResultShowSuccess(char *mesg)
{
    [XBUnitySubbviewManager saomiaoSuccess:[NSString stringWithUTF8String:mesg]];
}
//展示AR热点数据：
void arResultShow(char *result)
{
    
}
//拍照成功:
void takePhotosSucess(char *path)
{
    [XBUnitySubbviewManager takePictureSuccess:[NSString stringWithUTF8String:path]];
}











