//
//  XBARToiOSManager.h
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/11.
//
//

#ifdef __cplusplus
extern "C" {
#endif
    void u3dStarted(void);
    void unityStarted(void);//unity启动结束
    void showToastMessage(void);// 显示Toast:
    void arCloudSuccess(char *metaID);//AR云数据获取成功
    void arResultShowSuccess(char *mesg);//AR扫描成功
    void arResultShow(char *result);//展示AR热点数据：
    void takePhotosSucess(char *path);//拍照成功:
#ifdef __cplusplus
}
#endif
