

#import <UIKit/UIKit.h>
#import "JADefineConstant.h"
#import "UIColor+JAColor.h"
NS_ASSUME_NONNULL_BEGIN

@interface JABaseViewController : UIViewController


//是否拥有右侧返回按钮
@property (nonatomic) BOOL hasBack;

//返回按钮回调block
@property (nonatomic,copy) void (^backBlock) (void);

//无动画返回设置，默认为非
@property (nonatomic) BOOL noAnimated;

//左侧返回按钮选染色
@property(nullable, nonatomic,strong) UIColor *tintColor;

//按钮图片
@property (nullable, nonatomic, strong) UIImage *tintImage;


/**
 *
 * @note: 为导航控制器加标题及颜色
 * @param font   设置字体
 * @param color  设置颜色
 * @param title  设置标题
 *
 ***/
- (void)setFont:(nullable UIFont *)font color:(nullable UIColor *)color title:(nullable NSString *)title;

//点击返回方法
- (void)clickBack:(id)sender;



@end

NS_ASSUME_NONNULL_END

