//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSNativeBufferBase.h"

@class JSContext, NSMutableDictionary, NSObject, NSString, WAJSCoreService;
@protocol OS_dispatch_queue;

@interface WAJSWorkFlow : WAJSNativeBufferBase
{
    unsigned int _workerId;
    WAJSCoreService *_service;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_timerObjs;
    NSString *_lastJSError;
}

@property(retain, nonatomic) NSString *lastJSError; // @synthesize lastJSError=_lastJSError;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) __weak WAJSCoreService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)setupTimerBlock:(id)arg1;
- (void)stopWorker;
- (void)sendMessage:(id)arg1;
- (void)initJSContext:(id)arg1;
- (void)sendErrorEvent:(id)arg1 stack:(id)arg2;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3;

// Remaining properties
@property(retain, nonatomic) JSContext *context;

@end

