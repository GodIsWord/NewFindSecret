//
//  XBRecorderTestViewController.m
//  FindSecret
//
//  Created by yidezhang on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBRecorderTestViewController.h"
#import "XBRecordAudio.h"
#import "XBPlayAudio.h"

@interface XBRecorderTestViewController ()
@property (weak, nonatomic) IBOutlet UILabel *recorderLabel;
@property (weak, nonatomic) IBOutlet UILabel *playLabel;
@property (nonatomic,strong) XBRecordAudio *recorder;
@property (nonatomic,strong) XBPlayAudio *player;
@property (nonatomic,strong) NSTimer *timer;
@end

@implementation XBRecorderTestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    [self initData];
    
    __weak typeof(self) weakSelf = self;
    if (@available(iOS 10.0, *)) {
        self.timer = [NSTimer scheduledTimerWithTimeInterval:0.1 repeats:YES block:^(NSTimer * _Nonnull timer) {
            weakSelf.recorderLabel.text = [NSString stringWithFormat:@"录音 音频：%.2f 时长:%.2f,size:%ld",[weakSelf.recorder currentVolume],weakSelf.recorder.duration,weakSelf.recorder.audioSize];
            weakSelf.playLabel.text = [NSString stringWithFormat:@"播放 音频：%.2f 时长:%.2f,size:%ld",[weakSelf.player currentVolume],weakSelf.player.duration,weakSelf.player.audioSize];
        }];
    } else {
        // Fallback on earlier versions
    }
    
}



-(void)initData{
    self.recorder = [[XBRecordAudio alloc] init];
    self.player = [[XBPlayAudio alloc] initWithContentOfURL:[NSURL URLWithString:[XBRecordAudio audioPath]] error:nil];
}

- (IBAction)testRecorder:(UISegmentedControl *)sender {
    
    switch (sender.selectedSegmentIndex) {
        case 0:
        {
            
            
        }
            break;
        case 1:
        {
            [self.recorder stop];
        }
            break;
        case 2:
        {
            [self.player play];
        }
            break;
        case 3:
        {
            [self.player stop];
        }
            break;
        case 4:
        {
            [self.recorder start];
        }
            break;
            
        default:
            break;
    }
    
}

@end
