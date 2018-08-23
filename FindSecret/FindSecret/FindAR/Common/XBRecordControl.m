//
//  XBRecordControl.m
//  FindSecret
//
//  Created by pillar on 2018/8/17.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecordControl.h"

#define TorusWidth 6

static int videoDuration  = 6;

@interface XBRecordControl ()<UIGestureRecognizerDelegate>{
    CGFloat _currentProgress;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_photoTapGestureRecognizer;
    NSTimer *_progressTimer;
    BOOL _recording;
}


@property (nonatomic, strong) UIColor *foreColor;
@property (nonatomic, strong) UIColor *progressColor;
@property (nonatomic, strong) CALayer *circleLayer;
@property (nonatomic, strong) CALayer *circleBorder;
@property (nonatomic, strong) CAShapeLayer *progressLayer;
@property (nonatomic, strong) CAGradientLayer *gradientMaskLayer;

@end

@implementation XBRecordControl

-(instancetype)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        [self setupGestureRecognizer];
        [self setType:CaptureTypeRecord];
        [self draw];
    }
    return self;
}
- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    
    if (self) {
        [self setupGestureRecognizer];
        [self setType:CaptureTypeRecord];
        [self draw];
    }
    
    return self;
}
- (void)layoutSubviews {
    
    [super layoutSubviews];
    
    CGFloat size = self.frame.size.width - 2 * TorusWidth;
    
    //内圆
    _circleLayer.bounds = CGRectMake(0, 0, size, size);
    _circleLayer.anchorPoint = CGPointMake(0.5, 0.5);
    _circleLayer.position = (CGPoint){CGRectGetMidX(self.bounds), CGRectGetMidY(self.bounds)};
    _circleLayer.cornerRadius = size/2;
    
    // 外圆
    _circleBorder.bounds = CGRectMake(0, 0, self.bounds.size.width, self.bounds.size.height);
    _circleBorder.anchorPoint = CGPointMake(0.5, 0.5);
    _circleBorder.position = (CGPoint){CGRectGetMidX(self.bounds), CGRectGetMidY(self.bounds)};
    _circleBorder.cornerRadius = self.frame.size.width/2;
    
    
    // 12点开始
    CGFloat startAngle = M_PI + M_PI_2;
    CGFloat endAngle = M_PI * 3 + M_PI_2;
    
    
    CGPoint centerPoint = CGPointMake(self.frame.size.width/2, self.frame.size.height/2);
    
    //
    _progressLayer.path = [UIBezierPath bezierPathWithArcCenter:centerPoint radius:self.frame.size.width/2 - (TorusWidth /2 ) + 0.5 startAngle:startAngle endAngle:endAngle clockwise:YES].CGPath;
    _gradientMaskLayer.frame = self.bounds;
}
- (void)dealloc{
    NSLog(@"%s",__func__);
}

- (void)setForeColor:(UIColor *)foreColor{
    _foreColor = foreColor;
    _circleLayer.backgroundColor = foreColor.CGColor;
    _circleBorder.borderColor = foreColor.CGColor;
}
- (void)draw{
    _currentProgress = 0;
    
    self.backgroundColor = [UIColor clearColor];
    
    CALayer *layer = self.layer;
    if (!_circleLayer) {
        _circleLayer = [CALayer layer];
        _circleLayer.backgroundColor = [UIColor blackColor].CGColor;
        [layer insertSublayer:_circleLayer atIndex:0];
    }
    
    
    if (!_circleBorder) {
        
        _circleBorder = [CALayer layer];
        _circleBorder.backgroundColor = [UIColor clearColor].CGColor;
        _circleBorder.borderWidth = TorusWidth-1;
        _circleBorder.borderColor = [UIColor blackColor].CGColor;
        
        [layer insertSublayer:_circleBorder atIndex:0];
    }
    
    if (!_progressLayer) {
        
        CGFloat startAngle = M_PI + M_PI_2;
        CGFloat endAngle = M_PI * 3 + M_PI_2;
        CGPoint centerPoint = CGPointMake(self.frame.size.width/2, self.frame.size.height/2);
        
        _gradientMaskLayer = [self gradientMask];
        _progressLayer = [CAShapeLayer layer];
        _progressLayer.path = [UIBezierPath bezierPathWithArcCenter:centerPoint radius:self.frame.size.width/2 - (TorusWidth /2 ) + 0.5 startAngle:startAngle endAngle:endAngle clockwise:YES].CGPath;
        _progressLayer.backgroundColor = [UIColor blackColor].CGColor;
        _progressLayer.fillColor = nil;
        _progressLayer.strokeColor = [UIColor blackColor].CGColor;
        _progressLayer.lineWidth = TorusWidth-1.0;
        _progressLayer.strokeStart = 0.0;
        _progressLayer.strokeEnd = 0.0;
        
        _gradientMaskLayer.mask = _progressLayer;
        [layer addSublayer:_gradientMaskLayer];
    }
}
- (CAGradientLayer *)gradientMask {
    
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.frame = self.bounds;
    gradientLayer.locations = @[@0.0, @1.0];
    
    if (!_progressColor)
        _progressColor = [UIColor redColor];
    
    UIColor *topColor = _progressColor;
    UIColor *bottomColor = _progressColor;
    
    gradientLayer.colors = @[(id)topColor.CGColor, (id)bottomColor.CGColor];
    
    return gradientLayer;
}


- (void)setupGestureRecognizer{
    
    _longPressGestureRecognizer = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(_handleLongPressGestureRecognizer:)];
    _longPressGestureRecognizer.delegate = self;
    _longPressGestureRecognizer.minimumPressDuration = 0.05f;
    _longPressGestureRecognizer.allowableMovement = 10.0f;
    [self addGestureRecognizer:_longPressGestureRecognizer];
    
    _photoTapGestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(_handlePhotoTapGesterRecognizer:)];
    _photoTapGestureRecognizer.delegate = self;
    _photoTapGestureRecognizer.numberOfTapsRequired = 1;
    [self addGestureRecognizer:_photoTapGestureRecognizer];
}

