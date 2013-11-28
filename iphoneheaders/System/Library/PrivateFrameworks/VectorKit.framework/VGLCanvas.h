/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VGLCanvas <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float contentScale; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) VGLContext * vglContext; 
@required
+(Class)contextClass;
-(CGSize*)size;
-(float)contentScale;
-(id)vglContext;
-(void)willDrawView;
-(void)didDrawView;
-(CGSize*)sizeInPixels;
@end
