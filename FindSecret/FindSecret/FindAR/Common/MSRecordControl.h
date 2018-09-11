//
//  MSRecordControl.h
//  CADisplayLinkTest
//
//  Created by 9f on 2018/8/24.
//  Copyright © 2018年 9f. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MSRecordControlMode) {
    MSRecordControlTap, MSRecordControlLongPress,
};
@class MSRecordControl;

@protocol MSRecordControlDelegate <NSObject>
@optional
- (void)recordControl:(MSRecordControl *)recordControl didChangeGestureStatus:(UIGestureRecognizerState)state;
- (void)recordControlDidBeginRecord:(MSRecordControl *)recordControl;
- (void)recordControlDurationIsMaxValue:(MSRecordControl *)recordControl;
@end

@interface MSRecordControl : UIView
@property (nonatomic, assign) CGFloat progress;
@property (nonatomic, assign) CGFloat edge;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, strong) UIColor *progressBarColor;
@property (nonatomic, weak) id <MSRecordControlDelegate> delegate;
@property (nonatomic, assign) BOOL progressBarHidden;
/**
 * The unit is seconds。Defualt value is 10s.
 */
@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, assign) MSRecordControlMode mode;

+ (instancetype)controlWithMode:(MSRecordControlMode)mode;
- (void)reset;
@end
