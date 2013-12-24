/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSApplyThemeChildCommand.h>

@class TSWPStorage;

@interface TSWPTextApplyThemeCommand : TSSApplyThemeChildCommand {

	TSWPStorage* _storage;
	TSWPStorageTransaction* _undoRedoTransaction;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TextApplyThemeCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TextApplyThemeCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)shouldRunSynchronously;
-(id)initWithStorage:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)undo;
-(void)redo;
-(void)commit;
-(void)undoRedo;
-(BOOL)process;
@end
