//
//  CFNSCFType.h
//  CoreFoundation
//
//  Created by Samuel Zormeister on 2/7/26.
//

#ifndef __NSCFType_h
#define __NSCFType_h

#import <Foundation/NSObjCRuntime.h>

@interface __NSCFType : NSObject

- (CFTypeID) _cfTypeId;

- (BOOL) _isDeallocating;
- (BOOL) _tryRetain;

- (void) dealloc;

- (id)description;

- (unsigned long long) hash;

- (BOOL) isEqual:(id)arg1;

- (oneway void) release;

- (id) retain;

- (unsigned long long) retainCount;

@end

#endif /* __NSCFType_h */
