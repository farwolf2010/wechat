//
//  WXPayModule.h
//  AFNetworking
//
//  Created by 郑江荣 on 2018/6/3.
//

#import <Foundation/Foundation.h>
#import <PlusWeexSDK/WXEventModuleProtocol.h>
#import <PlusWeexSDK/WXModuleProtocol.h>
#import "weexplus.h"
@interface WechatModule : NSObject<WXModuleProtocol>
+(void)initWechat;
@end
