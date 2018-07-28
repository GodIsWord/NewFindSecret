//
//  XBMacroDefinition_h
//  FindSecret
//
//  Created by 9f on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#ifndef XBMacroDefinition_h
#define XBMacroDefinition_h

#define  IS_IPHONEX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125,2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define  STATUSBAR_HEIGHT      (IS_IPHONEX ? 44.f :20.f)
#define  STATUSBAR_And_NAVIGATIONBAR_HEIGHT  (IS_IPHONEX ? 88.f : 64.f)
#define  TABBAR_HEIGHT        (IS_IPHONEX ? (49.f+34.f) :49.f)

#define  BOTTOM_MARGIN        (IS_IPHONEX ? 34.f : 0.f)
#define  TOP_MARGIN        (IS_IPHONEX ? 44.f : 0.f)

#endif /* XBMacroDefinition_h */
