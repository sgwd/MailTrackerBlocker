//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Quota.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MFRemoteStoreSizeEngine, NSArray, NSButton, NSMutableArray, NSString;

@interface RemoteStoreQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_mailboxes;	// 8 = 0x8
    struct QuotaSimpleSortDescriptor _simpleSortDescs[3];	// 16 = 0x10
    NSButton *_showMessagesButton;	// 64 = 0x40
}

@property(nonatomic) __weak NSButton *showMessagesButton; // @synthesize showMessagesButton=_showMessagesButton;
// - (void).cxx_destruct;	// IMP=0x0000000100260661
- (void)resortMailboxes;	// IMP=0x0000000100260587
- (void)syncSortDescriptors;	// IMP=0x0000000100260071
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100260035
- (unsigned long long)numberOfSortDescriptors;	// IMP=0x000000010026002a
- (id)_iconForMailbox:(id)arg1;	// IMP=0x000000010026000c
- (BOOL)tableShouldIncludeMailbox:(id)arg1;	// IMP=0x0000000100260001
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x000000010025ff7f
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;	// IMP=0x000000010025feb6
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;	// IMP=0x000000010025fea4
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x000000010025fba6
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x000000010025fb77
- (void)showMessages:(id)arg1;	// IMP=0x000000010025f9f7
- (void)engineUpdated:(id)arg1;	// IMP=0x000000010025f518
@property(copy, nonatomic) NSArray *mailboxes;
- (void)dealloc;	// IMP=0x000000010025f439
- (void)awakeFromNib;	// IMP=0x000000010025f2d4
- (id)initWithSizeEngine:(id)arg1;	// IMP=0x000000010025f198

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MFRemoteStoreSizeEngine *sizeEngine; // @dynamic sizeEngine;
@property(readonly) Class superclass;

@end

