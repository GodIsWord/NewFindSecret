//
//  HttpRequestServices.h
//  OLinPiKe
//
//  Created by zhangyide on 16/6/1.
//  Copyright © 2016年 alta. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HttpRequestServiceOperationModel;

typedef void(^httpRequestSuccessBlock)(NSDictionary *responseObject);
typedef void(^httpRequestSuccessFail)(NSError *error);

//http://www.artachina.com/ar-xunmi/cloud/resources
//static NSString* const XBARHttpHeader = @"http://www.artachina.com/ar-xunmi/cloud/v1.1/fileuploads";
//static NSString* const XBARHttpHeader = @"http://www.artachina.com/ar-xunmi/cloud/file/uploads";
static NSString* const XBARHttpHeader = @"http://www.artachina.com/ar-xunmi/cloud";

static NSString* const ARAPP_KEY = @"fa20f953930f475991fcf4cd09dafc72";

static NSString* const arFileUploads = @"file/uploads";//上传视频 音频 图片
static NSString* const arSMPOIResources = @"resources";//下载识别图的点位信息

@interface HttpRequestServices : NSObject

+ (instancetype)sharedInstance;
+ (void)deleteSharedInstance;
//检测网络是否可用
+ (BOOL)isExistenceNetwork;

/**
 网络队列
 */
- (NSOperationQueue *)getNetworkQueue;


/**
 队列开始请求
 */
- (void)go;
/**
 * 取消请求
 */
- (void)cancel;

#pragma mark -- get 请求
-(void)AFGETRequestHeaderAppanding:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock ;
/**
 *GET 请求
 *@param header 请求头
 *@param parameters 用于拼接字符串比如 key=1234&page＝10之类的数据
 *@param appending 直接拼接在请求头后面的字符串 和 parameters关系 优先拼接appending 如果没有就拼接parameters
 *@param encry 是否加密 0是不加密
 */
-(void)AFGETRequestHeaderUrl:(NSString*)header appending:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock ;

#pragma mark -- post 请求
-(void)AFNPOSTRequestHeaderAppanding:(NSString*)appanding withParameters:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock;

-(void)AFNPOSTRequestHeaderURL:(NSString*)header headerExpand:(NSString*)expanding withParameters:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock;


//上传视频和图片使用
-(void)AFNPOSTRequestUploadAppending:(NSString*)appending withParameters:(NSDictionary*)parameters fileKeyNames:(NSArray*)keyNames filePaths:(NSArray*)arrPath  suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock;

@end


@interface HttpRequestServiceOperationModel : NSObject

@property (nonatomic,strong) NSString *resposeString;//返回数据的string
@property (nonatomic,strong) NSData *responseData;//返回数据的data
@property (nonatomic) NSStringEncoding responseStringEncoding;//返回编码
@property (nonnull,strong) NSDictionary *responseDictionary;//返回数据的字典类型

@end


