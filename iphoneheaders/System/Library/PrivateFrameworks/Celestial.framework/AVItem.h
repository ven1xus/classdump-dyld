/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVItem : NSObject {

	AVItemPrivate* _priv;

}
+(id)avItem;
+(id)avItemWithPath:(id)arg1 error:(id*)arg2 ;
-(id)accessLog;
-(id)errorLog;
-(void)setEQPreset:(int)arg1 ;
-(void)cancelDownload;
-(float)downloadProgress;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)path;
-(id)url;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(BOOL)setPath:(id)arg1 error:(id*)arg2 ;
-(void)stopDownload;
-(int)eqPreset;
-(id)formatDetailsForTracks;
-(id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4 ;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3 ;
-(id)urlFromPath:(id)arg1 ;
-(int)_instantiateItem;
-(id)chapterImageForImageID:(int)arg1 ;
-(void*)downloadThread;
-(long)beginDownloading;
-(long)downloadStatus;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithError:(id*)arg1 ;
@end
