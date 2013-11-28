/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ChatKit/MKAnnotation.h>

@class CLLocation, NSString;

@interface MNDebugLocationAnnotation : NSObject <MKAnnotation> {

	CLLocation* _location;
	int _locationType;
	int _navType;

}

@property (nonatomic,retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int locationType;                        //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) int navType;                             //@synthesize navType=_navType - In the implementation block
@property (assign,nonatomic) SCD_Struct_Si10 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(void)setNavType:(int)arg1 ;
-(int)navType;
-(void)dealloc;
-(id)location;
-(SCD_Struct_Si10)coordinate;
-(void)setCoordinate:(SCD_Struct_Si10)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(int)locationType;
-(double)course;
-(void)setLocation:(id)arg1 ;
@end
