
//标签翻页视图

#import <UIKit/UIKit.h>

#import "JARefreshHeader.h"
#import "JAAutoFooter.h"

NS_ASSUME_NONNULL_BEGIN

//翻页视图代理方法
@protocol JAPageViewDetegate <NSObject>

@required
//头部刷新
- (BOOL)refreshHeader:(JARefreshHeader *)header tableView:(UITableView *)tableView;

@optional
//底部部刷新
- (BOOL)loadFooter:(JAAutoFooter *)footer tableView:(UITableView *)tableView;

//标签位置改变代理方法
- (void)changeIndex:(NSInteger)index tableView:(UITableView *)tableView;

@end

@interface JAPageView : UIView

//代理属性设置
@property (nonatomic, weak) id <JAPageViewDetegate> delegate;


//当前位置
@property (nonatomic) NSInteger index;

//数据为空
@property (nonatomic) BOOL noDate;

//数据字典
@property (nonatomic,strong) NSMutableDictionary *data;

//自定义初始化方法
- (instancetype)initWithFrame:(CGRect)frame items:(NSArray *)items delegate:(id)delegate;

//指定选中位置
- (void)appointedSelect:(NSInteger)select animations:(BOOL)animations;


//添加底部加载视图
- (void)setFooterLoad:(NSArray <NSNumber *>*)indexs;

//当前tableView视图
- (UITableView *)currentTableView;

//当前参数
- (NSMutableDictionary *)currentParmter;

//指定位置参数
- (NSMutableDictionary *)appointedParmter:(NSInteger)index;

//当前数据集合
- (NSMutableArray *)currentData;

//指定位置数组
- (NSMutableArray *)appointedData:(NSInteger)index;

//获取tableView对应的位置
- (NSMutableArray *)dataFromTableView:(UITableView *)tableView;

//指定位置tableView视图
- (nullable UITableView *)tableViewFromIndex:(NSInteger)index;

//获取tableView对应的位置
- (NSInteger)locationFromTableView:(UITableView *)tableView;

//空页面赋值
- (void)title:(NSString *)title image:(NSString *)imageName;

@end

NS_ASSUME_NONNULL_END
