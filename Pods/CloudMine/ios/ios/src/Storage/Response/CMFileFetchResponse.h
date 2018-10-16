//
//  CMFileFetchResponse.h
//  cloudmine-ios
//
//  Copyright (c) 2015 CloudMine, Inc. All rights reserved.
//  See LICENSE file included with SDK for details.
//

#import <Foundation/Foundation.h>
#import "CMStoreResponse.h"

@class CMFile;

/**
 * Response object returned after a file fetch request.
 */
@interface CMFileFetchResponse : CMStoreResponse

/**
 * The file that was fetched.
 */
@property (strong, nonatomic) CMFile *file;

- (instancetype)initWithFile:(CMFile *)file;

@end
