//
//  Created by Журавлев Андрей Владимирович on 01.11.2023.
//  Copyright © 2023 Sberbank. All rights reserved.
//

#ifndef SVGKLogger_h
#define SVGKLogger_h
#import <Foundation/Foundation.h>

@interface SVGKLogger : NSObject

+(BOOL)loggingEnabled;

+(void)setLoggingEnabled:(BOOL)newValue;

+(void)logMessage:(NSString *)format, ...;

@end

#endif /* SVGKLogger_h */