- (void)setType:(CaptureType)type{
    
    if (type == CaptureTypePhoto) {
        _photoTapGestureRecognizer.enabled = YES;
        _longPressGestureRecognizer.enabled = NO;
    }else if(type == CaptureTypeRecord){
        _photoTapGestureRecognizer.enabled = NO;
        _longPressGestureRecognizer.enabled = YES;
    }
}

- (void)_handleLongPressGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer{

    switch (gestureRecognizer.state) {
        case UIGestureRecognizerStateBegan:
        {
            [self _startCapture];
            [self didTouchDown];
            break;
        }
        case UIGestureRecognizerStateEnded:
        case UIGestureRecognizerStateCancelled:
        case UIGestureRecognizerStateFailed:
        {
            [self didTouchUp];
            [self _pauseCapture];
            break;
        }
        default:
            break;
    }
}

- (void)_handlePhotoTapGesterRecognizer:(UIGestureRecognizer *)gestureRecognizer{
    
    [self didTouchDown];
    if ([self.delegate respondsToSelector:@selector(recordControlDidTap:)]) {
        [self.delegate recordControlDidTap:self];
    }
    [self didTouchUp];
}
- (void)_startCapture{
    _progressTimer = [NSTimer scheduledTimerWithTimeInterval:0.05 target:self selector:@selector(_updateProgress) userInfo:nil repeats:YES];
    if ([self.delegate respondsToSelector:@selector(recordControlDidStartCapture:)]) {
        [self.delegate recordControlDidStartCapture:self];
    }
}
- (void)_updateProgress {
    _recording = YES;
    _progress += 0.05/videoDuration;
    [self setProgress:_progress];
    if (_progress >= 1){
        
        if ([self.delegate respondsToSelector:@selector(recordControlDidEndCapture:)]) {
            [self.delegate recordControlDidEndCapture:self];
        }
        [_progressTimer invalidate];
    }
}
- (void)resetCapture{
    
    [self _resetCapture];
}

- (void)_resetCapture{
    _recording = NO;
    _progress = 0;
    [self setProgress:_progress];
}
- (void)_pauseCapture{
    
    if ([self.delegate respondsToSelector:@selector(recordControlDidPauseCapture:)]) {
        [self.delegate recordControlDidPauseCapture:self];
    }
    _recording = NO;
    [_progressTimer invalidate];
}

- (void)didTouchDown {
    
    CGFloat duration = 0.15;
    _circleLayer.contentsGravity = @"center";
    
    CABasicAnimation *scale = [CABasicAnimation animationWithKeyPath:@"transform.scale"];
    scale.fromValue = @1.0;
    scale.toValue = @0.97;
    [scale setDuration:duration];
    scale.fillMode = kCAFillModeForwards;
    scale.removedOnCompletion = NO;
    
    CABasicAnimation *color = [CABasicAnimation animationWithKeyPath:@"backgroundColor"];
    [color setDuration:duration];
    color.fillMode = kCAFillModeForwards;
    color.removedOnCompletion = NO;
    color.toValue = (id)[UIColor grayColor].CGColor;
    
    CAAnimationGroup *circleAnimations = [CAAnimationGroup animation];
    circleAnimations.removedOnCompletion = NO;
    circleAnimations.fillMode = kCAFillModeForwards;
    [circleAnimations setDuration:duration];
    [circleAnimations setAnimations:@[scale, color]];
    
    // Animate progress
    CABasicAnimation *fadeIn = [CABasicAnimation animationWithKeyPath:@"opacity"];
    fadeIn.fromValue = @0.0;
    fadeIn.toValue = @1.0;
    fadeIn.duration = duration;
    fadeIn.fillMode = kCAFillModeForwards;
    fadeIn.removedOnCompletion = NO;
    
    [_progressLayer addAnimation:fadeIn forKey:@"fadeIn"];
    [_circleLayer addAnimation:circleAnimations forKey:@"circleAnimations"];
}
- (void)didTouchUp{
    
    CGFloat duration = 0.15;
    
    CABasicAnimation *scale = [CABasicAnimation animationWithKeyPath:@"transform.scale"];
    scale.fromValue = @0.97;
    scale.toValue =   @1.0;
    [scale setDuration:duration];
    scale.fillMode = kCAFillModeForwards;
    scale.removedOnCompletion = NO;
    CABasicAnimation *color = [CABasicAnimation animationWithKeyPath:@"backgroundColor"];
    color.fillMode = kCAFillModeForwards;
    color.removedOnCompletion = NO;
    color.toValue = (id)_foreColor.CGColor;
    
    CAAnimationGroup *animations = [CAAnimationGroup animation];
    animations.removedOnCompletion = NO;
    animations.fillMode = kCAFillModeForwards;
    [animations setDuration:duration]    ;
    [animations setAnimations:@[scale, color]];
    
    CABasicAnimation *fadeOut = [CABasicAnimation animationWithKeyPath:@"opacity"];
    fadeOut.fromValue = @1.0;
    fadeOut.toValue = @0.0;
    fadeOut.duration = duration*2;
    fadeOut.fillMode = kCAFillModeForwards;
    fadeOut.removedOnCompletion = NO;
    
    [_progressLayer addAnimation:fadeOut forKey:@"fadeOut"];
    [_circleLayer addAnimation:animations forKey:@"circleAnimations"];
}
- (void)setProgress:(CGFloat)newProgress{
    _progressLayer.strokeEnd = newProgress;
}

@end
