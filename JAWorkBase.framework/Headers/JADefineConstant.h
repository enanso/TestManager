
#import <Foundation/Foundation.h>

#ifndef JA_DEFINE_CONSTANT_H
#define JA_DEFINE_CONSTANT_H  1

#define IOS11_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"11.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS10_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"10.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS9_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"9.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS8_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS7_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"7.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS6_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"6.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS5_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"5.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS4_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"4.0" options:NSNumericSearch] != NSOrderedAscending )
#define IOS3_OR_LATER    ( [[[UIDevice currentDevice] systemVersion] compare:@"3.0" options:NSNumericSearch] != NSOrderedAscending )


/*屏幕宽高*/
#define kHeight [[UIScreen mainScreen] bounds].size.height
#define kWidth  [[UIScreen mainScreen] bounds].size.width



//设置RGB颜色
#define kRGBA(r, g, b,c) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(c)]

#define iPhone5OrLater (kHeight > 480)


#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750,1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125,2436), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(750,1624), [[UIScreen mainScreen] currentMode].size)): NO)
#define iOS7 (([[[UIDevice currentDevice] systemVersion] floatValue] >= 7)?YES:NO)

//==================================================
// 判断是否为iPhone X 系列(XMax XR XS)
#define IPHONE_X_OR_LATER \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

//iPhoneX navigationview底部Y坐标
#define NavigationBar_Bottom_Y     (IPHONE_X_OR_LATER ? 88.0 : 64.0)

//iPhoneX顶部部偏移量
#define Top_iPhoneX_LATER           (IPHONE_X_OR_LATER ? 24.f : 0)

//iPhoneX底部偏移量
#define Bottom_iPhoneX_LATER         (IPHONE_X_OR_LATER ? 34.f : 0)

//==================================================
//是否为空或是[NSNull null]
#define NotNilAndNull(_ref)  (((_ref) != nil) && (![(_ref) isEqual:[NSNull null]]))
#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))

//字符串是否为空
#define IsStrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref)isEqualToString:@""]))
//数组是否为空
#define IsArrEmpty(_ref)    (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]) ||([(_ref) count] == 0))

#define OC(str) [NSString stringWithCString:(str) encoding:NSUTF8StringEncoding]

//16进制色值参数转换
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


//便捷方式创建NSNumber类型
#undef    __INT
#define __INT( __x )            [NSNumber numberWithInt:(int)__x]

#undef    __UINT
#define __UINT( __x )            [NSNumber numberWithUnsignedInt:(NSUInteger)__x]

#undef    __FLOAT
#define    __FLOAT( __x )            [NSNumber numberWithFloat:(float)__x]

#undef    __DOUBLE
#define    __DOUBLE( __x )            [NSNumber numberWithDouble:(double)__x]

//便捷创建NSString
#undef  STR_FROM_INT
#define STR_FROM_INT( __x )     [NSString stringWithFormat:@"%d", (__x)]

#undef  STR_FROM_NSINT
#define STR_FROM_NSINT( __x )     [NSString stringWithFormat:@"%ld", (__x)]

//线程执行方法
#define Foreground_Begin  dispatch_async(dispatch_get_main_queue(), ^{
#define Foreground_End    });

#define Background_Begin  dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{\
@autoreleasepool {
#define Background_End          }\
});

//判断字典是否包含某字段
extern BOOL DictionContainsKey(NSDictionary *dict,NSString *key);

extern NSString* EncodeStringFromDic(NSDictionary *dic, NSString *key);
/**
 * 如果取不到值，返回自定义的默认值
 @brief defValue 自定义默认值
 **/
extern NSString* _Nonnull  EncodeStringFromDicWithDefValue(NSDictionary *dic, NSString *key, NSString * _Nonnull defValue);
/**
 * 如果取不到值，返回@""
 **/
extern NSString* _Nonnull  EncodeStringFromDicDefEmtryValue(NSDictionary *dic, NSString *key);

extern NSNumber* EncodeNumberFromDic(NSDictionary *dic, NSString *key);
extern NSDictionary *EncodeDicFromDic(NSDictionary *dic, NSString *key);
extern NSArray      *EncodeArrayFromDic(NSDictionary *dic, NSString *key);
extern NSArray      *EncodeArrayFromDicUsingParseBlock(NSDictionary *dic, NSString *key, id(^parseBlock)(NSDictionary *innerDic));



// 颜色设置
#define White_Color     [UIColor whiteColor]
#define Clear_Color     [UIColor clearColor] // 清晰色
#define Red_Color       [UIColor redColor]
#define Black_Color     [UIColor blackColor]
#define DarkGray_Color  [UIColor darkGrayColor] //深灰；暗灰；灰黑
#define LightGray_Color [UIColor lightGrayColor] // 浅灰色
#define Gray_Color      [UIColor grayColor]  // 灰色
#define Green_Color     [UIColor greenColor]
#define Blue_Color      [UIColor blueColor]
#define Cyan_Color      [UIColor cyanColor]  //. 蓝绿色
#define Yellow_Color    [UIColor yellowColor]
#define Magenta_Color   [UIColor magentaColor]  //品红；洋红
#define Orange_Color    [UIColor orangeColor]
#define Purple_Color    [UIColor purpleColor] //紫色
#define Brown_Color     [UIColor brownColor]

//随机色
#define Random_Color    [UIColor colorWithRed:arc4random() % 256/255.0 green:arc4random() % 256/255.0 blue:arc4random() % 256/255.0 alpha:1.0]

//取随机数
#define Random_Number(a,b) arc4random()%((b) - (a) + 1) +(a)

// 字体名称 ArialRoundedMTBold   STXingkai
#define FONT_BOLD @"ArialRoundedMTBold"
#define SLANTFONT @"Georgia-Italic"


//系统字体
#define SYSTEM_FONT(si) [UIFont systemFontOfSize:(si)/1.00 ]

//加粗字体
#define BOLD_FONT(s) [UIFont fontWithName:@"Helvetica-Bold" size:(s)/1.00 ]


//安全区高度(底部安全区)
#define SAFETY_HEIGHT ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 20.0 : 0.0)

//iPhoneX系列（顶部状态栏、刘海）
#define TOP_HEIGHT ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 44.0 : 20.0)

//距离底部设置
#define BOTTOM_SET(h) ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? (kHeight - 108 - (h)) : (kHeight - 64 - (h)))

//设备导航栏高度
#define NAV_HEIGHT ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 88.0 : 64.0)
#define BAR_HEIGHT ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 83.0 : 49.0)


//判断是否是ipad
#define isPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhone4系列
#define kiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone5系列
#define kiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhone6系列
#define kiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iphone6Plus系列
#define kiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneX
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)

// 输出纯净的内容：NSLog去掉时间戳及其他输出样式
#ifdef DEBUG
#define NNSLog(FORMAT, ...) fprintf(stderr,"%s\n",[[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NNSLog(...)
#endif


#endif      //--------------------------------endLine
