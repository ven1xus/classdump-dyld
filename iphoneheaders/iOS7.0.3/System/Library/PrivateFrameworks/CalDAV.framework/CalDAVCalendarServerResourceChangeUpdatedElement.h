/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {

	BOOL _content;
	CoreDAVItem* _prop;
	NSMutableSet* _calendarChanges;

}

@property (assign) BOOL content;                                //@synthesize content=_content - In the implementation block
@property (retain) CoreDAVItem * prop;                          //@synthesize prop=_prop - In the implementation block
@property (retain) NSMutableSet * calendarChanges;              //@synthesize calendarChanges=_calendarChanges - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)content;
-(void)setCalendarChanges:(id)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
-(id)copyParseRules;
-(id)prop;
-(void)setProp:(id)arg1 ;
-(id)calendarChanges;
-(void)setContent:(BOOL)arg1 ;
@end
