/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSZONE__)
#define __FOUNDATION_NSZONE__ 1

#import <Foundation/NSObjCRuntime.h>

@class NSString;

typedef struct _NSZone NSZone;

FOUNDATION_EXPORT NSZone *NSCreateZone(NSUInteger startSize, NSUInteger granule, BOOL canFree);

FOUNDATION_EXPORT void NSSetZoneName(NSZone *zone, NSString *name);

FOUNDATION_EXPORT void *NSZoneMalloc(NSZone *zone, NSUInteger size);

FOUNDATION_EXPORT NSZone *NSDefaultMallocZone(void);

/* Other convenience functions provided by Foundation (NSZone) */
FOUNDATION_EXPORT NSUInteger NSPageSize(void);

FOUNDATION_EXPORT NSUInteger NSLogPageSize(void);

#endif /* ! __FOUNDATION_NSZONE__ */
