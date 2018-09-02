//
//  XBFindNearAddressViewModel.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBFindNearAddressViewModel.h"
#import "XBFindFriendCell.h"
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
    
    XBFindFriendCell *cell = [XBFindFriendCell cellWithTableView:tableView];
    cell.textLabel.textColor = [UIColor blackColor];
    if(indexPath.row == 0){
        cell.textLabel.textColor = [UIColor blueColor];
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
        NSIndexPath *path = [NSIndexPath indexPathForItem:0 inSection:0];
        self.lastSelectCellIndex = path;
    }
    AMapPOI *model = self.models[indexPath.row];
    cell.textLabel.text = model.name;
    cell.detailTextLabel.text = model.address;
    
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    return [XBFindFriendCell getCellHeight];
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    XBFindFriendCell *lastCell = [tableView cellForRowAtIndexPath:self.lastSelectCellIndex];
    lastCell.accessoryType = UITableViewCellAccessoryNone;
    
    
    XBFindFriendCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    cell.accessoryType = UITableViewCellAccessoryCheckmark;
    
    if (self.returnBlock) {
        self.returnBlock(indexPath);
    }
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    self.lastSelectCellIndex = indexPath;
    
}

@end
