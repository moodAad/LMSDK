//
//  UMSDKInit.h
//  UMSDK
//
//  Created by CP on 2022/6/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UMSDKInit : NSObject

+(instancetype)sharedUMinit;

/**
 UMSDK初始化
*/

- (void)SDKinit;

@end

NS_ASSUME_NONNULL_END
