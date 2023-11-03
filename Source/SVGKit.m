//
//  SVGKit.m
//  SVGKit-iOS
//
//  Created by Devon Blandin on 5/13/13.
//  Copyright (c) 2013 na. All rights reserved.
//

#import "SVGKit.h"
#import "SVGKLogger.h"

@implementation SVGKit : NSObject

+ (void) enableLogging {
	[SVGKLogger setLoggingEnabled:YES];
}

@end
