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
    
    NSString *CellID = [NSString stringWithFormat:@"CellID%ld%ld", (long)indexPath.section,(long)indexPath.row];
    
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];;
    cell.textLabel.textColor = [UIColor blackColor];
    cell.accessoryType = UITableViewCellAccessoryNone;

    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellID];
        if(indexPath.row == 0){
            cell.textLabel.textColor = [UIColor blueColor];
//            cell.accessoryType = UITableViewCellAccessoryCheckmark;
//            NSIndexPath *path = [NSIndexPath indexPathForItem:0 inSection:0];
//            self.requestViewModel.lastSelectCellIndex = path;
//            
        }
    }
    if ((indexPath.item == self.lastSelectCellIndex.item)) {
        cell.accessoryType = UITableViewCellAccessoryCheckmark;
<<<<<<< HEAD
    }else{
        cell.accessoryType = UITableViewCellAccessoryNone;
=======
        NSIndexPath *path = [NSIndexPath indexPathForItem:0 inSection:0];
        self.lastSelectCellIndex = path;
>>>>>>> f3255247a79dd29fdc60c71bb1412e22e5b9a355
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
