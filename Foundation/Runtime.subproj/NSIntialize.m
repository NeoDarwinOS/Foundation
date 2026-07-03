/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#import <Foundation/NSObjCRuntime_Private.h>
#import "ForFoundationOnly.h"

extern void __CFInitialize(void);

void _NSInitializeFoundation(void)
{
    /* Just in case CF hasn't woken yet... */
    __CFInitialize();
}
