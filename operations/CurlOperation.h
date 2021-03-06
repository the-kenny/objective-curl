//
//  CurlOperation.h
//  objective-curl
//  
//  Base class for all curl related operations.
//
//  Created by nrj on 1/24/10.
//  Copyright 2010. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <sys/stat.h>
#include <curl/curl.h>

@class RemoteObject;

@interface CurlOperation : NSOperation 
{
	CURL *handle;
	id delegate;
}

@property(readwrite, assign) id delegate;

- (id)initWithHandle:(CURL *)aHandle delegate:(id)aDelegate;

- (NSString *)getFailureDetailsForStatus:(CURLcode)status withObject:(RemoteObject *)object;

@end
