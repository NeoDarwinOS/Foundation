/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSOBJECT_PRIVATE__)
#define __FOUNDATION_NSOBJECT_PRIVATE__ 1

#import <Foundation/NSObject.h>

@interface NSObject (NSPrivate)

+ (BOOL) implementsSelector:(SEL) selector;

+ (BOOL) instancesImplementSelector:(SEL) selector;

@end

#endif /* ! __FOUNDATION_NSOBJECT_PRIVATE__ */
