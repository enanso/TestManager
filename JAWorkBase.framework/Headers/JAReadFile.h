
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JAReadFile : NSObject

+ (instancetype)shareSingle;


//获取对应数据
- (NSString *)getPlistData:(NSString *)key resource:(NSString *)resource;

// 读取本地plist文件
- (nullable NSDictionary *)readPlistFileResource:(NSString *)resource;


@end

NS_ASSUME_NONNULL_END
