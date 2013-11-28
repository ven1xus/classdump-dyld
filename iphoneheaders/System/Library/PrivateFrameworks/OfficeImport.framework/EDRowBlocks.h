/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TSUFlushable.h>

@class EDWorksheet, NSMutableArray, EDCollection, NSString, NSRecursiveLock;

@interface EDRowBlocks : NSObject <TSUFlushable> {

	EDWorksheet* mWorksheet;
	NSMutableArray* mRowBlocks;
	EDCollection* mFormulas;
	unsigned mMaxPopulatedRow;
	unsigned mMaxPopulatedColumn;
	NSString* mFileName;
	int mLockCount;
	NSRecursiveLock* mSaveLoadLock;

}
-(void)save;
-(void)dealloc;
-(void)flush;
-(void)lock;
-(void)unlock;
-(void)load;
-(EDCellHeader*)cellWithRowNumber:(unsigned)arg1 columnNumber:(int)arg2 ;
-(unsigned)rowBlockCount;
-(unsigned)maxPopulatedRow;
-(id)rowBlockForRowNumber:(unsigned)arg1 currentRowBlock:(id)arg2 createIfNil:(bool)arg3 ;
-(id)formulas;
-(id)rowBlockForRowNumber:(unsigned)arg1 currentRowBlock:(id)arg2 ;
-(id)initWithWorksheet:(id)arg1 ;
-(unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)arg1 ;
-(id)rowBlockAtIndex:(unsigned)arg1 ;
-(void)updateMaxPopulatedRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(bool)spaceForRowNumber:(unsigned)arg1 rowBlock:(id)arg2 ;
-(void)removeRowBlockAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfRowBlockForRowNumber:(unsigned)arg1 ;
-(unsigned)maxPopulatedColumn;
-(id)fileNameForPersistingRowBlocks;
-(Class)classForFormulaType:(unsigned char)arg1 ;
-(unsigned char)formulaTypeForFormula:(id)arg1 ;
@end
