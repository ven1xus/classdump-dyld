/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PLPublishingAgentDelegate
@optional
-(void)publishingAgentDidStartRemaking:(id)arg1;
-(void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;

@required
-(void)publishingAgentCancelButtonClicked:(id)arg1;
-(void)publishingAgentDoneButtonClicked:(id)arg1;
-(void)publishingAgentDidBeginPublishing:(id)arg1;
-(void)publishingAgentWillBeDisplayed:(id)arg1;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
@end
