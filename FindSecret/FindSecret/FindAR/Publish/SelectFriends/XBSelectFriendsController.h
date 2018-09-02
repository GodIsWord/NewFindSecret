//
//  XBSelectFriendsController.h
//  FindSecret
//
//  Created by  xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SelectFriendsControllerDelegate <NSObject>

@optional
-(void)selectFriendsMess:(NSDictionary*)dic;

@end

@interface XBSelectFriendsController : UIViewController
@property(nonatomic,weak) id<SelectFriendsControllerDelegate>delegate;
@end
