/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface AggDThermalMonitor : NSObject {

	double cacheValues[8];
	NSObject<OS_dispatch_source>* theTimer;

}
-(double)maxValue:(bool)arg1 ;
-(void)uploadAggdData;
-(void)updateAggregateDictStats:(int)arg1 :(double)arg2 :(bool)arg3 ;
-(void)updateAggregateCell:(int)arg1 :(double)arg2 ;
-(void)dealloc;
-(id)init;
@end
