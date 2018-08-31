//
//  XHSystemCollectionViewController.h
//  XHRefreshControlExample
//
//  Created by Jiangliyin on 14-9-14.
//

#import <UIKit/UIKit.h>


@interface XHSystemCollectionViewController : UICollectionViewController

/**
 *  大量数据的数据源
 */
@property (nonatomic, strong) NSMutableArray *dataSource;

/**
 *  加载本地或者网络数据源
 */
- (void)loadDataSource;

@end
