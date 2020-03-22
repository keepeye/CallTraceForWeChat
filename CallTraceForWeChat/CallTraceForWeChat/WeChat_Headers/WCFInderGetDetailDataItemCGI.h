//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFInderGetDetailDataItemCGI : WCFinderBaseCgi
{
    NSString *_objectId;
    NSString *_finderUsername;
    NSString *_nonceID;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (void)createRequest;
- (id)initWithObjectId:(id)arg1 nonceID:(id)arg2 finderUsername:(id)arg3 scene:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end
