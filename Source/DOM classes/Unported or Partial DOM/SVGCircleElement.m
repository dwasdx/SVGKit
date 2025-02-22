//
//  SVGCircleElement.m
//  SVGKit
//
//  Copyright Matt Rajca 2010-2011. All rights reserved.
//

#import "SVGCircleElement.h"
#import "SVGKDefine_Private.h"
#import "SVGKLogger.h"

@implementation SVGCircleElement

@dynamic r;

- (CGFloat)r {
	if (self.rx != self.ry) {
		[SVGKLogger logMessage:@"Undefined radius of circle"];
		return 0.0f;
	}
	
	return self.rx;
}

@end
