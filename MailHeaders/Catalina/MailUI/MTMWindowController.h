//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "MTMMailboxControllerProtocol-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class MTMMailbox, MailToolbar, NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSString, NSURL, NSWindow, StarFieldController;

@interface MTMWindowController : NSWindowController <MTMMailboxControllerProtocol, NSToolbarDelegate>
{
    NSURL *_mailLibraryURL;	// 16 = 0x10
    NSURL *_focusURL;	// 24 = 0x18
    NSMutableDictionary *_accounts;	// 32 = 0x20
    BOOL _activated;	// 40 = 0x28
    BOOL _bindingsAreSet;	// 41 = 0x29
    StarFieldController *_controller;	// 48 = 0x30
    MTMMailbox *_rootMailbox;	// 56 = 0x38
    NSDictionary *_preferences;	// 64 = 0x40
    MailToolbar *_toolbar;	// 72 = 0x48
    NSDictionary *_toolbarItems;	// 80 = 0x50
    NSDictionary *_tableOfContents;	// 88 = 0x58
}

+ (void)loadPreferences:(id *)arg1 accounts:(id *)arg2 tableOfContents:(id *)arg3 rootMailbox:(id *)arg4 forLibraryURL:(id)arg5;	// IMP=0x000000010023eaf9
+ (BOOL)_loadTableOfContents:(id *)arg1 forLibraryURL:(id)arg2;	// IMP=0x000000010023e9ce
+ (id)focusURLInCurrentSnapshotForFocusURL:(id)arg1;	// IMP=0x000000010023e78c
+ (id)baseLibraryURLFromMailLibraryURL:(id)arg1;	// IMP=0x000000010023e695
+ (id)mailLibraryURLFromFocusURL:(id)arg1;	// IMP=0x000000010023e141
+ (Class)specialMailboxClass;	// IMP=0x000000010023e139
@property(copy, nonatomic) NSDictionary *tableOfContents; // @synthesize tableOfContents=_tableOfContents;
@property(copy, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(nonatomic) __weak MailToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, copy, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) BOOL bindingsAreSet; // @synthesize bindingsAreSet=_bindingsAreSet;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) MTMMailbox *rootMailbox; // @synthesize rootMailbox=_rootMailbox;
@property(nonatomic) __weak StarFieldController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;	// IMP=0x0000000100241894
- (void)updateMessageListBindingsWithDisplayedMailbox:(id)arg1 scrollerDelta:(double)arg2;	// IMP=0x0000000100241786
- (long long)compare:(id)arg1;	// IMP=0x0000000100241611
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002414b9
- (void)restore:(id)arg1;	// IMP=0x00000001002411c5
@property(readonly, nonatomic) double fadeDuration;
@property(nonatomic) BOOL showChangedItemsOnly;
@property(readonly, copy, nonatomic) NSArray *restoreMessagePaths;
@property(readonly, copy, nonatomic) NSArray *restoreMailboxPaths;
@property(readonly, nonatomic) BOOL shouldRestoreMailboxPaths;
@property(readonly, copy, nonatomic) NSArray *selectedMessagePaths;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxPaths;
@property(readonly, nonatomic) MTMMailbox *selectedMailbox;
@property(readonly, nonatomic) BOOL mailboxTargeted;
- (void)mailboxListWasUpdated:(id)arg1;	// IMP=0x000000010024100d
- (void)mailboxListWillBeUpdated:(id)arg1;	// IMP=0x0000000100241007
- (void)updateThumbnailAndGenericThumbnailIfNecessary;	// IMP=0x0000000100240f3d
@property(readonly, copy, nonatomic) NSAttributedString *placeholderString;
- (void)updateThumbnailAsGenericWindow;	// IMP=0x0000000100240d83
- (void)updateThumbnail;	// IMP=0x0000000100240bbc
- (id)revisionIDForURL:(id)arg1;	// IMP=0x000000010024081f
- (void)adjustDisplayStateAfterTimeMachineStarted;	// IMP=0x0000000100240819
@property(copy, nonatomic) NSDictionary *displayState;
- (id)accountForAccountID:(id)arg1;	// IMP=0x00000001002407ee
- (void)_setupToolbarWithConfigurationDictionary:(id)arg1;	// IMP=0x00000001002404ae
- (id)messageWithID:(id)arg1;	// IMP=0x00000001002403af
- (BOOL)_loadTableOfContentsIfNeeded;	// IMP=0x000000010024028f
@property(readonly, copy, nonatomic) NSArray *mailboxes;
@property(readonly, nonatomic) NSURL *mailLibraryURL;
@property(readonly, nonatomic) NSURL *tocURL;
@property(retain, nonatomic) NSURL *focusURL;
- (void)_updateTimeMachineTargetIfNecessary;	// IMP=0x000000010023fe42
- (void)deactivate;	// IMP=0x000000010023fcad
- (void)activate;	// IMP=0x000000010023fb52
- (BOOL)setupUIWithDisplayState:(id)arg1;	// IMP=0x000000010023faf3
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010023f964
- (void)removeBindings;	// IMP=0x000000010023f734
- (void)setupBindings;	// IMP=0x000000010023f676
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010023f5a7
- (id)initWithWindow:(id)arg1;	// IMP=0x000000010023f4d8
- (id)initWithFocusURL:(id)arg1 bufferedController:(id)arg2 controller:(id)arg3;	// IMP=0x000000010023f2cd
- (id)initWithFocusURL:(id)arg1 controller:(id)arg2;	// IMP=0x000000010023f0cd
- (id)toolbarAllowedItemIdentifiers:(id)arg1;	// IMP=0x0000000100241ca6
- (id)toolbarDefaultItemIdentifiers:(id)arg1;	// IMP=0x0000000100241c4f
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;	// IMP=0x0000000100241938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSWindow *window;

@end

