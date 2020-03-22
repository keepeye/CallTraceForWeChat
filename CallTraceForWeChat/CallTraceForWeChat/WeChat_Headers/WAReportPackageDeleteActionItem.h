//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportPackageDeleteActionItem : WAReportBaseItem
{
    unsigned int _deleteReason;
    unsigned int _debugType;
    unsigned int _deleteCount;
    unsigned int _abtestStatus;
    unsigned int _lruDeleteSize;
    unsigned int _weappDirSizeBeforeLRUDelete;
    unsigned int _weappDirSizePercentBeforeLRUDelete;
    unsigned int _weappDirSizeAfterLRUDelete;
    unsigned int _weappDirSizePercentAfterLRUDelete;
}

@property(nonatomic) unsigned int weappDirSizePercentAfterLRUDelete; // @synthesize weappDirSizePercentAfterLRUDelete=_weappDirSizePercentAfterLRUDelete;
@property(nonatomic) unsigned int weappDirSizeAfterLRUDelete; // @synthesize weappDirSizeAfterLRUDelete=_weappDirSizeAfterLRUDelete;
@property(nonatomic) unsigned int weappDirSizePercentBeforeLRUDelete; // @synthesize weappDirSizePercentBeforeLRUDelete=_weappDirSizePercentBeforeLRUDelete;
@property(nonatomic) unsigned int weappDirSizeBeforeLRUDelete; // @synthesize weappDirSizeBeforeLRUDelete=_weappDirSizeBeforeLRUDelete;
@property(nonatomic) unsigned int lruDeleteSize; // @synthesize lruDeleteSize=_lruDeleteSize;
@property(nonatomic) unsigned int abtestStatus; // @synthesize abtestStatus=_abtestStatus;
@property(nonatomic) unsigned int deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(nonatomic) unsigned int deleteReason; // @synthesize deleteReason=_deleteReason;
- (id)reportString;

// Remaining properties
@property(copy, nonatomic) NSString *appid;

@end
