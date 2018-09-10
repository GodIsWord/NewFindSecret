//
//  XBARDelegateManager.m
//  ManZhouLIProject
//
//  Created by 张义德 on 2017/5/24.
//  Copyright © 2017年 张义德. All rights reserved.
//

#import "XBARDelegateManager.h"
#import "UnityAppController.h"
#import "XBiOSToARManager.h"

@interface XBARDelegateManager ()
@property (nonatomic,strong) UnityAppController *unityAppController;
@end

@implementation XBARDelegateManager

static XBARDelegateManager *manager = nil;
+(XBARDelegateManager*)shareInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[XBARDelegateManager alloc] init];
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
    UIApplication *application = [UIApplication sharedApplication];
    UIWindow *appWindow = [UIApplication sharedApplication].delegate.window;
    [appWindow resignKeyWindow];
    appWindow.hidden = YES;
    
    
    UIWindow *unityWindow = [self getUnityWindow];
    if (!unityWindow) {
        [self application:application didFinishLaunchingWithOptions:nil];
        [XBARDelegateManager applicationWillResignActive:application];
        [XBARDelegateManager applicationWillEnterForeground:application];
        [XBARDelegateManager applicationDidBecomeActive:application];
    }
    unityWindow = [self getUnityWindow];
    [unityWindow makeKeyAndVisible];
    [unityWindow setHidden:NO];
//    UnityIsPaused(0);
}

+(void)stopARWindow
{
    UIApplication *application = [UIApplication sharedApplication];
    
    UIWindow *appWindow = application.delegate.window;
    [appWindow makeKeyAndVisible];
    [appWindow setHidden:NO];
    
    UIWindow *unityWindow = [self getUnityWindow];
    [unityWindow resignKeyWindow];
    unityWindow.hidden = YES;
//    UnityIsPaused(1);
}

+(UnityView *)getUnityView
{
    return [self getUnityDelegate].unityView;
}

+(UIWindow *)getUnityWindow
{
    return UnityGetMainWindow();
}

+(UnityAppController *)getUnityDelegate
{
    return [XBARDelegateManager shareInstance].unityAppController;
}


+ (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    return   [[XBARDelegateManager shareInstance].unityAppController application:application supportedInterfaceOrientationsForWindow:window];
}

#if !UNITY_TVOS
+ (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
    [[XBARDelegateManager shareInstance].unityAppController application:application didReceiveLocalNotification:notification];
}
#endif

+ (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    [[XBARDelegateManager shareInstance].unityAppController application:application didReceiveRemoteNotification:userInfo];
}

+ (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    [[XBARDelegateManager shareInstance].unityAppController application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

+ (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    [[XBARDelegateManager shareInstance].unityAppController application:application didFailToRegisterForRemoteNotificationsWithError:error];
}

+ (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
    return [[XBARDelegateManager shareInstance].unityAppController application:application openURL:url sourceApplication:sourceApplication annotation:annotation];
}

+(BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [[XBARDelegateManager shareInstance].unityAppController application:application willFinishLaunchingWithOptions:launchOptions];
}

+ (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    return [[XBARDelegateManager shareInstance].unityAppController application:application didFinishLaunchingWithOptions:launchOptions];
}

+ (void)applicationDidEnterBackground:(UIApplication*)application
{
    [[XBARDelegateManager shareInstance].unityAppController applicationDidEnterBackground:application];
}

+ (void)applicationWillEnterForeground:(UIApplication*)application
{
    if (![self getUnityWindow]) {
        return;
    }
    [[XBARDelegateManager shareInstance].unityAppController applicationWillEnterForeground:application];
}

+ (void)applicationDidBecomeActive:(UIApplication*)application
{
    if (![self getUnityWindow]) {
        return;
    }
    [[XBARDelegateManager shareInstance].unityAppController applicationDidBecomeActive:application];
}

+ (void)applicationWillResignActive:(UIApplication*)application
{
    [[XBARDelegateManager shareInstance].unityAppController applicationWillResignActive:application];
}

+ (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    [[XBARDelegateManager shareInstance].unityAppController applicationDidReceiveMemoryWarning:application];
}

+ (void)applicationWillTerminate:(UIApplication*)application
{
    [[XBARDelegateManager shareInstance].unityAppController applicationWillTerminate:application];
}

@end
