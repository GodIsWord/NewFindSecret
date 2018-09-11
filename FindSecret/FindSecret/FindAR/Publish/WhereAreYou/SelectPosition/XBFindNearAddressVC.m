//
//  XBFindNearAddressVC.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBFindNearAddressVC.h"
#import "UISearchBar+MP.h"
#import "XBFindNearAddressViewModel.h"
#import <MAMapKit/MAMapKit.h>
#import <AMapSearchKit/AMapSearchKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>
#import "MJRefresh.h"
#import "XBNoResultHeadView.h"
#import "UIButton+Block.h"

@interface XBFindNearAddressVC ()<UITableViewDataSource,UITableViewDelegate,UISearchDisplayDelegate,MAMapViewDelegate,AMapSearchDelegate>
{
    NSString *_searchTypesStr;
    
    AMapPOIAroundSearchRequest *_aroundSearchRequest;
    
    AMapPOIKeywordsSearchRequest *_keywordsSearchRequest;
    
    UIImage *_shotImg;
    
    AMapPOI *_searchSelectModel;
    
}

@property (nonatomic, strong) NSMutableArray *searchDataArr;
@property(nonatomic,strong) XBFindNearAddressViewModel *requestViewModel;
@property (nonatomic, strong) UISearchBar *searchBar;
@property(nonatomic,strong) UITableView *searchResultsTableView;
@property (nonatomic, strong) UISearchDisplayController *searchController;


@property (nonatomic, strong) MAMapView *mapView;
@property (nonatomic, strong) AMapSearchAPI *search;
@property (nonatomic, strong) CLLocation *currentLocation;
@property (nonatomic, strong) CLLocation *dingLocation;
@property (strong,nonatomic) UIActivityIndicatorView *reloadView;


@end

@implementation XBFindNearAddressVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _searchTypesStr = @"地名地址信息|餐饮服务|购物服务|生活服务|风景名胜|公司企业";
    
    [self initNavView];
    [self initTableView];
    [self initMapView];
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cell"];

    [self.view addSubview:self.reloadView];
    
}
#pragma mark - initTableView
- (void)initTableView{
    
    UIImageView *imageBack = [[UIImageView alloc]initWithFrame:self.view.bounds];
    imageBack.backgroundColor = TABLE_BG_COLOR;
    self.tableView.backgroundView = imageBack;

    self.tableView.showsVerticalScrollIndicator = NO;
    self.tableView.dataSource = self.requestViewModel;
    self.tableView.delegate = self.requestViewModel;
    self.tableView.backgroundColor = TABLE_BG_COLOR;
    self.tableView.tableHeaderView = self.searchBar;
    
    [self setUpTableFootViewWithTitle:@"定位中..." andFootViewH:60];
    _searchResultsTableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    [self setUpRefreshViewWithView:self.tableView];

    
}
- (void)initNavView{
    
    self.titleStr = @"所在位置";
    
    UIButton *btn1 = [self rl_BarBtnWithTitle:@"取消"];
    [btn1 addActionHandler:^(NSInteger tag) {
        [self.navigationController popViewControllerAnimated:YES];
    }];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:btn1];

    UIButton *btn = [self rl_BarBtnWithTitle:@"确定"];
    [btn addActionHandler:^(NSInteger tag) {
        if (self.requestViewModel.models.count>0) {
            AMapPOI *model = self->_searchSelectModel;
            if (self.returnBlock) {
                if (model.address.length>0) {
                    self.returnBlock(model.city,model.name,model.address,model.location.latitude,model.location.longitude,model.tel,self->_shotImg);
                }else{
                    self.returnBlock(@"",@"",@"",0,0,nil,nil);
                }
            }
            
            [self.navigationController popViewControllerAnimated:YES];
        }else{
            //[self showHoderView:@"还没有选择位置"];
        }
        
    }];
    self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc]initWithCustomView:btn];
    
}
//更改tableview样式
- (instancetype)initWithStyle:(UITableViewStyle)style {
    return [super initWithStyle:UITableViewStylePlain];
}
- (void)initMapView{
    
    _search = [[AMapSearchAPI alloc]init];
    _search.delegate = self;
    
    _mapView = [[MAMapView alloc]initWithFrame:CGRectZero];;
    _mapView.delegate = self;
    [self.view addSubview:_mapView];
    
    _mapView.showsUserLocation = YES;
    
    _aroundSearchRequest = [[AMapPOIAroundSearchRequest alloc]init];
    _aroundSearchRequest.offset = 30;
    /* 按照距离排序. */
    _aroundSearchRequest.sortrule = 0;
    _aroundSearchRequest.requireExtension  = YES;
    _aroundSearchRequest.types = _searchTypesStr;
    
    
    _keywordsSearchRequest = [[AMapPOIKeywordsSearchRequest alloc]init];
    _keywordsSearchRequest.offset = 50;
    /* 按照距离排序. */
    _keywordsSearchRequest.sortrule = 1;
    _keywordsSearchRequest.requireExtension  = YES;
    _keywordsSearchRequest.cityLimit           = YES;
    _keywordsSearchRequest.requireSubPOIs      = YES;
    _keywordsSearchRequest.types = _searchTypesStr;
    
}
- (void)mapView:(MAMapView *)mapView didUpdateUserLocation:(MAUserLocation *)userLocation updatingLocation:(BOOL)updatingLocation
{
    _mapView.showsUserLocation = NO;
    _dingLocation = [userLocation.location copy];
    _currentLocation = _dingLocation;
    
    [self loadNewData];
    
}
- (void)AMapSearchRequest:(id)request didFailWithError:(NSError *)error
{
    [self baseEndRefresh];
    [_reloadView stopAnimating];
}

