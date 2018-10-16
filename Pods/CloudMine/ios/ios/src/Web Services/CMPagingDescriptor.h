//
//  CMPagingDescriptor.h
//  cloudmine-ios
//
//  Copyright (c) 2015 CloudMine, Inc. All rights reserved.
//  See LICENSE file included with SDK for details.
//

#import <Foundation/Foundation.h>

extern NSString * const CMPagingDescriptorLimitKey;
extern NSString * const CMPagingDescriptorSkipKey;
extern NSString * const CMPagingDescriptorCountKey;

@interface CMPagingDescriptor : NSObject

@property (nonatomic, assign) NSUInteger skip;
@property (nonatomic, assign) NSInteger limit;
@property (nonatomic, assign) BOOL includeCount;

+ (instancetype)defaultPagingDescriptor;

- (instancetype)init;
- (instancetype)initWithLimit:(NSInteger)theLimit;
- (instancetype)initWithLimit:(NSInteger)theLimit skip:(NSUInteger)theOffset;
- (instancetype)initWithLimit:(NSInteger)theLimit skip:(NSUInteger)theOffset includeCount:(BOOL)willIncludeCount;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)stringRepresentation;

@end
