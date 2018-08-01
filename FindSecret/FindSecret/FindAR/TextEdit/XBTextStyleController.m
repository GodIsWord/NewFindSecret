//
//  XBTextStyleController.m
//  FindSecret
//
//  Created by xb on 2018/7/28.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBTextStyleController.h"

@interface XBTextStyleController ()
@property (nonatomic, strong) NSArray *fontFamilyArray;
@property (nonatomic, strong) NSMutableArray *fontArray;

@end

@implementation XBTextStyleController

- (void)viewDidLoad {
    [super viewDidLoad];
    _fontFamilyArray = [UIFont familyNames];
    _fontArray = [NSMutableArray array];
    for (NSString* familyName in _fontFamilyArray) {
        NSArray *fontArray = [UIFont fontNamesForFamilyName:familyName];
        [_fontArray addObject:fontArray];
    }
    
    static NSString *ID = @"cell";
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:ID];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return _fontArray.count;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSArray* fontArr = [_fontArray objectAtIndex:section];
    return fontArr.count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 64;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSString* fontName = [[_fontArray objectAtIndex:section] objectAtIndex:row];
    
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:indexPath];
    cell.textLabel.text = fontName;
    cell.textLabel.font = [UIFont fontWithName:fontName size:15];
    NSString* fontFamilyName = [_fontFamilyArray objectAtIndex:section];
    fontFamilyName = [fontFamilyName stringByReplacingOccurrencesOfString:@" " withString:@""];
    if ([fontFamilyName isEqualToString:@"Bodoni72Oldstyle"]) {
        fontFamilyName = @"BodoniSvtyTwoOSITCTT";
    }
    NSString* fontDetail = [fontName stringByReplacingOccurrencesOfString:fontFamilyName withString:@""];
    fontDetail = [fontDetail stringByReplacingOccurrencesOfString:@"-" withString:@""];
    cell.detailTextLabel.text = fontDetail;
    return cell;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    return [_fontFamilyArray objectAtIndex:section];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSString* fontName = [[_fontArray objectAtIndex:section] objectAtIndex:row];
    
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if ([self.delegate respondsToSelector:@selector(showTextStyle:)]) {
        [self.delegate showTextStyle:fontName];
    }

//    NSLog(@"字体名称为：%@",fontName);
    [self dismissViewControllerAnimated:YES completion:nil];
}


#pragma mark -- 代理
-(void)changeTextStyle{
    
}
@end
