//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMultiMenuTableViewCell.h"

#import "MMDropDelegate-Protocol.h"

@class MMDropManager, NSString;

@interface MMMultiMenuTableViewCell : MMBaseMultiMenuTableViewCell <MMDropDelegate>
{
    MMDropManager *m_dropManager;
}

- (void).cxx_destruct;
- (void)dropSessionDidExit;
- (void)dropSessionDidEnter;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

