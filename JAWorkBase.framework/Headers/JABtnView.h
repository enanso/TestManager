

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JABtnView : UIView

@property (nonatomic,copy) void (^clickBlock)(void);

//字体设置
@property(null_resettable, nonatomic,strong) UIFont      *font;
//字体颜色
@property(null_resettable, nonatomic,strong) UIColor     *color;

@property(nullable, nonatomic,copy)   NSString           *text;//文本
@property (nullable, nonatomic, strong) UIImage *image;//图片

@property (nonatomic) BOOL isCut;//是否切半角

//图片背景颜色字体颜色
@property(null_resettable, nonatomic,strong) UIColor     *imColor;

//上边距设置
@property (nonatomic) CGFloat margin_top;

//下边距距设置
@property (nonatomic) CGFloat margin_bottom;


//标题及图片赋值
- (void)setText:(NSString *)text im_name:(NSString *)im_name;

@end

NS_ASSUME_NONNULL_END
