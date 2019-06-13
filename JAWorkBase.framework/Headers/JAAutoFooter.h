
#import <MJRefresh/MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

@interface JAAutoFooter : MJRefreshAutoStateFooter
//无数据时候，底部显示
@property (nonatomic,strong) NSString *noDataTextString;
//闲置时，底部显示
@property (nonatomic,strong) NSString *nornameTextString;

//加载中，底部显示
@property (nonatomic,strong) NSString *theOngoingTextString;

//为不同状态下的角标t赋值
- (void)setText:(NSString *)text statue:(MJRefreshState)statue;

@end

NS_ASSUME_NONNULL_END
