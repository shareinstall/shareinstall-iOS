//
//  SHSecretLoginSDK.h
//  SHOpenInstall
//
//  Created by 路鹏 on 2019/7/26.
//  Copyright © 2019 smyjw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHSecretLoginAuthCfg.h"

NS_ASSUME_NONNULL_BEGIN

//结构@{@"authCode":@"",@"token":@"",@"type":@""}
typedef void(^PreFinishCompletion)(NSDictionary *resultDic);

@interface SHSecretLoginSDK : NSObject
+ (SHSecretLoginSDK *_Nullable)getInstance;

/** 初始化配置appkey
 @param appkey appkey
 @param cfgModel 联通，移动授权页配置参数（默认为nil）
 @param completion 是否初始化成功回调 结构 @{@"resultCode":@"",@"appId":@"",@"appSecret":@""} resultCode=0代表成功
 */
- (void)setAppkey:(NSString *)appkey niAuthModel:(SHSecretLoginAuthCfg *)cfgModel completion:(void(^)(NSDictionary *resultDic))completion;

/** 预取号
 @param completion 结构@{@"resultCode":@"",@"resultMsg":@"",@"mobile":@""} resultCode=0代表成功
 */
- (void)preGetPhonenumberCompletion:(void(^)(NSDictionary *_Nonnull result))completion;

/** 释放循环取号计时器
 */
- (void)releaseTimer;

/** 预取号完成一键登录（sdk内部判断预取号失败会重新预取号）
 @param clickHandler 点击事件回调  1：点击关闭  2：其他方式登录
 @param completion 结构@{@"authCode":@"",@"token":@"",@"type":@""}
 @param failure 登录失败回调
 */
- (void)preFinishToLoginClickHandler:(void(^)(NSString *senderTag))clickHandler completion:(PreFinishCompletion)completion failure:(void(^)(NSError *error))failure;

/** 关闭授权页
 */
- (void)dismissLoginAnimated: (BOOL)flag completion: (void (^ __nullable)(void))completion;


@end

NS_ASSUME_NONNULL_END
