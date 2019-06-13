
//空页面

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JAEmptyView : UIView

//文本字体大小
@property(null_resettable, nonatomic,strong) UIFont      *font;

//设置文本描述内容及图片
- (void)setDsc:(NSString *)des name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
