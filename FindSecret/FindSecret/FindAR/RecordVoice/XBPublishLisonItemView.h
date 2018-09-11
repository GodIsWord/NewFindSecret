//
//  XBPublishLisonItemView.h
//  FindSecret
//
//  Created by yide zhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBAudioManager.h"

@interface XBPublishLisonItemView : UIView

@property(nonatomic,strong) XBAudioManager *manager;

-(void)reloadView;

@end
