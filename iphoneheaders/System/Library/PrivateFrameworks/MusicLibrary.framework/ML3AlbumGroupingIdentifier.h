/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	long long _albumArtistPersisentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	int _seasonNumber;
	BOOL _compilation;

}

@property (nonatomic,readonly) long long albumArtistPersisentID;              //@synthesize albumArtistPersisentID=_albumArtistPersisentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                          //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                            //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) int seasonNumber;                              //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL compilation;                              //@synthesize compilation=_compilation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(int)arg4 compilation:(BOOL)arg5 ;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(int)arg4 compilation:(BOOL)arg5 inLibrary:(id)arg6 ;
-(long long)albumArtistPersisentID;
-(id)groupingKey;
-(id)feedURL;
-(int)seasonNumber;
-(BOOL)compilation;
-(void).cxx_destruct;
@end
