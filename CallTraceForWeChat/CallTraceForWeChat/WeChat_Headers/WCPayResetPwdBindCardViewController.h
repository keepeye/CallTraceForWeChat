//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "MMWebViewDelegate-Protocol.h"

@class NSString, UIButton, WCPayTenpaySecureCtrlItem;
@protocol WCPayResetPwdBindCardViewControllerDelegate;

@interface WCPayResetPwdBindCardViewController : WCPayBaseViewController <MMWebViewDelegate>
{
    UIButton *m_footerButton;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    id <WCPayResetPwdBindCardViewControllerDelegate> m_delegate;
    _Bool bPoped;
}

- (void).cxx_destruct;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)webViewReturn:(id)arg1;
- (void)changeRealName;
- (void)showDetailTip;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initFooterView;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)OnWCPayResetPwdBindCardBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

