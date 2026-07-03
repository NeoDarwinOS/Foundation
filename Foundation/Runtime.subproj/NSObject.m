/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#import <Foundation/NSObject_Private.h>
#import <Foundation/NSObjCRuntime_Private.h>
#import <objc/objc-abi.h>
#import <objc/objc-internal.h>

@implementation NSObject

+ (BOOL) implementsSelector:(SEL) selector {
    Class cls = object_getClass(self);
    IMP impl = class_getMethodImplementation(cls, selector);
    return impl != &_objc_msgForward;
}

+ (NSUInteger)version {
    class_getVersion(self);
}

+ (void) setVersion:(NSUInteger)version
{
    class_setVersion(self, (int)version);
}

+ (void) load {
    _NSInitializeFoundation();
}

- (Class) classForCoder {
    return [self class];
}

@end


