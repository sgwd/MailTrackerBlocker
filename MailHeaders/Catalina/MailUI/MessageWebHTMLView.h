//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WebHTMLView.h>

@class NSArray;

@interface MessageWebHTMLView : WebHTMLView
{
    NSArray *_attachmentsForContextualMenu;	// 120 = 0x78
}

// - (void).cxx_destruct;	// IMP=0x0000000100226077
- (void)setSelectionFloat:(id)arg1 undoTitle:(id)arg2;	// IMP=0x0000000100225fab
- (BOOL)canFloatSelectedElement;	// IMP=0x0000000100225f99
- (void)floatNone:(id)arg1;	// IMP=0x0000000100225f43
- (void)floatRight:(id)arg1;	// IMP=0x0000000100225eed
- (void)floatLeft:(id)arg1;	// IMP=0x0000000100225e97
- (id)_documentFragmentFromPasteboard:(id)arg1 inContext:(id)arg2 allowPlainText:(BOOL)arg3;	// IMP=0x0000000100225d2d
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;	// IMP=0x00000001000755e1
- (BOOL)acceptsFirstMouse:(id)arg1;	// IMP=0x0000000100225cf8
- (void)mouseDragged:(id)arg1;	// IMP=0x0000000100225c91
- (void)quickLookWithEvent:(id)arg1;	// IMP=0x0000000100225b43
- (void)keyDown:(id)arg1;	// IMP=0x000000010005f86e
- (id)messageViewer;	// IMP=0x0000000100225ab9
- (void)fixWebArchiveAndRTFDDataOnPasteboard:(id)arg1;	// IMP=0x00000001002255ac
- (void)writeSelectionWithPasteboardTypes:(id)arg1 toPasteboard:(id)arg2;	// IMP=0x0000000100225520
- (BOOL)validateUserInterfaceItem:(id)arg1;	// IMP=0x0000000100224bfd
- (void)insertList:(id)arg1;	// IMP=0x0000000100224b8b
- (void)decreaseListNestingLevel:(id)arg1;	// IMP=0x0000000100224b19
- (void)increaseListNestingLevel:(id)arg1;	// IMP=0x0000000100224aa7
- (void)convertToBulletedList:(id)arg1;	// IMP=0x0000000100224a35
- (void)convertToNumberedList:(id)arg1;	// IMP=0x00000001002249c3
- (void)insertNumberedList:(id)arg1;	// IMP=0x0000000100224951
- (void)insertBulletedList:(id)arg1;	// IMP=0x00000001002248df
- (void)exportAttachmentsToIPhoto:(id)arg1;	// IMP=0x000000010022488f
- (void)importInvitations:(id)arg1;	// IMP=0x00000001002247fc
- (void)chooseApplicationToOpenAttachment:(id)arg1;	// IMP=0x0000000100224744
- (void)openAttachmentWithApplication:(id)arg1;	// IMP=0x000000010022463d
- (void)viewAttachmentInline:(id)arg1;	// IMP=0x00000001002243d1
- (id)editingDelegate;	// IMP=0x0000000100224348
- (void)saveAttachmentToDownloadsDirectory:(id)arg1;	// IMP=0x0000000100224290
- (void)saveAttachment:(id)arg1;	// IMP=0x00000001002241d8
- (void)quickLookAttachment:(id)arg1;	// IMP=0x0000000100223fcb
- (void)quickLookSelectedAttachments:(id)arg1;	// IMP=0x0000000100223fb9
- (void)openAttachment:(id)arg1;	// IMP=0x0000000100223efc
- (id)attachmentForEvent:(id)arg1;	// IMP=0x0000000100075616
- (BOOL)moreThanOneAttachmentSelected;	// IMP=0x0000000100223baf
- (BOOL)allSelectedAttachmentsArePhotos;	// IMP=0x0000000100223a71
- (BOOL)selectionIsOneAttachment;	// IMP=0x0000000100223998
@property(readonly, copy, nonatomic) NSArray *selectedAttachments;
- (void)willShowContextualMenuForAttachment:(id)arg1;	// IMP=0x00000001002236b6
- (void)_setAttachmentsForContextualMenu:(id)arg1;	// IMP=0x0000000100223678
- (id)_attachmentsForContextualMenu;	// IMP=0x000000010022362b
- (id)selectedAttributedString;	// IMP=0x000000010022348f
- (void)_updateFontPanel;	// IMP=0x00000001000552a0
- (void)paste:(id)arg1;	// IMP=0x000000010022341d

@end
