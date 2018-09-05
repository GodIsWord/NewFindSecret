//
//  XBRecordAudioStorage.m
//  FindSecret
//
//  Created by yidezhang on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordAudioStorage.h"
#import <AVFoundation/AVFoundation.h>
#import "lame.h"

@interface XBRecordAudioStorage()

@property (nonatomic,strong) NSMutableArray *arrStorage;

@end


@implementation XBRecordAudioStorage

+(instancetype)shareInstance{
    
    static XBRecordAudioStorage *storage = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        storage = [[XBRecordAudioStorage alloc] init];
        storage.arrStorage = [NSMutableArray array];
    });
    
    return storage;
    
}

+(NSString *)lastRecorderPath{
    return [[[self shareInstance] arrStorage] lastObject];
}

+(BOOL)removeAll{
    return [self removeWithPath:[self recordAudioFolder]];
}

+(BOOL)removeWithPath:(NSString *)path{
    
    NSFileManager *manager = [NSFileManager defaultManager];
    if ([manager fileExistsAtPath:path]) {
        NSError *error = nil;
        [manager removeItemAtPath:path error:&error];
        if (!error && [[[self shareInstance] arrStorage] containsObject:path]) {
            [[[self shareInstance] arrStorage] removeObject:path];
            return YES;
        }
    }
    
    return NO;
}

+(BOOL)saveAudioWithDataPath:(NSString *)path complate:(void((^)(void)))block{
    
    if (!path) return NO;
    
//    dispatch_queue_t quet = dispatch_queue_create("dafdse", DISPATCH_QUEUE_CONCURRENT);
//    dispatch_semaphore_t signal = dispatch_semaphore_create(1);
    __block NSString *strPath = nil;
//    dispatch_async(quet, ^{
//        dispatch_semaphore_signal(signal);
//    });
//    dispatch_semaphore_wait(signal, DISPATCH_TIME_FOREVER);
    
    strPath =[self audioPCMtoMP3:path];
    if (strPath.length>0) {
        [[[self shareInstance] arrStorage] addObject:strPath];
    }
    
    if (block) {
        block();
    }
    
    return strPath.length>0;
}


+(NSString*)documentPath{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

+(NSString*)cachPath{
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

+(NSString*)tempPath{
    return NSTemporaryDirectory();
}

+(NSString*)recordAudioFolder{
    NSString *strPath = [[self tempPath] stringByAppendingPathComponent:@"recordAudioes"];
    if ([self createDirectoryPath:strPath]) {
        return strPath;
    }
    return nil;
}

+(BOOL)fileExist:(NSString*)path{
    if (!path) return NO;
    NSFileManager *manager = [NSFileManager defaultManager];
    BOOL isExt = [manager fileExistsAtPath:path];
    return isExt;
}


/**
 创建一个文件夹

 @param path 文件夹路径
 @return 是否成功
 */
+(BOOL)createDirectoryPath:(NSString*)path{
    if (!path) return NO;
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return [manager createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
    }
    return YES;
}


+ (NSString *)audioPCMtoMP3:(NSString *)wavPath {
    
    NSString *cafFilePath = wavPath;
    
    NSDate* date = [NSDate dateWithTimeIntervalSinceNow:0];
    NSTimeInterval time = [date timeIntervalSince1970]*1000;
    NSString *timeString = [NSString stringWithFormat:@"%.0f", time];
    NSString *strPath = [NSString stringWithFormat:@"%@/%@.mp3",[self recordAudioFolder],timeString];
    
    NSString *mp3FilePath = strPath;
    
    NSFileManager* fileManager = [NSFileManager defaultManager];
    if([fileManager removeItemAtPath:mp3FilePath error:nil]){
        NSLog(@"删除原MP3文件");
    }
    @try {
        int read, write;
        FILE *pcm = fopen([cafFilePath cStringUsingEncoding:1], "rb");  //source 被转换的音频文件位置
        fseek(pcm, 4*1024, SEEK_CUR);                                   //skip file header
        FILE *mp3 = fopen([mp3FilePath cStringUsingEncoding:1], "wb");  //output 输出生成的Mp3文件位置
        const int PCM_SIZE = 8192;
        const int MP3_SIZE = 8192;
        short int pcm_buffer[PCM_SIZE*2];
        unsigned char mp3_buffer[MP3_SIZE];
        
        lame_t lame = lame_init();
        lame_set_in_samplerate(lame, 22050.0);
        lame_set_VBR(lame, vbr_default);
        lame_init_params(lame);
//        lame_set_num_channels(lame,1);//设置1为单通道，默认为2双通道
        
//        lame_set_brate(lame,8);
//
//        lame_set_mode(lame,3);
//
//        lame_set_quality(lame,2);
//
//        lame_init_params(lame);
        
        
        do {
            read = (int)fread(pcm_buffer, 2*sizeof(short int), PCM_SIZE, pcm);
            if (read == 0)
                write = lame_encode_flush(lame, mp3_buffer, MP3_SIZE);
            else
                write = lame_encode_buffer_interleaved(lame, pcm_buffer, read, mp3_buffer, MP3_SIZE);
            
            fwrite(mp3_buffer, write, 1, mp3);
            
        } while (read != 0);
        
        lame_close(lame);
        fclose(mp3);
        fclose(pcm);
    }
    @catch (NSException *exception) {
        NSLog(@"ssssssss %@",[exception description]);
    }
    @finally {
        return mp3FilePath;
    }
}

@end








