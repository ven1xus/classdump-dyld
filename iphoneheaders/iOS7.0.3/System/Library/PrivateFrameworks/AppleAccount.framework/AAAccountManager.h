/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;

}
+(id)sharedManager;
-(void)dealloc;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_removeAppleIDCertsForUsername:(id)arg1 ;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)saveAllAccounts;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(void).cxx_destruct;
-(void)addAccount:(id)arg1 ;
-(id)primaryAccount;
-(id)_accountStore;
@end
