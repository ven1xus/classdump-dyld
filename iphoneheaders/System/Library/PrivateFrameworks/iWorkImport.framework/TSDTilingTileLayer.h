/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDNoDefaultImplicitActionLayer.h>

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer {

	unsigned mIndex;
	BOOL mNeedsTileDisplay;
	NSRange mLocation;

}

@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL needsTileDisplay; 
@property (assign,nonatomic) NSRange location; 
-(void)setNeedsLayoutForTilingLayers;
-(void)updateFrameWithTileSize:(CGSize)arg1 tilesWide:(unsigned)arg2 tilesHigh:(unsigned)arg3 ;
-(void)setNeedsTileDisplay:(BOOL)arg1 ;
-(BOOL)needsTileDisplay;
-(void)setNeedsDisplayInRectIgnoringBackground:(CGRect)arg1 ;
-(id)tileContentsLayer;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(unsigned)index;
-(id)hitTest:(CGPoint)arg1 ;
-(NSRange)location;
-(void)setIndex:(unsigned)arg1 ;
-(void)display;
-(void)setLocation:(NSRange)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