- (void)onPOISearchDone:(AMapPOISearchBaseRequest *)request response:(AMapPOISearchResponse *)response
{
    if ([request isKindOfClass:[AMapPOIAroundSearchRequest class]]) {
        
        [_reloadView stopAnimating];
        [self baseEndRefresh];
        
        [self layerModelDataWithArr:response.pois];
        
        AMapPOI *moddel = self.dataArr[0];
        if(![moddel.name isEqualToString:@"不显示位置"]){
            _searchSelectModel = [[AMapPOI alloc]init];
            _searchSelectModel.name  = @"不显示位置";
            _searchSelectModel.address = @"";
            [self.dataArr insertObject:_searchSelectModel atIndex:0];

        }
        
        self.requestViewModel.models = self.dataArr;
        [self.tableView reloadData];
        
        self.tableView.tableFooterView = [[UIView alloc]initWithFrame:CGRectZero];
        if (self.dataArr.count == 0) {
            self.tableView.mj_footer.hidden = YES;
            [self layerTableFootViewWithTitle:@"还没有数据哦" andFootViewH:60];
        }else{
            if (response.pois.count==0) {
                self.tableView.mj_footer.hidden = YES;
            }else{
                self.tableView.mj_footer.hidden = NO;
            }
        }
        
        
    }
    
    
    if ([request isKindOfClass:[AMapPOIKeywordsSearchRequest class]]) {
        
//        if (response.pois.count==0) {
            XBNoResultHeadView *noResultLabel = [[XBNoResultHeadView alloc]initWithFrame:CGRectMake(0, 0, ScreenWidth, 70)];
            noResultLabel.textStr = [NSString stringWithFormat:@"没有找到?\n在这里添加一个新的地点: \"%@\"",_searchBar.text];
            UITapGestureRecognizer *tap1 = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(tap_noResultLabel)];
            [noResultLabel addGestureRecognizer:tap1];
            _searchResultsTableView.tableFooterView = noResultLabel;
//        }
        [_searchDataArr removeAllObjects];
        [_searchDataArr  addObjectsFromArray:response.pois];
        [_searchResultsTableView reloadData];
        
    }
}
// 创建新位置
- (void)tap_noResultLabel
{
    
    if (self.returnBlock) {
        self.returnBlock(@"",_searchBar.text,@"",0,0,nil,nil);
    }
    [self.navigationController popViewControllerAnimated:YES];
    
}

#pragma mark -
- (void)searchRequestNearPIOSWithPage:(NSString *)page
{
    if (_currentLocation==nil||_search==nil) {
        return;
    }
    
    _aroundSearchRequest.location =  [AMapGeoPoint locationWithLatitude:_currentLocation.coordinate.latitude longitude:_currentLocation.coordinate.longitude];
    _aroundSearchRequest.page = [page integerValue];
    [self.search AMapPOIAroundSearch:_aroundSearchRequest];
}
- (void)getData:(NSString*)page{
    
    [self searchRequestNearPIOSWithPage:page];
}
#pragma mark -  UITableViewDelegate
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.searchDataArr.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    AMapPOI *model = self.searchDataArr[indexPath.row];
    UITableViewCell *cell ;
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cell"];

    }else{
        cell = [tableView cellForRowAtIndexPath:indexPath];;
        
    }
  
    cell.textLabel.text = model.name;
    cell.detailTextLabel.text = model.address;

    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 64;
}
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return   0.02;
}
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    return nil;
    
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    return 0.01;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    [_searchController setActive:NO animated:YES];
    
    AMapPOI *model = self.searchDataArr[indexPath.row];
    [self didseletIndex:model andIsSearch:YES];
    
    
}
- (void)didseletIndex:(AMapPOI *)model andIsSearch:(BOOL)issearch
{
    
    _currentLocation =  [[CLLocation alloc]initWithLatitude:model.location.latitude longitude:model.location.longitude];
    
    _searchSelectModel = model;
    
    if(self.searchDataArr.count>0){
        
        AMapPOI *model = _searchSelectModel;
        if (self.returnBlock) {
            self.returnBlock(model.city,model.name,model.address,model.location.latitude,model.location.longitude,model.tel,_shotImg);
        }
        [self.navigationController popViewControllerAnimated:YES];
    }
    
}
#pragma mark - scrollview delegate
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    if (scrollView == self.tableView) {
        CGFloat tableCH = self.tableView.contentOffset.y;
        CGFloat tableH = self.tableView.contentSize.height;
        if ( fabs(tableH - tableCH) <  ScreenHeight+64){
            [self.tableView.mj_footer endRefreshing];
        }
    }
    
}

