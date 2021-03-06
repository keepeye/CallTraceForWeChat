//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, WASplashADViewController, WASplashADWindow;

@interface WAAppTaskSplashADConfig : NSObject
{
    _Bool _splashADHasContent;
    _Bool _canShowSplashADWindow;
    NSDictionary *_splashADMenuParams;
    WASplashADWindow *_splashADWindow;
    WASplashADViewController *_splashADViewController;
    unsigned long long _splashADShowState;
    unsigned long long _splashADCheckState;
    double _shouldShowTimeStamp;
    double _jsReceiveShouldShowTimeStamp;
    double _shouldShowEventTimeCost;
    double _jsCallShowTimeStamp;
    double _showTimeStamp;
    double _showEventTimeCost;
    double _checkStageTimeCost;
    double _willLayoutFirstStepViewTimeStamp;
    double _didLayoutFirstStepViewTimeStamp;
    double _layoutFirstStepViewTimeCost;
    double _willLayoutAllViewTimeStamp;
    double _didLayoutAllViewTimeStamp;
    double _layoutAllViewTimeCost;
    NSNumber *_splashADEnableNumber;
    double _adLogicFinishedTimeStamp;
}

+ (unsigned int)splashADStateReportValueWithCheckState:(unsigned long long)arg1 showState:(unsigned long long)arg2;
@property(nonatomic) double adLogicFinishedTimeStamp; // @synthesize adLogicFinishedTimeStamp=_adLogicFinishedTimeStamp;
@property(retain, nonatomic) NSNumber *splashADEnableNumber; // @synthesize splashADEnableNumber=_splashADEnableNumber;
@property(nonatomic) double layoutAllViewTimeCost; // @synthesize layoutAllViewTimeCost=_layoutAllViewTimeCost;
@property(nonatomic) double didLayoutAllViewTimeStamp; // @synthesize didLayoutAllViewTimeStamp=_didLayoutAllViewTimeStamp;
@property(nonatomic) double willLayoutAllViewTimeStamp; // @synthesize willLayoutAllViewTimeStamp=_willLayoutAllViewTimeStamp;
@property(nonatomic) double layoutFirstStepViewTimeCost; // @synthesize layoutFirstStepViewTimeCost=_layoutFirstStepViewTimeCost;
@property(nonatomic) double didLayoutFirstStepViewTimeStamp; // @synthesize didLayoutFirstStepViewTimeStamp=_didLayoutFirstStepViewTimeStamp;
@property(nonatomic) double willLayoutFirstStepViewTimeStamp; // @synthesize willLayoutFirstStepViewTimeStamp=_willLayoutFirstStepViewTimeStamp;
@property(nonatomic) double checkStageTimeCost; // @synthesize checkStageTimeCost=_checkStageTimeCost;
@property(nonatomic) double showEventTimeCost; // @synthesize showEventTimeCost=_showEventTimeCost;
@property(nonatomic) double showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) double jsCallShowTimeStamp; // @synthesize jsCallShowTimeStamp=_jsCallShowTimeStamp;
@property(nonatomic) double shouldShowEventTimeCost; // @synthesize shouldShowEventTimeCost=_shouldShowEventTimeCost;
@property(nonatomic) double jsReceiveShouldShowTimeStamp; // @synthesize jsReceiveShouldShowTimeStamp=_jsReceiveShouldShowTimeStamp;
@property(nonatomic) double shouldShowTimeStamp; // @synthesize shouldShowTimeStamp=_shouldShowTimeStamp;
@property(nonatomic) unsigned long long splashADCheckState; // @synthesize splashADCheckState=_splashADCheckState;
@property(nonatomic) unsigned long long splashADShowState; // @synthesize splashADShowState=_splashADShowState;
@property(nonatomic) __weak WASplashADViewController *splashADViewController; // @synthesize splashADViewController=_splashADViewController;
@property(retain, nonatomic) WASplashADWindow *splashADWindow; // @synthesize splashADWindow=_splashADWindow;
@property(nonatomic) _Bool canShowSplashADWindow; // @synthesize canShowSplashADWindow=_canShowSplashADWindow;
@property(copy, nonatomic) NSDictionary *splashADMenuParams; // @synthesize splashADMenuParams=_splashADMenuParams;
@property(nonatomic) _Bool splashADHasContent; // @synthesize splashADHasContent=_splashADHasContent;
- (void).cxx_destruct;
- (void)handleShowSplashAdCalled:(_Bool)arg1;
- (void)doReport;
- (void)recordJSReceiveShouldShowTimeStamp:(double)arg1 jsCallShowTimeStamp:(double)arg2;
- (void)recordDidLayoutAllView:(double)arg1;
- (void)recordWillLayoutAllView:(double)arg1;
- (void)recordDidLayoutFirstStepView:(double)arg1;
- (void)recordWillLayoutFirstStepView:(double)arg1;
- (void)recordReceiveShow:(double)arg1;
- (void)recordShouldShow:(double)arg1;

@end

