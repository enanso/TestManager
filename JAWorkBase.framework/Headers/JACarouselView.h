
//轮播图

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JACarouselView : UIView

//开启或者关闭定时器
@property (nonatomic) BOOL file;

//查看大图片
- (void)createCarouselWithArray:(NSArray *)array click:(void (^)(NSInteger index))Click;


@end

NS_ASSUME_NONNULL_END
