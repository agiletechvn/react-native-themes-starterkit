//
//  RNNetworkState.h
//
//  Created by Anh Tuan Nguyen on 8/7/18.
//  Copyright © 2018 ReactNativeVietnam. All rights reserved.
//

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import "Reachability.h"

@interface RNNetworkState: RCTEventEmitter <RCTBridgeModule>
@property Reachability *connReachability;
@end
