/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/SMS.syncBundle/SMS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATClient.h>

@interface CKATClient : NSObject <ATClient>
-(BOOL)_isLegacyPreview:(id)arg1 ;
-(BOOL)_isAttachment:(id)arg1 ;
-(BOOL)_isLegacyAttachment:(id)arg1 ;
-(BOOL)_isMessagesPath:(id)arg1 ;
-(void)_prioritizeRecentAttachments;
-(void)restoreEndedWithError:(id)arg1 ;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)shouldRestoreFile:(id)arg1 backupManager:(id)arg2 ;
-(BOOL)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2 ;
-(id)supportedDataclasses;
@end
