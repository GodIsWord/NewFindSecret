//
//  XBRecorderTestViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/31.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecorderTestViewController.h"

#import "XBRecordAudioView.h"
#import "XBRecordAudio.h"
#import "XBPlayAudio.h"

#import "XBTimer.h"

#import "XBRecordManager.h"

@interface XBRecorderTestViewController ()

//@property(nonatomic,strong) XBRecordAudio *recorder;
//@property(nonatomic,strong) XBPlayAudio *audioPlayer;
//
//@property(nonatomic,strong) XBTimer *timer;

@property(nonatomic,strong)XBRecordManager *recorderManager;


@end

@implementation XBRecorderTestViewController

static int type = 0;

-(void)dealloc{
    NSLog(@"dealloc");
//    [self.timer invalidate];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor greenColor];
    
//    self.recorder = [[XBRecordAudio alloc] init];
//    self.audioPlayer = [[XBPlayAudio alloc] init];
    
    self.recorderManager = [[XBRecordManager alloc] init];
    
    [self initSubbview];
}

-(void)initSubbview{
    CGFloat screenHeight = UIScreen.mainScreen.bounds.size.height;
    CGFloat screenWidth = UIScreen.mainScreen.bounds.size.width;
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = [UIColor lightGrayColor];
    [btn setTitle:@"开始录音" forState:UIControlStateNormal];
    [btn setTitle:@"关闭录音" forState:UIControlStateSelected];
    [btn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    btn.frame = CGRectMake(0, screenHeight-44, screenWidth, 44);
    [self.view addSubview:btn];
    
    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    
    
    

    UIButton *btn1 = [UIButton buttonWithType:UIButtonTypeCustom];
    btn1.backgroundColor = [UIColor lightGrayColor];
    [btn1 setTitle:@"开始播放" forState:UIControlStateNormal];
    [btn1 setTitle:@"停止播放" forState:UIControlStateSelected];
    [btn1 setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    btn1.frame = CGRectMake(0, screenHeight-144, screenWidth, 44);
    [self.view addSubview:btn1];
    
    [btn1 addTarget:self action:@selector(btnVoiceAction:) forControlEvents:UIControlEventTouchUpInside];
    
//    self.timer = [XBTimer timerWithTimeInterval:0.01 target:self selector:@selector(timerAction) repeats:YES];
//
//    [self.timer fire];
    
    
    UIView *longPressView = [[UIView alloc] initWithFrame:CGRectMake(0, screenHeight-110, screenWidth, 44)];
    longPressView.backgroundColor = [UIColor blueColor];
    longPressView.userInteractionEnabled = YES;
    [self.view addSubview:longPressView];
    
    UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPress:)];
    [longPressView addGestureRecognizer:longPress];
    
}

-(void)timerAction{
    switch (type) {
        case 0:
        {
//            [XBRecordAudioView hidden];
        }
            break;
        case 1:
        {
//            [XBRecordAudioView showWithVolume:self.recorder.currentVolume];
        }
            break;
        case 2:
        {
//            [XBRecordAudioView showWithVolume:self.audioPlayer.currentVolume];
        }
            break;
            
        default:
            break;
    }
    
}

-(void)longPress:(UIGestureRecognizer*)sender{
    if ([sender state] == UIGestureRecognizerStateBegan) {
//         [self.recorder start];
        type = 1;
    }else if([sender state] == UIGestureRecognizerStateEnded){
//        [self.recorder stop];
        type = 0;
    }
    
}


-(void)btnAction:(UIButton*)btn{
    btn.selected = !btn.selected;
    if (btn.selected) {
//        [self.recorder start];
        type = 1;
        [self.recorderManager startRecord];
    }else{
//        [self.recorder stop];
        type = 0;
        [self.recorderManager endRecord];
    }
}
-(void)btnVoiceAction:(UIButton*)btn{
    btn.selected = !btn.selected;
    if (btn.selected) {
//        [self.audioPlayer playWithContentOfURL:[NSURL URLWithString:[XBRecordAudio audioPath]] error:nil];
        type = 2;
        [self.recorderManager playAudioWithURL:[NSURL URLWithString:[self.recorderManager lastAudioPath]]];
    }else{
//        [self.audioPlayer stop];
        type = 0;
        [self.recorderManager stopPlay];
    }
}

@end
