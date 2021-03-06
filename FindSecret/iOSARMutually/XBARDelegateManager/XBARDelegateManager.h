//
//  XBARDelegateManager.h
//  ManZhouLIProject
//
//  Created by 张义德 on 2017/5/24.
//  Copyright © 2017年 张义德. All rights reserved.
//

@class UnityAppController;
@class UnityView;

@interface XBARDelegateManager : NSObject


+(XBARDelegateManager*)shareInstance;

+(void)startARWindow;
+(void)stopARWindow;

+(UnityView *)getUnityView;

+(UIWindow *) getUnityWindow;

+(UnityAppController *)getUnityDelegate;


#pragma mark -- delegate application
+ (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window;
#if !UNITY_TVOS
+ (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification;
#endif

+ (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo;
+ (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
+ (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
+ (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation;
+ (BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions;
+ (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions;
+ (void)applicationDidEnterBackground:(UIApplication*)application;
+ (void)applicationWillEnterForeground:(UIApplication*)application;
+ (void)applicationDidBecomeActive:(UIApplication*)application;
+ (void)applicationWillResignActive:(UIApplication*)application;
+ (void)applicationDidReceiveMemoryWarning:(UIApplication*)application;
+ (void)applicationWillTerminate:(UIApplication*)application;
@end
