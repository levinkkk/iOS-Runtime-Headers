/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class UIColor;

@interface MPUSeparatorView : UIView {
    float _leftMarginWidth;
    UIColor *_marginColor;
    float _rightMarginWidth;
    UIColor *_separatorColor;
}

@property float leftMarginWidth;
@property(retain) UIColor * marginColor;
@property float rightMarginWidth;
@property(retain) UIColor * separatorColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)leftMarginWidth;
- (id)marginColor;
- (float)rightMarginWidth;
- (id)separatorColor;
- (void)setLeftMarginWidth:(float)arg1;
- (void)setMarginColor:(id)arg1;
- (void)setRightMarginWidth:(float)arg1;
- (void)setSeparatorColor:(id)arg1;

@end
