/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSOBJCRUNTIME_PRIVATE__)
#define __FOUNDATION_NSOBJCRUNTIME_PRIVATE__ 1

/* Header is implied to exist by WebKit */

#import <Foundation/NSObjCRuntime.h>

#if __has_attribute(objc_direct)
    #define NS_DIRECT __attribute__((objc_direct))
#else
    #define NS_DIRECT
#endif

#if __has_attribute(objc_direct_members)
    #define NS_DIRECT_MEMBERS __attribute__((objc_direct_members))
#else
    #define NS_DIRECT_MEMBERS
#endif

FOUNDATION_EXTERN
void _NSInitializeFoundation(void);

#endif /* ! __FOUNDATION_NSOBJCRUNTIME_PRIVATE__ */
