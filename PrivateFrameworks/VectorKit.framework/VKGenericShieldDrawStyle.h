/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGenericShieldDrawStyle : VKDrawStyle {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct CGSize { 
        float width; 
        float height; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _backgroundColor;
    } _borderColor;
    } _dropShadowColor;
    } _dropShadowOffset;
    float _dropShadowSize;
    } _haloColor;
    float _haloSize;
    int _style;
    } _textColor;
}

@property struct _VGLColor { float x1; float x2; float x3; float x4; } backgroundColor;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } borderColor;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } dropShadowColor;
@property struct CGSize { float x1; float x2; } dropShadowOffset;
@property float dropShadowSize;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } haloColor;
@property float haloSize;
@property int style;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } textColor;

- (id).cxx_construct;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })backgroundColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })borderColor;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })dropShadowColor;
- (struct CGSize { float x1; float x2; })dropShadowOffset;
- (float)dropShadowSize;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })haloColor;
- (float)haloSize;
- (id)initWithStyleInfo:(id)arg1;
- (void)setBackgroundColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setBorderColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setDropShadowColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setDropShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setDropShadowSize:(float)arg1;
- (void)setHaloColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setHaloSize:(float)arg1;
- (void)setStyle:(int)arg1;
- (void)setTextColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (int)style;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2 globals:(id)arg3;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })textColor;
- (id)variant;

@end
