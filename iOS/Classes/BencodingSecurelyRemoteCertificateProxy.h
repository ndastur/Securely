/**
 * Securely Titanium Security Project
 * Copyright (c) 2014 by Benjamin Bahrenburg. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import <Foundation/Foundation.h>
@interface BencodingSecurelyRemoteCertificateProxy : TiProxy<NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
@private
    BOOL _debug;
}
@property (strong, nonatomic) NSURLConnection *connection;

@end
