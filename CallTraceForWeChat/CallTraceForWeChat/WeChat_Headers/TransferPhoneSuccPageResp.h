//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, JumpItem, NSMutableArray, NSString;

@interface TransferPhoneSuccPageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpItem *announcement; // @dynamic announcement;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int delayCode; // @dynamic delayCode;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSMutableArray *wording; // @dynamic wording;

@end

