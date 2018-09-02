//
//  XBFindNearAddressViewModel.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBFindNearAddressViewModel.h"
#import <AMapSearchKit/AMapSearchKit.h>

@interface XBFindNearAddressViewModel()
@property(nonatomic,strong) NSIndexPath *lastSelectCellIndex;

@end

@implementation XBFindNearAddressViewModel
#pragma mark -  UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    return [self.models count];
    
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
//    NSString *CellID = [NSString stringWithFormat:@"CellID%ld%ld", (long)indexPath.section,(long)indexPath.row];
    
    UITableViewCell *cell;
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cell"];

    }else{
        cell = [tableView cellForRowAtIndexPath:indexPath];;
     
    }
    if(indexPath.row == 0){
        cell.textLabel.textColor = [UIColor blueColor];
    }
    if ((indexPath.item == self.lastSelectCellIndex.item)) {
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
        self.lastSelectCellIndex = indexPath;
    }else{
        cell.accessoryType = UITableViewCellAccessoryNone;
    }

    AMapPOI *model = self.models[indexPath.row];
    cell.textLabel.text = model.name;
    cell.detailTextLabel.text = model.address;

    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    return 64;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    UITableViewCell *lastCell = [tableView cellForRowAtIndexPath:self.lastSelectCellIndex];
    lastCell.accessoryType = UITableViewCellAccessoryNone;


    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    cell.accessoryType = UITableViewCellAccessoryCheckmark;

    if (self.returnBlock) {
        self.returnBlock(indexPath);
    }
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    self.lastSelectCellIndex = indexPath;
    
}

@end
