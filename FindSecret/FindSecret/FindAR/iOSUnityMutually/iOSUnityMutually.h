//
//  iOSUnityMutually.h
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/8.
//
//


#ifdef __cplusplus
extern "C" {
#endif
    void u3dStarted(void);//unity启动结束
    void showToast(char *str);// 显示Toast:
    void arCloudSuccess(char *metaID);//AR云数据获取成功
    void arResultShowSuccess(char *mesg);//AR扫描成功
    void arResultShow(char *result);//展示AR热点数据：
    void takePhotosSucess(char *status);//拍照成功:
#ifdef __cplusplus
}
#endif
