/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>
#import <EventKitUI/EKCellShortener.h>

@class UITableViewCell;

@interface EKEventEditedByDetailItem : EKEventDetailItem <EKCellShortener> {

	UITableViewCell* _cell;

}
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(void)shortenCell:(id)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned)arg1 ;
-(void)reset;
-(void).cxx_destruct;
@end
