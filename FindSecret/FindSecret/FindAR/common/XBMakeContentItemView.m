//
// Created by pillar on 2018/8/18.
// Copyright (c) 2018 Mac. All rights reserved.
//

#import "XBMakeContentItemView.h"
#import "XBMacroDefinition.h"

@interface XBMakeContentItemView ()
@property (weak, nonatomic) IBOutlet UIView *contentView;

@end


@implementation XBMakeContentItemView {

}
- (IBAction)pan:(UIPanGestureRecognizer *)recognizer {
    
    switch (recognizer.state) {
        case UIGestureRecognizerStateBegan:{
            
            break;
        }
        case UIGestureRecognizerStateChanged:{
            CGPoint translation = [recognizer translationInView:recognizer.view];
            recognizer.view.center = CGPointMake(recognizer.view.center.x + translation.x, recognizer.view.center.y + translation.y);
            [recognizer setTranslation:CGPointMake(0, 0) inView:recognizer.view];
            
            break;
        }
        case UIGestureRecognizerStateEnded:{
            
            break;
        }
        default:
            break;
    }
}

+ (instancetype)contentItemViewWithAttributedString:(NSAttributedString *)attributedString {
    UILabel *contentLab = [[UILabel alloc] init];
    contentLab.numberOfLines = 0;
    contentLab.attributedText = attributedString;
    [contentLab sizeToFit];
    
    XBMakeContentItemView *view = [[[UINib nibWithNibName:@"XBMakeContentItemView" bundle:nil] instantiateWithOwner:nil options:nil] firstObject];
    [view.contentView addSubview:contentLab];
    
    CGSize size = contentLab.bounds.size;
    if (size.width < 80) {
        size.width = 80;
    }
    size.height += 40;
    view.bounds = (CGRect){{0,0},size};
    view.center = CGPointMake(SCREEN_WIDTH/2.0, SCREEN_HEIGHT/2);
    return view;
}



@end
