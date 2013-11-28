/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettingsAssistantBaseSettingsProvider.h>

@class NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {

	NSDictionary* _exportSettings;

}

@property (nonatomic,readonly) NSDictionary * baseAudioSettings; 
@property (nonatomic,readonly) NSDictionary * baseVideoSettings; 
-(id)baseAudioSettings;
-(id)baseVideoSettings;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
