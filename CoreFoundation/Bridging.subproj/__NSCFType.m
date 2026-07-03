/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#import "__NSCFType.h"

#import <objc/objc-abi.h>
#import <objc/objc-internal.h>

#pragma mark - __NSCFType

@implementation __NSCFType

- (BOOL) isEqual:(id)object {
    if (object == NULL) {
        return FALSE;
    }
    
    if (self == object) {
        return TRUE;
    }
    
    return _CFNonObjCEqual(self, object);
}

- (BOOL) _tryRetain {
    return _CFTryRetain(self) != NULL;
}

- (BOOL) _isDeallocating {
    return _CFIsDeallocating(self);
}

- (NSUInteger) retainCount {
    return CFGetRetainCount(self);
}

- (id) retain {
    return _CFNonObjCRetain(self);
}

- (void) release {
    _CFNonObjCRelease(self);
}

- (NSUInteger) hash {
    return _CFNonObjCHash(self);
}

- (void) dealloc {
    /* do nothing since we're technically managed by CF and not objc */
}

/* should this be coupled with an ARC invocation? */
- (NSString *) description {
    NSString *string = (NSString *)CFCopyDescription(self);
    
    /* ARC is disabled for us, so we need to manually ask objc to autorelease our object. */
    objc_autorelease(string);
    
    return string;
}

@end


#pragma mark - NSObject (__NSCFType)

@implementation NSObject (__NSCFType)

- (CFTypeID) _cfTypeID {
    return CFTypeGetTypeID();
}

@end
