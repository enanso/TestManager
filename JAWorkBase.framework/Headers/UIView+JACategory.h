

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (JACategory)

/*获取x坐标*/
- (CGFloat)x;

/*获取y坐标*/
- (CGFloat)y;

/*获取宽和x坐标的和*/
- (CGFloat)r;

/*获取高和y坐标的和*/
- (CGFloat)b;

/*获取宽度*/
- (CGFloat)w;

/*获取高度*/
- (CGFloat)h;

/*view所在窗口的位置*/
- (CGRect)locationInWindow;

/*视图中心点在窗口的位置*/
- (CGPoint)centerInWindow;

/***
 * @note 切任意角 默认切四角，默认宽度为5
 * @ 0：顶部左、右切圆角 、1：左侧上、下切圆角、2：右侧上、下切圆角、3：底部左、右切圆角、4：上左侧、下右侧切角、5：上右侧、下左侧切角、6：上左侧切角、7：上右侧切角、8：下左侧切角、9：下右侧切角
 *
 ***/
- (void)cutCornerType:(int)type width:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
