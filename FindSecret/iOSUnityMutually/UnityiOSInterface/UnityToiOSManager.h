//
//  UnityToiOSManager.h
//  Unity-iPhone
//
//  Created by 张义德 on 16/7/11.
//
//

#import <Foundation/Foundation.h>



@interface UnityToiOSManager : NSObject
+(void)unityStarted:(NSString *)str;
+(void)saomiaoSucess:(NSString *)str;
+(void)takePhotosSucess:(NSString*)path;
+(void)recordSuccess:(NSString*)path;
+(void)videoUIShow:(NSString *)status;
+(void)videoPlayUIState:(NSString*)status;
+(void)shareGame:(NSString *)path;//分享游戏图片的接口
@end
