

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (JACategory)

/*获取根视图*/
+ (UIViewController *)getRootVC;

/*获取当前视图*/
+ (UIViewController *)getCurrentVC;

@end

NS_ASSUME_NONNULL_END