#pragma mark -  setter and getter

-(XBFindNearAddressViewModel *)requestViewModel
{
    if (!_requestViewModel) {
        _requestViewModel = [[XBFindNearAddressViewModel alloc]initWithSelectBlock:^(NSIndexPath *indexPath) {
            
            AMapPOI *model = self.dataArr[indexPath.row];
            [self didseletIndex:model andIsSearch:NO];
            
            
        }];
        //[_requestViewModel setSelfVC:(MPBaseViewController *)self];
    }
    return _requestViewModel;
}
- (UISearchBar *)searchBar
{
    if (_searchBar == nil) {
        UISearchBar *searchBar = [[UISearchBar alloc] initWithFrame:CGRectZero];
        searchBar.placeholder = @"搜索附近位置";
        [searchBar sizeToFit];
        [searchBar setupSearchBarSearchImage:[UIImage imageNamed:@"首页-顶部-搜索"]];
        
        //searchBar.frame = CGRectMake(0, 0, ScreenWidth, searchBar.height);
        _searchBar = searchBar;
        _searchController = [[UISearchDisplayController alloc] initWithSearchBar:searchBar contentsController:self];
        _searchController.searchResultsDataSource = self;
        _searchController.searchResultsDelegate = self;
        _searchController.delegate = self;
        _searchResultsTableView = _searchController.searchResultsTableView;
        [self layoutSearchBar:YES];
        
    }
    return _searchBar;
}
- (NSMutableArray *)searchDataArr
{
    if (_searchDataArr == nil) {
        _searchDataArr = [NSMutableArray new];
    }
    return _searchDataArr;
}

#pragma mark - UISearchDisplayController delegate
- (BOOL)searchDisplayController:(UISearchDisplayController *)controller shouldReloadTableForSearchString:(NSString *)searchString
{
    [self searchMyFriends:searchString];
    
    return YES;
}

- (void) searchDisplayControllerWillBeginSearch:(UISearchDisplayController *)controller
{
    [self layoutSearchBar:NO];
}
- (void) searchDisplayControllerDidEndSearch:(UISearchDisplayController *)controller
{
    [self layoutSearchBar:YES];
    
}
- (void) searchDisplayControllerDidBeginSearch:(UISearchDisplayController *)controller
{
    [controller.searchBar setupSearchControllerCancleBtnWithColor:nil andBackColor:nil andFontSize:14];
    
    //更改遮罩 透明度
    UIView *supV = controller.searchResultsTableView.superview;
    UIView *supsupV = supV.superview;
    
    for (UIView *view in supsupV.subviews) {
        for (UIView *sencondView in view.subviews) {
            if ([sencondView isKindOfClass:[NSClassFromString(@"_UISearchDisplayControllerDimmingView") class]])
            {
                NSLog(@"-_UISearchDisplayControllerDimmingView--%f-----",sencondView.alpha);
                sencondView.alpha = 0.25;
                //                sencondView.backgroundColor = [UIColor whiteColor];
            }
        }
    }
    
}

#pragma mark -
-(void)layoutSearchBar:(BOOL)isgray
{
    
    [_searchBar setupSearchBarBackColor:isgray?TABLE_BG_COLOR:[UIColor clearColor]];
    
}


#pragma mark - searchdata
- (void)searchMyFriends:(NSString *)searchStr
{
    
    _keywordsSearchRequest.location =  [AMapGeoPoint locationWithLatitude:_dingLocation.coordinate.latitude longitude:_dingLocation.coordinate.longitude];
    _keywordsSearchRequest.keywords = searchStr;
    [_search AMapPOIKeywordsSearch:_keywordsSearchRequest];
    
}

#pragma mark - Getter
- (UIActivityIndicatorView *)reloadView
{
    if (_reloadView == nil) {
        CGFloat top = self.tableView.tableHeaderView.xb_height+CHOOSEMAPVIEWMAPH;
        CGFloat height = VIEWHEIGHT - top +self.tableView.tableHeaderView.xb_height;
        UIActivityIndicatorView *testActivityIndicator = [[UIActivityIndicatorView alloc]initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
        testActivityIndicator.backgroundColor = [UIColor whiteColor];
        testActivityIndicator.frame = CGRectMake(0, top, ScreenWidth, height);
        [testActivityIndicator setHidesWhenStopped:YES]; //当旋转结束时隐藏
        _reloadView = testActivityIndicator;
    }
    return _reloadView;
}

@end


