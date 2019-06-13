

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSString (JACategory)

#pragma mark ---------- 类方法
//判空处理
+ (NSString *)isEmpty:(NSString *)string;

/*改变颜色*/
+ (NSMutableAttributedString *)changeColor:(UIColor *)color font:(UIFont *)font string:(NSString *)string change:(NSString *)change last:(NSString *)last;

/*字符串中心划线*/
+ (NSMutableAttributedString *)lineColor:(UIColor *)color string:(NSString *)string change:(NSString *)change last:(NSString *)last;

/*调整label间距*/
+ (void)adjustLabel:(UILabel *)label  spacing:(CGFloat)spacing;

/*一个字符的宽度*/
+ (CGFloat)oneCharacterWidthByFont:(UIFont *)font type:(int)type;

/*获取拼音首字母(传入汉字字符串, 返回大写拼音首字母)*/
+ (NSString *)firstCharactor:(NSString *)aString;

/*转JSON对象*/
+ (NSString *)toJSONO:(id)obj;

/*将JSON串转化为字典或者数组*/
+ (id)toObject:(NSData *)jsonData;

/*获取网络状态*/
+(NSString *)getNetWorkStates;

/*是否存在刘海*/
+ (BOOL)isBang;

#pragma mark ---------- 实例方法

/*字符串自适应高度*/
- (CGFloat)gainHeightByFont:(UIFont *)font width:(CGFloat)width;

/*截取某字符以前的字符串(包含自身)*/
- (NSString *)cutSelfToString:(NSString *)str;

/*截取某字符以前的字符串(不包含自身)*/
- (NSString *)cutToString:(NSString *)str;

/*截取某字符以后的字符串(包含自身)*/
- (NSString *)cutSelfFromString:(NSString *)str;

/*截取某字符以后的字符串(不包含自身)*/
- (NSString *)cutFromString:(NSString *)str;

/*截取两个字符串之间的字符串*/
- (NSString *)cutStart:(NSString *)start end:(NSString *)end;

/*修剪去除空格字符*/
- (NSString *)trim;

/*查询字符串中的参数*/
- (NSDictionary*)queryDictionary;

/*根据字符串数组找出特殊字符,一旦出现，跳出循环*/
- (BOOL)isContainSpecialCharactersWithArray:(NSArray *)array;

/*字符串根据字体大小获取宽度*/
- (CGFloat)gainWidthByFont:(UIFont *)font;

/*删除双引号*/
- (NSString *)deleteQuotationMark;

/*json格式字符串转字典*/
- (NSDictionary *)jsonString;

//字典中是否存在某key，存在时，编译成字串
- (NSString *)dictionary:(NSDictionary *)dict;

#pragma mark ---------- 字符串类型判断

/*手机号验证*/
- (BOOL)isPhone;

/*判断是否为链接*/
- (BOOL)isUrl;
/*判断是否为数字*/
- (BOOL)isNumber;

/*车牌号验证*/
-(BOOL)isCarID;

/*邮箱验证*/
- (BOOL)isEmail;

/*核对密码格式,6~24位数字/字母/下划线*/
-(BOOL)checkPsw;

//默认都为数字，1表示全部为字母，2表示数字和字母，3表示只能输入汉字
/*类型组合验证*/
-(BOOL)isType:(int)type;

/*身份证号验证*/
-(BOOL)isIDCard;

//判断是否全部为中文汉字
- (BOOL)isChinese;

/*每个字符串的首字母*/
- (NSString *)everyOneChineseFirst:(BOOL)big;

/*获取拼音首字母(传入汉字字符串, 返回大写拼音首字母)*/
- (NSString *)firstCharactor:(BOOL)big;

/*字符串转换成类*/
- (id)toClassDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
