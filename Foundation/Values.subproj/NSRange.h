/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSRANGE__)
#define __FOUNDATION_NSRANGE__ 1

#import <Foundation/NSObjCRuntime.h>

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} NSRange;

#endif /* ! __FOUNDATION_NSRANGE__ */
