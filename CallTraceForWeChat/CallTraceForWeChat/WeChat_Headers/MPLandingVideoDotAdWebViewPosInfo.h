//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MPLandingVideoDotAdWebViewPosInfo : NSObject
{
    NSArray *_gravityCompsArr;
    double _left;
    double _right;
    double _top;
    double _bottom;
    double _width;
    double _height;
    NSString *_gravity;
}

@property(copy, nonatomic) NSString *gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) double left; // @synthesize left=_left;
- (void).cxx_destruct;
- (id)description;
- (double)heightWithBounds:(struct CGRect)arg1;
- (double)widthWithBounds:(struct CGRect)arg1;
- (double)bottomWithBounds:(struct CGRect)arg1;
- (double)topWithBounds:(struct CGRect)arg1;
- (double)rightWithBounds:(struct CGRect)arg1;
- (double)leftWithBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *gravityCompsArr; // @synthesize gravityCompsArr=_gravityCompsArr;

@end
