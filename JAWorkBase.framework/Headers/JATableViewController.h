

#import "JABaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    RefreshSupportAll,    // 同时支持 下拉刷新、上拉加在更多
    RefreshSupportPull,   // 下拉刷新
    RefreshSupportPush,   // 上拉加载更多
    RefreshSupportNone    // 都不支持
}RefreshSupportType;

@class JARefreshHeader;
@class JAAutoFooter;

@interface JATableViewController : JABaseViewController

@property (nonatomic, assign) UITableViewStyle     refTableStyle; //Tableview类型 default UITableViewStylePlain
//上拉，下拉支持的种类
@property (nonatomic, assign) RefreshSupportType refreshSupportType;
/* 默认值
 * style = UITableViewStylePlain
 * separatorStyle = UITableViewCellSeparatorStyleNone
 * @xzoscar
 */
@property (nonatomic,strong) UITableView *tableView; // default not nil
//拉下刷新头部view
@property (nonatomic, strong) JARefreshHeader *headerView;

//上拉加载尾部view
@property (nonatomic, strong) JAAutoFooter *footerView;

/*
 * 子类中 务必实现的代理函数
 */
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

//分页数
@property (nonatomic, assign) NSInteger     currentPage;
//分页数据条数
@property (nonatomic, assign) NSInteger     pageSize;
//是否最后一页
@property (nonatomic, assign) BOOL          isLastPage;
//是否请求中
@property (nonatomic, assign) BOOL          isLoading;
//是否是刷新
@property (nonatomic, assign) BOOL          isFromHead;
//判断是否处在加载完成，恢复contentInset的状态
@property (nonatomic, assign) BOOL          isBackingToTop;
//列表置顶按钮
@property (nonatomic, strong) UIButton *btnScrollToTop;
//是否展示列表置顶按钮
@property (nonatomic) BOOL isShow;


/**
 *  下拉刷新
 */
//- (void)refreshData;
- (void)refreshDataEnd:(void (^)(BOOL isEnd,double time))end;

/**
 *  刷新完成
 */
- (void)refreshDataComplete;

/**
 *  加载更多
 */
- (void)loadMoreDataMore:(void (^)(BOOL isMore,double time))more;


/**
 *  加载更多完成
 */
- (void)loadMoreDataComplete;

/**
 *  加载完毕，没有更多
 */
- (void)loadNoMoreData;

@end

NS_ASSUME_NONNULL_END
