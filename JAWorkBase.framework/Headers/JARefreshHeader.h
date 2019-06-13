

#import <MJRefresh/MJRefresh.h>

NS_ASSUME_NONNULL_BEGIN

@interface JARefreshHeader : MJRefreshHeader

@property (nonatomic) BOOL isShow;//是否展示文字图片
@property (strong, nonatomic,readonly) UIImageView *labelImage;//文字展示图片
@property (strong, nonatomic,readonly) UIImageView *logoView;
@property (strong, nonatomic,readonly) UIImageView *eyesImageV; // 2种图片切换

//父类刷新完成方法
//+ (instancetype)headerWithRefreshingBlock:(MJRefreshComponentRefreshingBlock)refreshingBlock;

@end

NS_ASSUME_NONNULL_END
