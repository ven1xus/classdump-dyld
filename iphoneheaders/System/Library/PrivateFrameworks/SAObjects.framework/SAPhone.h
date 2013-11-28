/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSNumber * favoriteVoice; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * number; 
+(id)phone;
+(id)phoneWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)number;
-(void)setNumber:(id)arg1 ;
-(id)encodedClassName;
-(id)favoriteFacetime;
-(void)setFavoriteFacetime:(id)arg1 ;
-(id)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(id)arg1 ;
-(id)favoriteVoice;
-(void)setFavoriteVoice:(id)arg1 ;
@end
