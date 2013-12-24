/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {

	NSMutableDictionary* _runningQueries;

}

@property (retain) NSMutableDictionary * _runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)loadMessageWithGUID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(void)databaseFull;
-(void)databaseNoLongerFull;
-(id)_runningQueries;
-(void)set_runningQueries:(id)arg1 ;
@end
