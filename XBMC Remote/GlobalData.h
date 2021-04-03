//
//  GlobalData.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 27/3/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GlobalData : NSObject

@property(nonatomic,retain) NSString *serverDescription;
@property(nonatomic,retain) NSString *serverUser;
@property(nonatomic,retain) NSString *serverPass;
@property(nonatomic,retain) NSString *serverIP;
@property(nonatomic) int tcpPort;
@property(nonatomic,retain) NSString *serverPort;
@property(nonatomic,retain) NSString *serverHWAddr;
@property(nonatomic) BOOL useSsl;
@property(nonatomic) BOOL allowSelfSignedCert;
@property(nonatomic) BOOL preferTVPosters;

+ (instancetype)getInstance;

- (NSString *)baseServerUrlWithProtocol:(BOOL)addProtocol credentials:(BOOL)addCredentials;
- (void)reset;

@end  
