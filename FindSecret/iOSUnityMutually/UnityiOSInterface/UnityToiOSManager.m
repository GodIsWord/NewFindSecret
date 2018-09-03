//
//  iOSUnityMutually.m
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/8.
//
//

#import "UnityToiOSManager.h"
#import "XBUnitySubbviewManager.h"

#import "iOSToUnityManager.h"

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
    NSLog(@"metaID %s",metaID);
//    NSDictionary *dic = @{@"arHotData":@[@{@"type":@"3",@"color":@"#1B9AFF",@"font":@"xingkai",@"text":@"这是一本书",@"x":@0.7935188,@"y":@0.11574558,@"id":@709,@"height":@0.026068822,@"width":@0.19444445},@{@"duration":@3821,@"filePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/71aa7609b08043888a06dd7cb9bb2c05_20180903.mp3",@"type":@"4",@"x":@0.18569444,@"y":@0.45724708,@"id":@231,@"height":@0.06256517,@"width":@0.35740742},@{@"duration":@8898,@"filePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/ffa0945d36414fb997605f6b986e47e9_20180903.mp4",@"thumbFilePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/0e555cc41ca54d658a5480f0222d07cb_20180903.jpg",@"type":@"1",@"x":@0.87499994,@"y":@0.65224195,@"id":@1355,@"height":@0.2346194,@"width":@0.23425926}],@"markerImageData":@{@"height":@1066,@"width":@600,@"markerImagePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/46df3e76a55d414a922f0fee22082f6e_20180903.jpg"}};
    NSDictionary *dic = @{@"arHotData":@[@{@"type":@"3",@"color":@"#1B9AFF",@"font":@"xingkai",@"text":@"这是一本书",@"x":@0.7935188,@"y":@0.11574558,@"id":@709,@"height":@0.026068822,@"width":@0.19444445}],@"markerImageData":@{@"height":@1066,@"width":@600,@"markerImagePath":@"http://www.artachina.com/ar-xunmi/assets/imgs/201809/46df3e76a55d414a922f0fee22082f6e_20180903.jpg"}};
//    NSData *data = [NSJSONSerialization dataWithJSONObject:dic options:0 error:nil];
//    NSString *str = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
    NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    jsonStr = [jsonStr stringByReplacingOccurrencesOfString:@" " withString:@""];
    [iOSToUnityManager arResultShow:jsonStr];
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











