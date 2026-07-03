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

@class NSCoder;

/* ObjC copying protocols, which form the basis for object "copying" */
@protocol NSCopying
- (id) copyWithZone:(NSZone *) zone;
@end

@protocol NSMutableCopying
- (id) mutableCopyWithZone:(NSZone *) zone;
@end

/* ObjC coding protocols - encoder/decoder stuff. Probably for KeyedArchiver. */
@protocol NSCoding
- (void) encodeWithCoder:(NSCoder *) coder;
- (nullable instancetype) initWithCoder:(NSCoder *)coder;
@end

@protocol NSSecureCoding <NSCoding>
@required @property (class, readonly) BOOL supportsSecureCoding;
@end



@interface NSObject (NSCoderMethods)

@property (readonly) Class classForCoder;

+ (NSUInteger) version;
+ (void) setVersion:(NSUInteger) version;

- (nullable id) replacementObjectForCoder:(NSCoder *) coder;
- (nullable id) awakeAfterUsingCoder:(NSCoder *) coder;

@end

#endif /* ! __FOUNDATION_NSOBJECT__ */
