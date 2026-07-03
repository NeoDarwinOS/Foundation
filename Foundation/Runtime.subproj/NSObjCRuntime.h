/*
 * Copyright (C) 2026, Samuel Zormeister.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#if !defined(__FOUNDATION_NSOBJCRUNTIME__)
#define __FOUNDATION_NSOBJCRUNTIME__ 1

#include <objc/NSObjCRuntime.h>
#include <stdarg.h>
#include <stdint.h>
#include <limits.h>

#ifndef __has_attribute
    #define __has_attribute(x) 0
#endif

#ifndef __has_builtin
    #define __has_builtin(x) 0
#endif

#ifndef __has_feature
    #define __has_feature(x) 0
#endif

#if !defined(FOUNDATION_EXTERN)
    #if __cplusplus
        #define FOUNDATION_EXTERN extern "C"
    #else
        #define FOUNDATION_EXTERN extern
    #endif
#endif

#define FOUNDATION_EXPORT FOUNDATION_EXTERN

#if !defined(NS_BLOCKS_AVAILABLE)
    #if __BLOCKS__
        #define NS_BLOCKS_AVAILABLE 1
    #else
        #define NS_BLOCKS_AVAILABLE 0
    #endif
#endif

#if __has_attribute(ns_returns_retained)
    #define NS_RETURNS_RETAINED __attribute__((ns_returns_retained))
#endif

#if __has_attribute(ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
#endif

/*
 * XX_ENUM & XX_OPTIONS macros, courtesy of CoreFoundation
 */
#include <CoreFoundation/CFAvailability.h>

#define _NS_TYPED_ENUM              _CF_TYPED_ENUM
#define _NS_TYPED_EXTENSIBLE_ENUM   _CF_TYPED_EXTENSIBLE_ENUM

#define NS_ENUM(...)                CF_ENUM(__VA_ARGS__)
#define NS_OPTIONS(type, name)      CF_OPTIONS(type, name)
#define NS_CLOSED_ENUM(type, name)  CF_CLOSED_ENUM(type, name)
#define NS_TYPED_ENUM               _NS_TYPED_ENUM
#define NS_TYPED_EXTENSIBLE_ENUM    _NS_TYPED_EXTENSIBLE_ENUM
#define NS_STRING_ENUM              _NS_TYPED_ENUM
#define NS_EXTENSIBLE_STRING_ENUM   _NS_TYPED_EXTENSIBLE_ENUM


/*
 * While we're here...
 *
 * We really don't care about availability. If it's there it's there. If it isn't; well damn.
 */
#define NS_AVAILABLE(...)
#define NS_AVAILABLE_MAC(...)
#define NS_AVAILABLE_IOS(...)

#define NS_DEPRECATED(...)
#define NS_DEPRECATED_MAC(...)
#define NS_DEPRECATED_IOS(...)

#define NS_ENUM_AVAILABLE(...)
#define NS_ENUM_AVAILABLE_MAC(...)
#define NS_ENUM_AVAILABLE_IOS(...)

#define NS_ENUM_DEPRECATED(...)
#define NS_ENUM_DEPRECATED_MAC(...)
#define NS_ENUM_DEPRECATED_IOS(...)

/* API NOTE: NeoDarwin only targets Darwin 19+, so we really dont care about ancient macOS versions. */
#if __has_feature(objc_weak_class)
    #define NS_CLASS_AVAILABLE(...) __attribute__((visibility("default")))
    #define NS_CLASS_DEPRECATED(...) __attribute__((visibility("default")))
#else
    #define NS_CLASS_AVAILABLE(...)
    #define NS_CLASS_DEPRECATED(...)
#endif

#if __has_feature(nullability)
    #define NS_ASSUME_NONNULL_BEGIN _Pragma("clang assume_nonnull begin")
    #define NS_ASSUME_NONNULL_END _Pragma("clang assume_nonnull end")
#else
    #define NS_ASSUME_NONNULL_BEGIN
    #define NS_ASSUME_NONNULL_END
#endif

#if !__has_feature(objc_instancetype)
    #define instancetype id
#endif

#endif /* ! __FOUNDATION_NSOBJCRUNTIME__ */
