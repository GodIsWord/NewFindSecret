//
//  XHSystemCollectionViewController.m
//  XHRefreshControlExample
//
//  Created by Jiangliyin on 14-9-14.
//

#import "XHSystemCollectionViewController.h"

@interface XHSystemCollectionViewController ()


@end

@implementation XHSystemCollectionViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.collectionView.alwaysBounceVertical = YES;
}

#pragma mark - Publish Method

- (void)loadDataSource {
    // in subClass
}

#pragma mark - UICollectionView DataSource

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
  return 1;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
  return self.dataSource.count;
}

// The cell that is returned must be retrieved from a call to -dequeueReusableCellWithReuseIdentifier:forIndexPath:
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
  // in subClass
  return nil;
}

@end
