//
//  HQ_JIShuZuJian.h
//  HQ_JiChuZuJian
//
//  Created by HuangQi on 2018/10/23.
//  Copyright © 2018年 HQ_JiChuZuJian. All rights reserved.
//

#import <Foundation/Foundation.h>

#define HQColorRGB(rgb) ([[UIColor alloc] initWithRed:(((rgb >> 16) & 0xff) / 255.0f) green:(((rgb >> 8) & 0xff) / 255.0f) blue:(((rgb) & 0xff) / 255.0f) alpha:1.0f])
#define HQColorRGBA(rgb, falpha) ([[UIColor alloc] initWithRed:(((rgb >> 16) & 0xff) / 255.0f) green:(((rgb >> 8) & 0xff) / 255.0f) blue:(((rgb) & 0xff) / 255.0f) alpha:falpha])

#define HQImageNamed(name) [UIImage imageNamed:[NSString stringWithFormat:@"%@",name]]
#define HQImageOfFile(name) [UIImage imageWithContentsOfFile:[NSString stringWithFormat:@"%@/%@", [[NSBundle mainBundle] bundlePath],name]]

#define IS_IPHONE_5_OR_LESS HQHeight <= 568.0
#define IS_IPHONE_X HQHeight >= 812.0
#define IS_IPHONE_4 HQHeight <= 480

#define HQWeakSelf(type)  __weak typeof(type) weak##type = type;
#define HQStrongSelf(type)  __strong typeof(type) strong##type = weak##type;

#define HQWidth UIScreen.mainScreen.bounds.size.width
#define HQHeight UIScreen.mainScreen.bounds.size.height

#define HQTopHeight (HQStatusBarHeight + 44)
#define HQTabBarHeight self.tabBarController.tabBar.frame.size.height
#define HQStatusBarHeight UIApplication.sharedApplication.statusBarFrame.size.height

NS_ASSUME_NONNULL_BEGIN

@interface HQ_JIShuZuJian : NSObject

/** 获取UUID */
+(NSString *)GetUUID;

/** 获取设备名称 */
+(NSString *)GetDeviceName;

/** 获取APP版本 */
+(NSString *)GetAPPVerion;

/** 获取系统版本 */
+(NSString *)GetSystemVersion;

/** 获取设备语言 */
+(NSString *)GetDeviceLanguage;

/** 钥匙串_保存 */
+(void)Save:(NSString *)service data:(id)data;

/** 钥匙串_读取 */
+(id)Load:(NSString *)service;

/** 钥匙串_删除 */
+(void)Delete_data:(NSString *)service;

/** 检测手机号 */
+(BOOL)JianCeShouJi:(NSString *)phone;

/** 检测邮箱 */
+(BOOL)JianCeYouXiang:(NSString *)email;

/** 检测身份证 */
+(BOOL)JianCeShenFenZheng:(NSString *)card;

@end

NS_ASSUME_NONNULL_END
