//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/NSObject-Protocol.h>

@class MCTaskHandler, MCTaskHandlerOperation, NSOperationQueue;

@protocol MCHandlerDelegate <NSObject>
@property(readonly, nonatomic) NSOperationQueue *serializationQueue;
- (void)handlerDidCleanUp:(MCTaskHandler *)arg1;
- (void)handler:(MCTaskHandler *)arg1 didFinishOperation:(MCTaskHandlerOperation *)arg2;
@end

