//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface FinderStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int gethistoryNow; // @dynamic gethistoryNow;
@property(retain, nonatomic) NSString *historyEndWording; // @dynamic historyEndWording;
@property(retain, nonatomic) NSString *historyHeadWording; // @dynamic historyHeadWording;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int needClear; // @dynamic needClear;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int prefetchLastFeedCount; // @dynamic prefetchLastFeedCount;
@property(nonatomic) unsigned int retFlag; // @dynamic retFlag;

@end

