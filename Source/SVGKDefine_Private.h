/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

// These macro is only used inside framework project, does not expose to public header and effect user's define

#define SVGKIT_LOG_CONTEXT 556

//#define SVGKLog(frmt, ...)   LOG_MAYBE(NO,                LOG_LEVEL_DEF, DDLogFlagError,   SVGKIT_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
//#define SVGKLog(frmt, ...)    LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagWarning, SVGKIT_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
//#define SVGKLog(frmt, ...)    LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagInfo,    SVGKIT_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
//#define SVGKitLogDebug(frmt, ...)   LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagDebug,   SVGKIT_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)
//#define SVGKLog(frmt, ...) LOG_MAYBE(LOG_ASYNC_ENABLED, LOG_LEVEL_DEF, DDLogFlagVerbose, SVGKIT_LOG_CONTEXT, nil, __PRETTY_FUNCTION__, frmt, ##__VA_ARGS__)

#define LogLevelVerbose 1
#define LogLevelWarning 2

#if DEBUG
static const int ddLogLevel = LogLevelVerbose;
#else
static const int ddLogLevel = LogLevelWarning;
#endif

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */
