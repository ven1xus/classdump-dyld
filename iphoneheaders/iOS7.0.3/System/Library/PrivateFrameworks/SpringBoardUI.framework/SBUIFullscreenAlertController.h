/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <CoreFoundation/NSCopying.h>

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {

	BOOL _shouldAnimateIn;
	NSNumber* _animationStartTime;
	NSString* _activationContext;
	NSInvocation* _pendingDeactivationInvocation;

}

@property (assign,nonatomic) BOOL shouldAnimateIn;                       //@synthesize shouldAnimateIn=_shouldAnimateIn - In the implementation block
@property (nonatomic,retain) NSNumber * animationStartTime;              //@synthesize animationStartTime=_animationStartTime - In the implementation block
@property (nonatomic,retain) NSString * activationContext;               //@synthesize activationContext=_activationContext - In the implementation block
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setAnimationStartTime:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(BOOL)definesPresentationContext;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)animationStartTime;
-(void)setActivationContext:(id)arg1 ;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)isSlidingViewController;
-(void)finishedAnimatingIn;
-(void)finishedAnimatingOut;
-(void)requestActivationAnimated:(BOOL)arg1 animateCurrentDisplayOut:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)requestDeactivationAnimated:(BOOL)arg1 animateOldDisplayInWithStyle:(int)arg2 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(void)setBackgroundStyle:(int)arg1 withDuration:(double)arg2 ;
-(void)removeBackgroundStyleWithDuration:(double)arg1 ;
-(BOOL)allowSuspension;
-(void)viewWillAnimateIn;
-(void)viewWillAnimateOut;
-(void)animateViewIn;
-(void)animateViewOut;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(BOOL)allowStackingOfAlert:(id)arg1 ;
-(void)handleAutoLock;
-(void)didFinishLaunchingFrontmost;
-(void)setPendingDeactivationInvocation:(id)arg1 ;
-(id)pendingDeactivationInvocation;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
-(id)activationContext;
@end
