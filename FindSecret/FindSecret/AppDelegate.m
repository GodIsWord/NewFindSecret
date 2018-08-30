//
//  AppDelegate.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 yidezhang. All rights reserved.
//

#import "AppDelegate.h"
#import <AMapFoundationKit/AMapFoundationKit.h>

#import "HomeViewController.h"
#import "UnityDelegateManager.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [AMapServices sharedServices].apiKey = APIKEY;
    
//    [UnityDelegateManager application:application didFinishLaunchingWithOptions:launchOptions];
    
    HomeViewController *control = [[HomeViewController alloc] init];
    UINavigationController *navi = [[UINavigationController alloc] initWithRootViewController:control];
    UIWindow *window  = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    window.rootViewController = navi;
    self.window = window;
    [window makeKeyAndVisible];
    
    return YES;
}


//- (void)applicationWillResignActive:(UIApplication *)application {
//    [UnityDelegateManager applicationWillResignActive:application];
//}
//
//
//- (void)applicationDidEnterBackground:(UIApplication *)application {
//    [UnityDelegateManager applicationDidEnterBackground:application];
//}
//
//
//- (void)applicationWillEnterForeground:(UIApplication *)application {
//    [UnityDelegateManager applicationWillEnterForeground:application];
//}
//
//
//- (void)applicationDidBecomeActive:(UIApplication *)application {
//    [UnityDelegateManager applicationDidBecomeActive:application];
//}
//
//
//- (void)applicationWillTerminate:(UIApplication *)application {
//    [UnityDelegateManager applicationWillTerminate:application];
//}



@end
