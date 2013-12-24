/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSString;

@interface SAGetDeferredObject : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)getDeferredObject;
+(id)getDeferredObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)encodedClassName;
@end
