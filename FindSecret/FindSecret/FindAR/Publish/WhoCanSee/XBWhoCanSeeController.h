//
//  XBWhoCanSeeController.h
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XBWhoCanSeeControllerDelegate<NSObject>

@optional
/**
 选中的选项回传

 @param type 当前选择的类型 1 谁可以看 2 在哪里看
 @param dic 回传数据的字典 目前是 {title:""}
 */
-(void)whoCanSeeControllerSelectType:(NSInteger)type message:(NSDictionary*)dic;

@end;

@interface XBWhoCanSeeController : UITableViewController
// 1 谁可以看 2 在哪里看
@property(nonatomic,assign) NSInteger type;

@property(nonatomic,weak) id<XBWhoCanSeeControllerDelegate> delegate;

@end
