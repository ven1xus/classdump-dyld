/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class GKPlayerPhotoView, GKLabel, GKScore;

@interface GKLeaderboardScoreCell : GKCollectionViewCell {

	BOOL _isAchievementCell;
	GKPlayerPhotoView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _scoreLabel;
	GKLabel* _rankLabel;

}

@property (nonatomic,retain) GKScore * score; 
@property (assign,nonatomic) BOOL isAchievementCell;                    //@synthesize isAchievementCell=_isAchievementCell - In the implementation block
@property (nonatomic,retain) GKPlayerPhotoView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * scoreLabel;                      //@synthesize scoreLabel=_scoreLabel - In the implementation block
@property (nonatomic,retain) GKLabel * rankLabel;                       //@synthesize rankLabel=_rankLabel - In the implementation block
+(float)defaultShowcaseRowHeight;
+(float)textOffsetForIdiom:(int)arg1 ;
+(float)defaultRowHeight;
-(id)rankLabel;
-(void)setRankLabel:(id)arg1 ;
-(void)initialContraints;
-(id)scoreLabel;
-(BOOL)isAchievementCell;
-(void)setIsAchievementCell:(BOOL)arg1 ;
-(void)setScoreLabel:(id)arg1 ;
-(id)score;
-(void)setRepresentedItem:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(BOOL)canRemoveItem;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setScore:(id)arg1 ;
@end
