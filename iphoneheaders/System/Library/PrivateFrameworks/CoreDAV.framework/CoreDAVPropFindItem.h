/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;

}

@property (retain) CoreDAVItemWithNoChildren * propName;              //@synthesize propName=_propName - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * allProp;               //@synthesize allProp=_allProp - In the implementation block
@property (retain) CoreDAVItem * include;                             //@synthesize include=_include - In the implementation block
@property (retain) CoreDAVItem * prop;                                //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)prop;
-(void)setProp:(id)arg1 ;
-(id)propName;
-(id)allProp;
-(id)include;
-(void)setPropName:(id)arg1 ;
-(void)setAllProp:(id)arg1 ;
-(void)setInclude:(id)arg1 ;
@end
