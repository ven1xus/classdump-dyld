/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface SKUIEmptyContentPlaceholderView : UIView {

	UIEdgeInsets _imageInsets;
	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _signInButton;

}

@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) UIEdgeInsets placeholderImageInsets;              //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholderMessage; 
@property (nonatomic,readonly) UILabel * placeholderMessageLabel; 
@property (assign,nonatomic) BOOL showsSignInButton; 
@property (nonatomic,readonly) UIButton * signInButton; 
-(id)placeholderImage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)placeholderMessage;
-(id)placeholderMessageLabel;
-(id)signInButton;
-(void)maskPlaceholdersInBackdropView:(id)arg1 ;
-(void)setPlaceholderImageInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderMessage:(id)arg1 ;
-(void)setShowsSignInButton:(BOOL)arg1 ;
-(BOOL)showsSignInButton;
-(UIEdgeInsets)placeholderImageInsets;
-(void).cxx_destruct;
-(void)setPlaceholderImage:(id)arg1 ;
@end
