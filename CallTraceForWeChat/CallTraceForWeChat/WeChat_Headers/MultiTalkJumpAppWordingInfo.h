//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTalkJumpAppWordingInfo : NSObject
{
    NSString *_name;
    NSString *_dialogTitle;
    NSString *_dialogGotoButtonTitle;
    NSString *_bannerTitle;
    NSString *_bannerContent;
}

@property(retain, nonatomic) NSString *bannerContent; // @synthesize bannerContent=_bannerContent;
@property(retain, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain, nonatomic) NSString *dialogGotoButtonTitle; // @synthesize dialogGotoButtonTitle=_dialogGotoButtonTitle;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
