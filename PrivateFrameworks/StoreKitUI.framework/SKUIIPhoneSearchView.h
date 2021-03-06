/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UICollectionView, UIView;

@interface SKUIIPhoneSearchView : UIView {
    UICollectionView *_collectionView;
    UIView *_noResultsView;
    float _relatedAdjustment;
}

@property(retain) UICollectionView * collectionView;
@property(retain) UIView * noResultsView;
@property float relatedAdjustment;

- (void).cxx_destruct;
- (id)collectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)noResultsView;
- (float)relatedAdjustment;
- (void)setCollectionView:(id)arg1;
- (void)setNoResultsView:(id)arg1;
- (void)setRelatedAdjustment:(float)arg1;

@end
