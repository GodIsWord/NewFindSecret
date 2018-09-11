//
//  MSRecordControl.m
//  CADisplayLinkTest
//
//  Created by 9f on 2018/8/24.
//  Copyright © 2018年 9f. All rights reserved.
//

#import "MSRecordControl.h"

@interface MSRecordControl ()
@property (nonatomic, strong) NSTimer *timer;
@property (nonatomic, strong) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, strong) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, strong) CAShapeLayer *progressLayer;
@end

@implementation MSRecordControl
@synthesize progress = _progress;
+ (instancetype)controlWithMode:(MSRecordControlMode)mode {
    MSRecordControl *control = [[self alloc] initWithFrame:CGRectZero];
    control.mode = mode;
    return control;
}

- (void)reset {
    self.progress = 0;
}

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self initialize];
    }
    return self;
}
- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self initialize];
    }
    return self;
}
- (void)initialize {
    self.edge = 2;
    self.lineWidth = 3;
    self.duration = 10;


    self.longPressGestureRecognizer = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPressHandle:)];
    self.longPressGestureRecognizer.minimumPressDuration = 0.05;
    [self addGestureRecognizer:self.longPressGestureRecognizer];

    self.tapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapHandle:)];
    [self addGestureRecognizer:self.tapGestureRecognizer];

    self.progressLayer = [[CAShapeLayer alloc] init];
    self.progressLayer.fillColor = nil;
    self.progressLayer.lineCap = kCALineCapRound;
    self.progressLayer.lineWidth = self.lineWidth;
    self.progressLayer.strokeColor = [UIColor colorWithRed:(CGFloat) (37.0 / 255.0) green:(CGFloat) (37.0 / 255.0) blue:(CGFloat) (37.0 / 255.0) alpha:1].CGColor;
    [self.layer addSublayer:self.progressLayer];

    self.mode = MSRecordControlTap;
}

- (void)setMode:(MSRecordControlMode)mode {
    _mode = mode;
    self.tapGestureRecognizer.enabled = mode == MSRecordControlTap;
    self.longPressGestureRecognizer.enabled = mode == MSRecordControlLongPress;
}
- (void)setProgressBarColor:(UIColor *)progressBarColor {
    _progressBarColor = progressBarColor;
    self.progressLayer.strokeColor = progressBarColor.CGColor;
}

- (void)layoutSubviews {
    [super layoutSubviews];

    self.progressLayer.frame = self.bounds;
    CGFloat radius = (CGFloat) (MIN(self.bounds.size.width, self.bounds.size.height) / 2.0);
    UIBezierPath *bezierPath = [UIBezierPath bezierPathWithArcCenter:CGPointMake(CGRectGetMidX(self.bounds), CGRectGetMidY(self.bounds)) radius:(CGFloat) (radius - self.lineWidth / 2.0 - self.edge) startAngle:(CGFloat) -M_PI_2 endAngle:(CGFloat) (M_PI_2 + M_PI) clockwise:YES];
    self.progressLayer.path = bezierPath.CGPath;
    self.progressLayer.strokeStart = 0;
    self.progressLayer.strokeEnd = 0;
}
- (void)tapHandle:(UITapGestureRecognizer *)tapHandle {
    if ([self.delegate respondsToSelector:@selector(recordControlDidBeginRecord:)]) {
        [self.delegate recordControlDidBeginRecord:self];
    }
    if ([self.delegate respondsToSelector:@selector(recordControl:didChangeGestureStatus:)]) {
        [self.delegate recordControl:self didChangeGestureStatus:tapHandle.state];
    }
}

- (void)longPressHandle:(UILongPressGestureRecognizer *)gestureRecognizer {
    switch (gestureRecognizer.state) {
        case UIGestureRecognizerStateBegan:{
            self.timer = [NSTimer scheduledTimerWithTimeInterval:0.1 target:self selector:@selector(runTask:) userInfo:nil repeats:YES];
            [[NSRunLoop currentRunLoop] addTimer:self.timer forMode:NSRunLoopCommonModes];
            if ([self.delegate respondsToSelector:@selector(recordControlDidBeginRecord:)]) {
                [self.delegate recordControlDidBeginRecord:self];
            }
        }
            break;
        
        
        case UIGestureRecognizerStateCancelled:
        case UIGestureRecognizerStateEnded:
        case UIGestureRecognizerStateFailed:{
            [self.timer invalidate];
        }
            break;
        case UIGestureRecognizerStatePossible:
        case UIGestureRecognizerStateChanged:
            break;
        
    
    }
    if ([self.delegate respondsToSelector:@selector(recordControl:didChangeGestureStatus:)]) {
        [self.delegate recordControl:self didChangeGestureStatus:gestureRecognizer.state];
    }
}
- (void)setProgressBarHidden:(BOOL)progressBarHidden {
    _progressBarHidden = progressBarHidden;
    self.progressLayer.hidden = progressBarHidden;
}

- (void)runTask:(NSTimer *)timer {
    self.progress += timer.timeInterval / self.duration;
    if (self.progress >= 1) {
        self.progress = 1;
        if ([self.delegate respondsToSelector:@selector(recordControlDurationIsMaxValue:)]) {
            [self.delegate recordControlDurationIsMaxValue:self];
        }
        [timer invalidate];
    }
}
- (void)setProgress:(CGFloat)progress {
    _progress = progress;
    self.progressLayer.strokeEnd = progress;
}
- (CGFloat)progress{
    return _progress;
}
@end
