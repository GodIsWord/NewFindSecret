//
//  UnityDelegateManager.m
//  ManZhouLIProject
//
//  Created by 张义德 on 2017/5/24.
//  Copyright © 2017年 张义德. All rights reserved.
//

#import "UnityDelegateManager.h"
#import "UnityAppController.h"
#import "iOSToUnityManager.h"

@interface UnityDelegateManager ()
@property (nonatomic,strong) UnityAppController *unityAppController;
@end

@implementation UnityDelegateManager

static UnityDelegateManager *manager = nil;
+(UnityDelegateManager*)shareInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[UnityDelegateManager alloc] init];
    });
    return manager;
}

-(UnityAppController *)unityAppController
{
    if (!_unityAppController) {
        _unityAppController   = [[UnityAppController alloc] init];
    }
    return  _unityAppController;
}

+(void)startARWindow
{
    UnityAppController *dele = [UnityDelegateManager shareInstance].unityAppController;
    [[UIApplication sharedApplication].delegate.window resignKeyWindow];
    [[UIApplication sharedApplication].delegate.window setHidden:YES];
    [dele.window makeKeyAndVisible];
    dele.window.hidden = NO;
}

+(void)stopARWindow
{
    UnityAppController *dele = [UnityDelegateManager shareInstance].unityAppController;
    [[UIApplication sharedApplication].delegate.window makeKeyAndVisible];
    [[UIApplication sharedApplication].delegate.window setHidden:NO];
    [dele.window resignKeyWindow];
    dele.window.hidden = YES;
}

+(UnityAppController *)getUnityDelegate
{
    return [UnityDelegateManager shareInstance].unityAppController;
}


+ (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    return   [[UnityDelegateManager shareInstance].unityAppController application:application supportedInterfaceOrientationsForWindow:window];
}

#if !UNITY_TVOS
+ (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
    [[UnityDelegateManager shareInstance].unityAppController application:application didReceiveLocalNotification:notification];
}
#endif

+ (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    [[UnityDelegateManager shareInstance].unityAppController application:application didReceiveRemoteNotification:userInfo];
}

+ (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    [[UnityDelegateManager shareInstance].unityAppController application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

+ (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    [[UnityDelegateManager shareInstance].unityAppController application:application didFailToRegisterForRemoteNotificationsWithError:error];
}

+ (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
    return [[UnityDelegateManager shareInstance].unityAppController application:application openURL:url sourceApplication:sourceApplication annotation:annotation];
}

+(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [[UnityDelegateManager shareInstance].unityAppController application:application willFinishLaunchingWithOptions:launchOptions];
}

+ (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [[UnityDelegateManager shareInstance].unityAppController application:application didFinishLaunchingWithOptions:launchOptions];
}

+ (void)applicationDidEnterBackground:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationDidEnterBackground:application];
}

+ (void)applicationWillEnterForeground:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationWillEnterForeground:application];
}

+ (void)applicationDidBecomeActive:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationDidBecomeActive:application];
}

+ (void)applicationWillResignActive:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationWillResignActive:application];
}

+ (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationDidReceiveMemoryWarning:application];
}

+ (void)applicationWillTerminate:(UIApplication*)application
{
    [[UnityDelegateManager shareInstance].unityAppController applicationWillTerminate:application];
}

@end
