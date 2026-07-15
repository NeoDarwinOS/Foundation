/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined (__COREFOUNDATION_CFSTRINGTOKENIZER__)
#define __COREFOUNDATION_CFSTRINGTOKENIZER__

#include <CoreFoundation/CFBase.h>

/*
 * References:
 * https://leopard-adc.pepas.com/documentation/CoreFoundation/Reference/CFStringTokenizerRef/Reference/reference.html
 */

CF_IMPLICIT_BRIDGING_ENABLED
CF_EXTERN_C_BEGIN

typedef struct CF_BRIDGED_TYPE(id) __CFStringTokenizer *CFStringTokenizerRef;

CF_EXTERN_C_END
CF_IMPLICIT_BRIDGING_DISABLED

#endif /* ! __COREFOUNDATION_CFSTRINGTOKENIZER__ */
