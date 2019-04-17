//
//  CubeFileUtil.h
//  CubeEngineFoundationKit
//
//  Created by jianchengpan on 2019/3/22.
//  Copyright © 2019 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CubeFileUtil : NSObject

#pragma mark - md5

/**
 生成md5
 
 @param bytes 需要md5加密的字节
 @param length 字节长度
 @return md5码
 */
+ (NSString *)MD5WithBytes:(const void *)bytes andLength:(int) length;

#pragma mark - file type
/**
 获取文件类型
 
 @param fileName 文件名
 @return 文件类型
 */
+ (NSString *)getContentTypeFromFileName:(NSString *)fileName;

@end

NS_ASSUME_NONNULL_END
