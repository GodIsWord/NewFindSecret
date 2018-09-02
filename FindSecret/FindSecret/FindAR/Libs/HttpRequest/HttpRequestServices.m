//
//  HttpRequestServices.m
//  OLinPiKe
//
//  Created by  on 16/6/1.
//  Copyright © 2016年 alta. All rights reserved.
//

#import "HttpRequestServices.h"
#import "AFHTTPSessionManager.h"

#import "AFNetworkReachabilityManager.h"

#import "NSString+XBMD5.h"

@interface HttpRequestServices ()
@property (strong, nonatomic)AFHTTPSessionManager *afnManager;
@end

static HttpRequestServices *service ;
@implementation HttpRequestServices
+(HttpRequestServices*)sharedInstance
{
    @synchronized(self) {
        if (!service) {
            service = [[HttpRequestServices alloc] init];
            service.afnManager = [AFHTTPSessionManager manager];
            service.afnManager.securityPolicy.allowInvalidCertificates = YES;
            service.afnManager.requestSerializer.timeoutInterval = 2;
            service.afnManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"text/plain",@"application/json", @"text/json", @"text/javascript",@"text/css", @"application/javascript",@"application/json", @"application/x-www-form-urlencoded", nil];
        }
        return service;
    }
}
+ (void)deleteSharedInstance {
    if (service) {
        service = nil;
    }
}
/**
 网络队列
 */
- (NSOperationQueue *)getNetworkQueue
{
    return self.afnManager.operationQueue;
}

/**
 * 取消请求
 */
-(void)cancel
{
    [self.afnManager.operationQueue cancelAllOperations];
}
/**
 队列开始请求
 */
- (void)go
{
    [self.afnManager.operationQueue setSuspended:NO];
}

//检测网络是否可用
+ (BOOL)isExistenceNetwork
{
    BOOL isExistenceNetwork = FALSE;

    switch ([AFNetworkReachabilityManager sharedManager].networkReachabilityStatus) {
        case AFNetworkReachabilityStatusNotReachable:
            isExistenceNetwork=FALSE;
            break;
        default:
            isExistenceNetwork=TRUE;
            break;
    }
    return isExistenceNetwork;
}
#pragma mark - get请求
-(void)AFGETRequestForTarget:(id)target withParameters:(NSDictionary *)parameters appending:(NSString*)appending suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    
    [self AFGETRequestForTarget:target headerUrl:XBARHttpHeader appending:appending withParameters:parameters encry:0 suceesBlock:successBlock failedBlock:failedBlock];
    
}
-(void)AFGETRequestForTarget:(id)target headerUrl:(NSString*)header appending:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    NSString * url = header;
    if (appending.length>0) {
        url = [url stringByAppendingString:appending];
    }
    
    if (parameters.count>0) {
        NSString *strParam = [self requestParamWithParamers:parameters encry:encry];
        url = [url stringByAppendingString:strParam];
    }
    
    NSLog(@"url:%@",url);
    [self.afnManager GET:url parameters:parameters progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        HttpRequestServiceOperationModel *model = [[HttpRequestServiceOperationModel alloc] init];
        model.responseDictionary = responseObject;
        successBlock(model,responseObject);
        NSLog(@"responsObject:%@",responseObject);
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"%@",error);
        failedBlock(nil,error);
    }];
    
}
#pragma mark - post请求
-(void)AFNPOSTRequestARHeaderWithParameter:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    //添加请求头
    NSString *time= [NSString stringWithFormat:@"%.0f",[[NSDate dateWithTimeIntervalSinceNow:0] timeIntervalSince1970]];
    NSString *strMD5 = [[NSString stringWithFormat:@"%@%@",ARAPP_KEY,time] MD5ForLower32Bate];
//    [self.afnManager.requestSerializer setValue:strMD5 forHTTPHeaderField:@"signature"];
//    [self.afnManager.requestSerializer setValue:time forHTTPHeaderField:@"timestamp"];
    
    [self AFNPOSTRequestHeaderURL:XBARHttpHeader headerExpand:@{@"signature":strMD5,@"timestamp":time} withParam:parameters suceesBlock:successBlock failedBlock:failedBlock];
    
}
-(void)AFNPOSTRequestHeaderURL:(NSString*)header headerExpand:(NSDictionary*)expanding withParam:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    self.afnManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"text/plain",@"application/json", @"text/json", @"text/javascript",@"text/css", @"application/javascript",@"application/json", @"application/x-www-form-urlencoded", nil];
    
    self.afnManager.requestSerializer = [AFHTTPRequestSerializer serializer];
    self.afnManager.responseSerializer = [AFHTTPResponseSerializer serializer];
    
    NSArray *allkeys = expanding.allKeys;
    for (id key in allkeys) {
        if ([key isKindOfClass:NSString.class] && [[expanding objectForKey:key] isKindOfClass:NSString.class]) {
//            [self.afnManager.requestSerializer setValue:[expanding objectForKey:key] forHTTPHeaderField:key];
        }
    }
    
    NSString *encodedURL = [header stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    
    
    
    [self.afnManager POST:encodedURL parameters:parameters progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"responsObject:%@",responseObject);
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableLeaves error:nil];
        
        HttpRequestServiceOperationModel *model = [[HttpRequestServiceOperationModel alloc] init];
        model.responseDictionary = dic;
        if (successBlock) {
            successBlock(model,responseObject);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"%@",error);
        HttpRequestServiceOperationModel *model = [[HttpRequestServiceOperationModel alloc] init];
        model.responseDictionary = @{@"desc":error.description};
        if (failedBlock) {
            failedBlock(model,error);
        }
    }];

}


//  参数拼接处理
-(NSMutableString *)requestParamWithParamers:(NSDictionary *)dicParmers encry:(int)encry
{
    NSMutableString *interfaceAddresss = [[NSMutableString alloc]init];
    NSArray *keyArray = [[dicParmers allKeys]sortedArrayUsingSelector:@selector(compare:)];
    NSInteger arryCount = [keyArray count];
    
    for (int index = 0; index < arryCount; index++)
    {
        NSString *keyStr = [keyArray objectAtIndex:index];
        NSString *keyValue = [dicParmers objectForKey:keyStr];
        //参数拼接
        if (index == 0) {
            if ([keyStr hasSuffix:@"="]) {
                [interfaceAddresss appendString:keyStr];
                [interfaceAddresss appendString:keyValue];
            }
            else {
                [interfaceAddresss appendString:keyStr];
                [interfaceAddresss appendString:@"="];
                [interfaceAddresss appendString:keyValue];
            }
        }
        else {
            if([(NSString *)[keyArray objectAtIndex:index] hasPrefix:@"&"] ){
                [interfaceAddresss appendString:keyStr];
                [interfaceAddresss appendString:keyValue];
            }
            else if (![(NSString *)[keyArray objectAtIndex:index] hasPrefix:@"&"]){
                [interfaceAddresss appendString:@"&"];
                [interfaceAddresss appendString:keyStr];
                [interfaceAddresss appendString:@"="];
                [interfaceAddresss appendString:keyValue];
            }
        }
    }
    return interfaceAddresss;
}

@end



@implementation HttpRequestServiceOperationModel


@end









