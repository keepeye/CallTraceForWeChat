//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, BusinessInfo, NSString;

@interface GetFuncMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) BusinessInfo *businessInfo; // @dynamic businessInfo;
@property(retain, nonatomic) NSString *customBuff; // @dynamic customBuff;
@property(retain, nonatomic) NSString *functionMsgId; // @dynamic functionMsgId;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;

@end

