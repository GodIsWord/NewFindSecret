//
//  XBBaseTableViewController.m
//  FindSecret
//
//  Created by xb on 2018/8/1.
//  Copyright © 2018年 Mac. All rights reserved.
//

#import "XBBaseTableViewController.h"
#import "MJRefresh.h"
#import "XYString.h"

@interface XBBaseTableViewController ()<XHRefreshControlDelegate>
{
    NSInteger _pageNumber;
    NSString *_nodataTitle;
}



@end
@implementation XBBaseTableViewController
- (void)dealloc
{
    [MPNotificationCenter removeObserver:self];
}
#pragma mark -
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated]; 
   // [MPShowHoderViewClient hoderViewRemove];
    
    if (self.refreshCtrol){
        [self.refreshCtrol endPullDownRefreshing];
    }
}
#pragma mark - showHoderView
- (void)showHoderView:(NSString *)message
{
   // [MPShowHoderViewClient showHoderView:message];
}
#pragma mark -
- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    _nodataTitle = @"还没有数据哦";
    self.loadMoreRefreshed = YES;
    self.pullDownRefreshed = NO;
    
    self.view.backgroundColor = [UIColor whiteColor];
    UIView *baseView = [[UIView alloc]initWithFrame:CGRectMake(0, 0, 0, 0)];
    [self.view addSubview:baseView];
    
  
    
}

#pragma mark - init tableView

/**
 *  刷新控件进入开始刷新状态的时候调用
 */
- (void)loadMoreData{
    [self.dataTempArr removeAllObjects];
    [self.dataTempArr addObjectsFromArray:self.dataArr];
    _pageNumber++;
    NSString *page = [NSString stringWithFormat:@"%li",(long)_pageNumber];
    [self getData:page];
}
//加载调用的方法
- (void)loadNewData{
    _pageNumber = 1;
    [self.dataTempArr removeAllObjects];
    [self getData:@"1"];
}
- (void)getData:(NSString*)page{
}
-(void)layerModelDataWithArr:(NSArray *)models{
    
    if (_pageNumber == 1) {
        [self.dataTempArr removeAllObjects];
    }
    [self.dataTempArr addObjectsFromArray:models];
    [self.dataArr removeAllObjects];
    [self.dataArr addObjectsFromArray:self.dataTempArr];
}
-(void)layeNextPage{
    
    self.tableView.tableFooterView = [[UIView alloc]initWithFrame:CGRectZero];
    if (self.dataArr.count == 0) {
        self.tableView.mj_footer.hidden = YES;
        [self layerTableFootViewWithTitle:_nodataTitle andFootViewH:60];
    }else{
        self.tableView.mj_footer.hidden = NO;
    }
    
}

#pragma mark -  上拉 下拉
- (void)endMoreOverWithMessage:(NSString *)message {
    [self.refreshCtrol endMoreOverWithMessage:message];

}
- (void)setUpRefreshViewWithView:(UIScrollView *)vi
{
    if (self.pullDownRefreshed) {
        _refreshCtrol = [[XHRefreshControl alloc] initWithScrollView:vi delegate:self];
        _refreshCtrol.hasStatusLabelShowed = NO;
        _refreshCtrol.circleColor = [UIColor grayColor];
        _refreshCtrol.circleLineWidth = 1.0;
        _refreshCtrol.indicatorColor = [UIColor lightGrayColor];
    }

    if (self.loadMoreRefreshed) {
        // 2.上拉加载更多(进入刷新状态就会调用self的footerRereshing)
        MJRefreshAutoStateFooter *footer = [MJRefreshAutoStateFooter footerWithRefreshingTarget:self refreshingAction:@selector(loadMoreData)];
        vi.mj_footer = footer;
        [footer setTitle:@"上拉可以加载更多数据了" forState:MJRefreshStateIdle];
        [footer setTitle:@"松开马上加载更多数据了" forState:MJRefreshStatePulling];
        [footer setTitle:@"正在帮你加载中" forState:MJRefreshStateRefreshing];
    }
    
    
}
- (void)baseEndRefresh
{
    if (self.pullDownRefreshed) {
        [_refreshCtrol endPullDownRefreshing];
    }
    if (self.loadMoreRefreshed) {
        [self.tableView.mj_footer endRefreshing];
    }

}
- (void)footerEndRefreshing{
    if (self.loadMoreRefreshed) {
        [self.tableView.mj_footer endRefreshing];
    }
}
#pragma mark - 刷新 XHRefreshControl Delegate
- (void)beginPullDownRefreshing {
    [self loadNewData];
}
- (void)beginLoadMoreRefreshing{
    [self loadMoreData];
}
- (BOOL)isPullDownRefreshed {
    return self.pullDownRefreshed;
}
- (BOOL)isLoadMoreRefreshed {
    return NO;
}
- (XHRefreshViewLayerType)refreshViewLayerType {
    return XHRefreshViewLayerTypeOnScrollViews;
}
- (XHPullDownRefreshViewType)pullDownRefreshViewType {
    return XHPullDownRefreshViewTypeActivityIndicator;
}
- (NSString *)displayAutoLoadMoreRefreshedMessage {
    return @"";
}

#pragma mark -
- (void)layerTableFootViewWithTitle:(NSString *)titlestr andFootViewH:(CGFloat)height;
{
    if (self.dataArr.count==0) {
        [self setUpTableFootViewWithTitle:titlestr andFootViewH:height];
    }
}
- (void)setUpTableFootViewWithTitle:(NSString *)titlestr andFootViewH:(CGFloat)height
{
    UILabel *contentLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, 0, ScreenWidth, height)];
    contentLabel.textAlignment = NSTextAlignmentCenter;
    contentLabel.text = titlestr;
    contentLabel.backgroundColor = [UIColor clearColor];
    contentLabel.font = [UIFont systemFontOfSize:15];
    contentLabel.textColor = [UIColor colorWithWhite:225/255.0 alpha:1];
    self.tableView.tableFooterView = contentLabel;
}



#pragma mark - 常见控件 创建

- (UIButton*)getButton{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    return button;
}

- (UIButton *)rl_BarBtnWithTitle:(NSString *)titleStr
{
    UIFont *titleFont = SystemFont(15);
    CGFloat titlewidth = [XYString WidthForString:titleStr withSizeOfFont:16];
    
    UIButton *rightBarBtn = [self getButton];
    rightBarBtn.frame = CGRectMake(0,0, titlewidth, NavItemH);
    [rightBarBtn setTitleColor:NAVtextCOLOR forState:0];
    [rightBarBtn setTitle:titleStr forState:0];
    [rightBarBtn setTitleColor:[UIColor lightGrayColor] forState:UIControlStateDisabled];
    rightBarBtn.titleLabel.font = titleFont;
    return rightBarBtn;
}

#pragma mark -  setter and getter
- (void)setTitleStr:(NSString *)titleStr
{
    _titleStr = titleStr;
    self.navigationItem.title = titleStr;

}
- (NSMutableArray *)dataArr
{
    if (!_dataArr) {
        _dataArr = [NSMutableArray array];
    }
    return _dataArr;
}
- (NSMutableArray *)dataTempArr
{
    if (!_dataTempArr) {
        _dataTempArr = [NSMutableArray array];
    }
    return _dataTempArr;
}

- (void)setPageNumber:(NSInteger)page{
    _pageNumber = page;
}
- (void)setFootHidden:(BOOL)hidden{
    self.tableView.mj_footer.hidden = hidden;
}

@end
