//
//  XBTextColorController
//  调色板
//
//  Created by long on 13-6-18.
//  Copyright (c) 2013年 long. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Palette.h"
#import "SevenColorView.h"


@protocol TextColorDelegate<NSObject>
- (void)showTextColor:(UIColor *)_color;

@end
@interface XBTextColorController : UIViewController<PaletteDelegate,SevenColorViewDelegate>
{

    Palette *palette;
    SevenColorView *sevenColorView;
    
}
@property (strong, nonatomic) id<TextColorDelegate> delegate;
- (void)changeTextColor:(UIColor *)color;
@end
