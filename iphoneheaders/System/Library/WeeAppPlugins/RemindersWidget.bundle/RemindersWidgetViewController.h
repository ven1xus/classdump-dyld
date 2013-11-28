/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/WeeAppPlugins/RemindersWidget.bundle/RemindersWidget
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RemindersWidget/RemindersWidget-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <RemindersWidget/RemindersCheckboxCell.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, EKEventStore, NSObject, UITableView;

@interface RemindersWidgetViewController : _SBUIWidgetViewController <UITableViewDataSource, UITableViewDelegate, RemindersCheckboxCell> {

	NSMutableArray* _reminders;
	EKEventStore* _eventStore;
	NSObject<OS_dispatch_queue>* _eventStoreQueue;
	NSObject<OS_dispatch_source>* _eventStoreIdleTimerSource;
	UITableView* _table;
	CGSize _preferredViewSize;

}
-(id)dueDateStringForReminder:(id)arg1 ;
-(id)locationStringForReminder:(id)arg1 ;
-(unsigned)positionOfDeadlineInCells;
-(void)checkboxCellDidTapCheckbox:(id)arg1 ;
-(void)_killEventStoreIdleTimer;
-(void)_recalculatePreferredViewSize;
-(float)heightForReminder:(id)arg1 ;
-(float)_calculatePreferredHeight;
-(void)eventStoreChanged;
-(void)reloadReminders;
-(void)_startEventStoreIdleTimer;
-(id)_eventStore;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(CGSize)preferredViewSize;
-(void)hostDidPresent;
-(void)hostDidDismiss;
-(void).cxx_destruct;
@end
