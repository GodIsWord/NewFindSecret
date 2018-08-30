//
//  XBPublishLisonItemView.m
//  FindSecret
//
//  Created by yide zhang on 2018/8/26.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBPublishLisonItemView.h"
#import "XBGifImageView.h"

@interface XBPublishLisonItemView()<XBAudioManagerPlayDelegate>

@property(nonatomic,strong) UILabel *secondsLabel;
@property(nonatomic,strong) UILabel *miaoshuLabel;
@property(nonatomic,strong) XBGifImageView *gifImageView;

@property(nonatomic,assign) BOOL isSelected;

@end

@implementation XBPublishLisonItemView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = YES;
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapAction)];
        [self addGestureRecognizer:tap];
        [self initSubbView];
    }
    return self;
}

-(void)initSubbView
{
    UIView *backView = [[UIView alloc] initWithFrame:CGRectMake(10, 10, self.xb_width-20, self.xb_height-20)];
    backView.backgroundColor = [UIColor whiteColor];
    backView.layer.cornerRadius = 6;
    backView.layer.masksToBounds= YES;
    [self addSubview:backView];
    
    XBGifImageView *gifView = [[XBGifImageView alloc] initWithFrame:CGRectMake(0, 0, backView.xb_height, backView.xb_height)];
    [backView addSubview:gifView];
    gifView.xb_centerY = backView.xb_height/2;
    self.gifImageView = gifView;
    [gifView loadGIFWithPath:[self gifPath]];
    
    UILabel *miaoshulable = [[UILabel alloc] initWithFrame:CGRectMake(gifView.xb_right+5, 0, 80, 25)];
    miaoshulable.backgroundColor = backView.backgroundColor;
    miaoshulable.textColor = [UIColor blackColor];
    miaoshulable.xb_centerY = gifView.xb_centerY;
    miaoshulable.text = @"点击试听";
    [backView addSubview:miaoshulable];
    self.miaoshuLabel = miaoshulable;
    
    
    UILabel *seconds = [[UILabel alloc] initWithFrame:CGRectMake(backView.xb_width-45, 0, 40, 25)];
    seconds.backgroundColor = backView.backgroundColor;
    seconds.textColor = [UIColor grayColor];
    seconds.xb_centerY = miaoshulable.xb_centerY;
    seconds.textAlignment = NSTextAlignmentRight;
    [backView addSubview:seconds];
    self.secondsLabel = seconds;
    
    
    CAShapeLayer *borderLayer = [CAShapeLayer layer];
    borderLayer.strokeColor = [UIColor whiteColor].CGColor;   //虚线的颜色
    borderLayer.fillColor = [UIColor clearColor].CGColor;//填充的颜色
    borderLayer.path = [UIBezierPath bezierPathWithRect:self.bounds].CGPath;//设置路径
    borderLayer.frame = self.bounds;
    borderLayer.lineWidth = 1.f;
    borderLayer.lineDashPattern = @[@4, @2];
    [self.layer addSublayer:borderLayer];
    
    
}


-(void)tapAction
{
    self.isSelected = !self.isSelected;
}
-(void)setIsSelected:(BOOL)isSelected
{
    _isSelected = isSelected;
    if (_isSelected) {
        [_manager playAudioWithURL:[NSURL fileURLWithPath:[self.manager lastAudioPath]]];
        [_gifImageView startAnimation];
        _miaoshuLabel.text = @"点击暂停";
    }else{
        [_manager stopPlay];
        [_gifImageView stopAnimation];
        _miaoshuLabel.text = @"点击试听";
    }
}

-(NSString*)gifPath{
    NSString *path = [[NSBundle mainBundle] pathForResource:@"recordVoice" ofType:@"bundle"];
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {
        return nil;
    }
    path = [path stringByAppendingPathComponent:@"voice_small3x"];
    return path;
}

-(void)reloadView
{
    self.manager.playDelegate = self;
    if ([self.manager lastAudioDuration]>0) {
        self.secondsLabel.text = [NSString stringWithFormat:@"%.0fs",[self.manager lastAudioDuration]];
    }else{
        self.secondsLabel.text = @"";
    }
    self.userInteractionEnabled = ([self.manager lastAudioDuration]>0);
}


-(void)xbAudioManagerPlayerBeginInteruption:(XBAudioManager *)player
{
    
}
-(void)xbAudioManagerPlayerDidFinishPlaying:(XBAudioManager *)player successfully:(BOOL)flag
{
    self.isSelected = NO;
}
-(void)xbAudioManagerPlayerDecodeErrorDidOccur:(XBAudioManager *)player error:(NSError *)error
{
    self.isSelected = NO;
}



@end
