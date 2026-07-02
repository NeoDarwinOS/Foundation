/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSOBJECT__)
#define __FOUNDATION_NSOBJECT__ 1

#import <objc/NSObject.h>
#import <Foundation/NSObjCRuntime.h>
#import <Foundation/NSZone.h>

@protocol NSCopying

- (id) copyWithZone:(NSZone *) zone;

@end

#endif /* ! __FOUNDATION_NSOBJECT__ */
