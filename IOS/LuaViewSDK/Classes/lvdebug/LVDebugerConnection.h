//
//  LVDebuger.h
//  CFSocketDemo
//
//  Created by dongxicheng on 9/16/15.
//  Copyright (c) 2015 dongxicheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LVDebugerConnection : NSObject

+ (instancetype)sharedInstance ;
 
+ (NSString*) getCmd;

- (NSInteger) waitUntilConnectionEnd;

+ (void) sendCmd:(NSString*) cmdName info:(NSString*) info;
+ (void) sendCmd:(NSString*) cmdName fileName:(NSString*)fileName info:(NSString*) info;

@end
