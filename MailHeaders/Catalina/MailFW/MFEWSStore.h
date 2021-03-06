//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFRemoteStore.h>

#import <MailFW/MFEWSErrorHandler-Protocol.h>

@class MFEWSAccount, NSLock, NSMutableSet, NSString;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler>
{
    NSString *_syncState;	// 16 = 0x10
    NSLock *_syncLock;	// 24 = 0x18
    NSMutableSet *_flagsToSetDuringSync;	// 32 = 0x20
    NSString *_folderIdString;	// 40 = 0x28
}

@property(copy) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
// - (void).cxx_destruct;	// IMP=0x00000000000a3b71
- (void)handleEWSError:(id)arg1;	// IMP=0x00000000000a397f
- (BOOL)_loadFolderId;	// IMP=0x00000000000a378b
- (void)_setSyncState:(id)arg1 persistToLibrary:(BOOL)arg2;	// IMP=0x00000000000a35fd
@property(copy) NSString *syncState;
- (id)_gateway;	// IMP=0x00000000000a3540
@property(readonly, nonatomic) MFEWSAccount *account;
- (void)_fetchChangesFromServer;	// IMP=0x00000000000a32df
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000000000a30e8
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1;	// IMP=0x00000000000a2f71
- (void)deleteMessageWithEWSItemIdString:(id)arg1;	// IMP=0x00000000000a2da3
- (id)updateWithSyncState:(id)arg1 newMessages:(id)arg2 updatedMessages:(id)arg3 updatedLibraryIdStrings:(id)arg4 deletedMessages:(id)arg5 flagsByMessages:(id)arg6 isFinalBatch:(BOOL)arg7;	// IMP=0x00000000000a201a
- (void)forceResync;	// IMP=0x00000000000a1fea
- (id)lastSyncDate;	// IMP=0x00000000000a1f9a
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x00000000000a1ba7
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000000000a1a0f
- (void)fetchSynchronously;	// IMP=0x00000000000a19d8
- (void)openSynchronouslyIfWaitingToOpen;	// IMP=0x00000000000a19a0
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;	// IMP=0x00000000000a18c3
- (BOOL)allowsDeleteInPlace;	// IMP=0x00000000000a18bb
- (BOOL)allowsOverwrite;	// IMP=0x00000000000a18b3
- (BOOL)canRebuild;	// IMP=0x00000000000a186e
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;	// IMP=0x00000000000a17af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

