//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WARefreshComponent.h"

@interface WARefreshFooter : WARefreshComponent
{
    double _ignoredScrollViewContentInsetBottom;
}

+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double ignoredScrollViewContentInsetBottom; // @synthesize ignoredScrollViewContentInsetBottom=_ignoredScrollViewContentInsetBottom;
- (void)resetNoMoreData;
- (void)noticeNoMoreData;
- (void)endRefreshingWithNoMoreData;
- (void)prepare;

@end

