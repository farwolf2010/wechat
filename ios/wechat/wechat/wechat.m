//
//  wechat.m
//  AFNetworking
//
//  Created by 郑江荣 on 2018/6/6.
//

#import "wechat.h"
#import "farwolf.h"
#import "weexplus.h"
#import "WXApi.h"
#import "WXApiManager.h"
#import <AdSupport/AdSupport.h>
 
#import "WechatModule.h"
@implementation wechat


+(void)initWechat
{
  
     [WXApiManager.sharedManager initHandler];
     [WXSDKEngine registerModule:@"wechat" withClass:[WechatModule class]];
}



@end
