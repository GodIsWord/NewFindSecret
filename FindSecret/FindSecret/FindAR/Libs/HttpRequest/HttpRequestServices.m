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
-(void)AFGETRequestHeaderAppanding:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    
    [self AFGETRequestHeaderUrl:XBARHttpHeader appending:appending withParameters:parameters encry:0 suceesBlock:successBlock failedBlock:failedBlock];
    
}
-(void)AFGETRequestHeaderUrl:(NSString*)header appending:(NSString*)appending withParameters:(NSDictionary *)parameters encry:(int)encry suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    NSString * url = header;
    if (appending.length>0) {
        url = [url stringByAppendingPathComponent:appending];
    }
    
    NSLog(@"url:%@",url);
    [self.afnManager GET:url parameters:parameters progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        successBlock(responseObject);
        NSLog(@"responsObject:%@",responseObject);
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"%@",error);
        failedBlock(error);
    }];
    
}
#pragma mark - post请求
-(void)AFNPOSTRequestHeaderAppanding:(NSString*)appanding withParameters:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    
    
    [self AFNPOSTRequestHeaderURL:XBARHttpHeader headerExpand:appanding withParameters:parameters suceesBlock:successBlock failedBlock:failedBlock];
}
-(void)AFNPOSTRequestHeaderURL:(NSString*)header headerExpand:(NSString*)expanding withParameters:(NSDictionary*)parameters suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    
    
    self.afnManager.requestSerializer = [AFHTTPRequestSerializer serializer];
    self.afnManager.responseSerializer = [AFHTTPResponseSerializer serializer];
    
    self.afnManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"text/plain",@"application/json", @"text/json", @"text/javascript",@"text/css", @"application/javascript",@"application/json", @"application/x-www-form-urlencoded", nil];
    
    //添加请求头
//    NSString *time= [NSString stringWithFormat:@"%.0f",[[NSDate dateWithTimeIntervalSinceNow:0] timeIntervalSince1970]];
//    NSString *strMD5 = [[NSString stringWithFormat:@"%@%@",ARAPP_KEY,time] MD5ForLower32Bate];
//    [self.afnManager.requestSerializer setValue:time forHTTPHeaderField:@"timestamp"];
//    [self.afnManager.requestSerializer setValue:strMD5 forHTTPHeaderField:@"signature"];
    
    
    NSString *strURl = [header stringByAppendingPathComponent:expanding];
    
    NSString *encodedURL = [strURl stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    
    [self.afnManager POST:encodedURL parameters:parameters progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"responsObject:%@",responseObject);
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableLeaves error:nil];
        
        HttpRequestServiceOperationModel *model = [[HttpRequestServiceOperationModel alloc] init];
        model.responseDictionary = dic;
        if (successBlock) {
            successBlock(dic);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"%@",error);
        if (failedBlock) {
            failedBlock(error);
        }
    }];

}

//上传视频和图片使用
-(void)AFNPOSTRequestUploadAppending:(NSString*)appending withParameters:(NSDictionary*)parameters fileKeyNames:(NSArray*)keyNames filePaths:(NSArray*)arrPath  suceesBlock:(httpRequestSuccessBlock)successBlock failedBlock:(httpRequestSuccessFail)failedBlock
{
    
    self.afnManager.requestSerializer = [AFHTTPRequestSerializer serializer];
    self.afnManager.responseSerializer = [AFHTTPResponseSerializer serializer];
    
    self.afnManager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"text/plain",@"application/json", @"text/json", @"text/javascript",@"text/css", @"application/javascript",@"application/json", @"application/x-www-form-urlencoded",@"application/x-zip-compressed", nil];
    // 设置超时时间
    [self.afnManager.requestSerializer willChangeValueForKey:@"timeoutInterval"];
    self.afnManager.requestSerializer.timeoutInterval = 60*3.f;
    [self.afnManager.requestSerializer didChangeValueForKey:@"timeoutInterval"];
    
    [self.afnManager POST:[XBARHttpHeader stringByAppendingPathComponent:appending] parameters:parameters constructingBodyWithBlock:^(id<AFMultipartFormData>  _Nonnull formData) {
        NSString  *imagePath = [[NSBundle mainBundle] pathForResource:@"B1D476F3-BD7D-4894-90E1-C2E00AE50576" ofType:@"MOV"] ;
        NSData *data = [NSData dataWithContentsOfFile:imagePath];
            [formData appendPartWithFileData:data name:@"B1D476F3-BD7D-4894-90E1-C2E00AE50576" fileName:@"B1D476F3-BD7D-4894-90E1-C2E00AE50576.MOV" mimeType:@"video/MOV"];
//        for (int i=0; i<keyNames.count; i++) {
//            NSString *keyName = keyNames[i];
//            if (i>=arrPath.count) {
//                break;
//            }
//            NSString *filePath = arrPath[i];
//            NSURL *url = [NSURL fileURLWithPath:filePath];
//            [formData appendPartWithFileURL:url name:keyName error:nil];
//        }
    } progress:^(NSProgress * _Nonnull uploadProgress) {
        NSLog(@"%@",uploadProgress.localizedDescription);
    }  success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:responseObject options:0 error:nil];
        NSLog(@"sucess:%@",dic);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"str:%@",error);
        
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









