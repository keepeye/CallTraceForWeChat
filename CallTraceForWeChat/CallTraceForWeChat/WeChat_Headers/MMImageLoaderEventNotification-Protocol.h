//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableDictionary, NSString, UIImage;

@protocol MMImageLoaderEventNotification <NSObject>

@optional
- (void)onEventImageLoadNotificationType:(int)arg1 url:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (void)onEventImageEndLoadWithUrl:(NSString *)arg1 image:(UIImage *)arg2 data:(NSData *)arg3 extraInfo:(NSMutableDictionary *)arg4;
@end

