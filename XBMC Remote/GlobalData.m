//
//  GlobalData.m
//  XBMC Remote
//
//  Created by Giovanni Messina on 27/3/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import "GlobalData.h"

@implementation GlobalData

+ (instancetype)getInstance {
    static GlobalData *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [GlobalData new];
    });
    return instance;
}

- (NSString *)baseServerUrlWithProtocol:(BOOL)addProtocol credentials:(BOOL)addCredentials {
    __auto_type url = [NSMutableString new];
    if (addProtocol)
        [url appendFormat:@"http%@://", self.useSsl ? @"s" : @""];
    if (addCredentials && self.serverUser.length > 0)
        [url appendFormat:@"%@:%@@", self.serverUser, self.serverPass ?: @""];
    return [url stringByAppendingFormat:@"%@:%@", self.serverIP, self.serverPort];
}

- (void)reset {
    self.serverDescription = @"";
    self.serverUser = @"";
    self.serverPass = @"";
    self.serverIP = @"";
    self.serverPort = @"";
    self.serverHWAddr = @"";
    self.tcpPort = 0;
    self.useSsl = NO;
    self.allowSelfSignedCert = NO;
}

@end
