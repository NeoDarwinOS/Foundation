/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

/* TODO: fixup Foundation/Foundation.h, and also consolidate a FoundationInternal header, or something. */
#import <Foundation/Foundation.h>

#import "NSZone.h"

#include <malloc/malloc.h>

NSZone *NSCreateZone(NSUInteger startSize, NSUInteger granule, BOOL canFree)
{
    return (NSZone *)malloc_create_zone(startSize, 0);
}

