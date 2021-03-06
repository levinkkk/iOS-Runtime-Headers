/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, UIView;

@interface SKUICollectionViewCell : UICollectionViewCell {
    UIView *_bottomBorderView;
    int _position;
    UIView *_rightBorderView;
    UIColor *_separatorColor;
    BOOL _showsCellSeparators;
}

@property(retain) UIColor * separatorColor;
@property BOOL showsCellSeparators;

- (void).cxx_destruct;
- (void)_setPosition:(int)arg1;
- (BOOL)_showsRightBorder;
- (void)_updateBorderVisibility;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)separatorColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setShowsCellSeparators:(BOOL)arg1;
- (BOOL)showsCellSeparators;

@end
