//
//  HttpRequestServices.h
//  OLinPiKe
//
//  Created by zhangyide on 16/6/1.
//  Copyright © 2016年 alta. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HttpRequestServiceOperationModel;

typedef void(^httpRequestSuccessBlock)(HttpRequestServiceOperationModel *operationModel, id responseObject);
typedef void(^httpRequestSuccessFail)(HttpRequestServiceOperationModel *operationModel, NSError *error);

//static NSString* const XBARHttpHeader = @"http://www.artachina.com/ar-xunmi/cloud/v1.1/fileuploads";
static NSString* const XBARHttpHeader = @"http://www.artachina.com/ar-xunmi/cloud/file/uploads";

static NSString* const ARAPP_KEY = @"fa20f953930f475991fcf4cd09dafc72";

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

/**
 *GET 请求
 */
-(void)AFGETRequestForTarget:(id)target withParameters:(NSDictionary *)parameters appending:(NSString*)appending suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock ;
/**
 *GET 请求
  *@param target 请求目标暂时没用
 *@param header 请求头
 *@param parameters 用于拼接字符串比如 key=1234&page＝10之类的数据
 *@param appending 直接拼接在请求头后面的字符串 和 parameters关系 优先拼接appending 如果没有就拼接parameters
 *@param encry 是否加密 0是不加密
 */
-(void)AFGETRequestForTarget:(id)target headerUrl:(NSString*)header appending:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock ;

/**
 *post 请求
 */
-(void)AFNPOSTRequestARHeaderWithParameter:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock ;

-(void)AFNPOSTRequestHeaderURL:(NSString*)header headerExpand:(NSDictionary*)expanding withParam:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock;


@end


@interface HttpRequestServiceOperationModel : NSObject

@property (nonatomic,strong) NSString *resposeString;//返回数据的string
@property (nonatomic,strong) NSData *responseData;//返回数据的data
@property (nonatomic) NSStringEncoding responseStringEncoding;//返回编码
@property (nonnull,strong) NSDictionary *responseDictionary;//返回数据的字典类型

@end


