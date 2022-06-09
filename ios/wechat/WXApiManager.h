//
//  WXApiManager.h
//  SDKSample
//
//  Created by Jeason on 16/07/2015.
//
//

#import <Foundation/Foundation.h>
#import "WXApi.h"
#import "weexplus.h"

@protocol WXApiManagerDelegate <NSObject>

@optional


@end

@interface WXApiManager : NSObject<WXApiDelegate>

@property(nonatomic,copy) WXModuleKeepAliveCallback loginCallback;
@property(nonatomic,copy) WXModuleKeepAliveCallback payCallback;
@property (nonatomic, assign) id<WXApiManagerDelegate> delegate;

+ (instancetype)sharedManager;
-(void)initHandler;

@end
