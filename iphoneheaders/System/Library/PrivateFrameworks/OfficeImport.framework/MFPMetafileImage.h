/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPImage.h>

@class NSData;

@interface MFPMetafileImage : MFPImage {

	NSData* mMetafileData;

}
-(void)dealloc;
-(id)initWithMetafileData:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4 ;
-(id)phoneImage;
@end
