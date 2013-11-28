/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <StoreKitUI/SKUINetworkErrorDelegate.h>
#import <StoreKitUI/SKUIProductPageHeaderViewDelegate.h>
#import <StoreKitUI/SKUIProductPageChildViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>

@protocol SKUIProductPageChildViewController, SKUIIPhoneProductPageDelegate;
@class ACAccountStore, UIViewController, SKUIProductPageDetailsViewController, SKUINetworkErrorViewController, SKUIFacebookLikeStatus, SKUIProductPageHeaderViewController, SKUIIncompatibleAppViewController, SKUIItem, SSMetricsPageEvent, SKUIProductPagePlaceholderViewController, SKUILoadProductPageOperation, SKUIMetricsController, NSOperationQueue, SKUIProductPage, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURLRequest, NSURL;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate> {

	ACAccountStore* _accountStore;
	UIViewController<SKUIProductPageChildViewController>* _childViewController;
	<SKUIIPhoneProductPageDelegate>* _delegate;
	SKUIProductPageDetailsViewController* _detailsViewController;
	SKUINetworkErrorViewController* _errorViewController;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIIncompatibleAppViewController* _incompatibleViewController;
	SKUIItem* _item;
	SSMetricsPageEvent* _lastPageEvent;
	SKUIProductPagePlaceholderViewController* _loadingViewController;
	SKUILoadProductPageOperation* _loadOperation;
	long long _lookupItemIdentifier;
	SKUIMetricsController* _metricsController;
	NSOperationQueue* _operationQueue;
	SKUIProductPagePlaceholderViewController* _relatedPlaceholderViewController;
	SKUIProductPage* _productPage;
	SKUISwooshArrayViewController* _relatedViewController;
	SKUIProductPageReviewsViewController* _reviewsViewController;
	int _sectionIndex;
	NSURLRequest* _urlRequest;
	BOOL _wantsActivityViewController;

}

@property (nonatomic,readonly) SKUIItem * item;                                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SKUIProductPage * productPage;                                //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (assign,nonatomic,__weak) <SKUIIPhoneProductPageDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithURLRequest:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(id)item;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(void)configureMetricsWithPageEvent:(id)arg1 ;
-(id)productPage;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(void)_setMetricsController:(id)arg1 ;
-(id)activeMetricsController;
-(void)_reloadChildViewControllers;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg1 ;
-(void)productPageChildOpenItem:(id)arg1 ;
-(void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(/*^block*/ id)arg2 ;
-(void)productPageChildViewControllerDidScroll:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg1 ;
-(id)_headerViewController;
-(void)_shareButtonAction:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2 ;
-(id)metricsControllerForProductPageHeader:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2 ;
-(CGPoint)topContentOffset;
-(void)_setProductPage:(id)arg1 error:(id)arg2 ;
-(id)_reviewsViewController;
-(void)_reloadFacebookLikeStatus;
-(void)_setFacebookLikeStatus:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)_viewControllerForSectionIndex:(unsigned)arg1 ;
-(void)_showError:(id)arg1 ;
-(BOOL)_isIncompatibleItem;
-(id)_detailsViewController;
-(id)_relatedViewController;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(id)_initSKUIIPhoneProductPageViewController;
-(void)_setContentInsetsForChildViewController:(id)arg1 ;
-(void)_setHeaderPositionForChildViewController:(id)arg1 ;
-(void)_showActivityViewController;
-(void)_invalidateChildViewControllers;
-(void)_presentHTMLProductPage;
-(void)_animateAddToWishlist;
-(id)_loadingViewController;
-(id)_relatedPlaceholderViewController;
-(void).cxx_destruct;
-(id)initWithItemIdentifier:(long long)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
@end
