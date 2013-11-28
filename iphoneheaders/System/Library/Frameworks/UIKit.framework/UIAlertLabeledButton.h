/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UILabel;

@interface UIAlertLabeledButton : UIAlertButton {

	UILabel* _typeLabel;
	float _titleOffset;

}

@property (nonatomic,readonly) UILabel * typeLabel; 
@property (assign,nonatomic) float titleOffset;                  //@synthesize titleOffset=_titleOffset - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(float)titleOffset;
-(void)setTitleOffset:(float)arg1 ;
-(id)typeLabel;
@end
