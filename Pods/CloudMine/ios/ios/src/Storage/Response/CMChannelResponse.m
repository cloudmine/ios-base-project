//
//  CMChannelResponse.m
//  cloudmine-ios
//
//  Copyright (c) 2015 CloudMine, Inc. All rights reserved.
//  See LICENSE file included with SDK for details.
//

#import "CMChannelResponse.h"

@interface CMChannelResponse()
@property (nonatomic) BOOL subscribe;
@end

@implementation CMChannelResponse

@synthesize result = _result, subscribe;

- (CMDeviceChannelResult)result {
    return self.httpResponseCode == 200 ? (self.subscribe ? CMDeviceAddedToChannel : CMDeviceRemovedFromChannel) : CMDeviceChannelOperationFailed;
}

@end
