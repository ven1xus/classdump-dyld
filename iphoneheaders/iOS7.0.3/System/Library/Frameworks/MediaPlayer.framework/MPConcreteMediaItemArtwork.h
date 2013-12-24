/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemArtwork.h>
#import <CoreFoundation/NSCoding.h>

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding> {

	unsigned long long _itemPersistentID;
	MPMediaLibrary* _library;
	CGRect _bounds;
	CGRect _cropRect;

}
-(id)imageWithSize:(CGSize)arg1 atPlaybackTime:(double)arg2 ;
-(id)imageDataWithSize:(CGSize)arg1 atPlaybackTime:(double)arg2 ;
-(BOOL)hasArtworkAvailable;
-(id)albumImageWithSize:(CGSize)arg1 ;
-(id)albumImageDataWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
-(id)_initWithItem:(id)arg1 ;
-(id)_imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 scaleToSize:(CGSize)arg4 ;
-(id)_imageForSize:(CGSize)arg1 artworkCacheID:(id)arg2 playbackTime:(double)arg3 scaleToSize:(BOOL)arg4 ;
-(id)_cacheIDAtPlaybackTime:(double)arg1 ;
-(id)_imageDataForSize:(CGSize)arg1 playbackTime:(double)arg2 ;
-(BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(int)arg2 artworkCacheID:(id)arg3 ;
-(BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(CGSize)arg2 artworkCacheID:(id)arg3 ;
-(id)imageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 ;
-(id)imageWithSize:(CGSize)arg1 artworkCacheID:(id)arg2 ;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
@end
