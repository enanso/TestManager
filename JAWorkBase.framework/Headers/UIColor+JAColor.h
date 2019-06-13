

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (JAColor)

/*十六进制颜色*/
+ (UIColor *)colorWithHexString: (NSString *)color;

/*如果hexString是8位则参数alpha失效,使用hexString包含的alpha*/
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/*读取图片顶部的颜色*/
+ (UIColor *)colorForImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
