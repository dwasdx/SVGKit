//
//  Created by Журавлев Андрей Владимирович on 01.11.2023.
//  Copyright © 2023 Sberbank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SVGKLogger.h"


@implementation SVGKLogger

static BOOL _loggingEnabled = NO;

+(BOOL)loggingEnabled {
	return _loggingEnabled;
}

+(void)setLoggingEnabled: (BOOL)newValue {
	_loggingEnabled = newValue;
}

+ (void)logMessage:(NSString *)format, ... {
	if (!_loggingEnabled) {
		return;
	}
	va_list args;
	va_start(args, format);
	NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
	va_end(args);

	// not passing message directly to suppress warning about string literal
	NSLog(@"%@", message);
}

@end
