/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {
    float mActualWidth;
    int mCap;
    TSUColor *mColor;
    int mJoin;
    float mMiterLimit;
    TSDStrokePattern *mPattern;
    float mWidth;
}

@property float actualWidth;
@property int cap;
@property(retain) TSUColor * color;
@property(readonly) float dashSpacing;
@property(readonly) BOOL dontClearBackground;
@property(readonly) BOOL drawsOutsideStrokeBounds;
@property(readonly) BOOL empty;
@property(readonly) BOOL isDash;
@property(readonly) BOOL isFrame;
@property(readonly) BOOL isNearlyWhite;
@property(readonly) BOOL isNullStroke;
@property(readonly) BOOL isRoundDash;
@property int join;
@property float miterLimit;
@property(readonly) struct _TSDStrokeOutsets { float x1; float x2; float x3; float x4; } outsets;
@property(retain) TSDStrokePattern * pattern;
@property(readonly) BOOL shouldRender;
@property(readonly) BOOL solid;
@property(readonly) BOOL supportsColor;
@property(readonly) BOOL supportsLineOptions;
@property(readonly) BOOL supportsPattern;
@property(readonly) BOOL supportsWidth;
@property float width;

+ (BOOL)canMixWithNilObjects;
+ (id)emptyStroke;
+ (id)instanceWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)p_newEmptyStroke;
+ (id)p_newStroke;
+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(float)arg2;

- (void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5;
- (float)actualWidth;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext { }*)arg1 insideStroke:(BOOL)arg2;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(BOOL)arg2 withScale:(float)arg3;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(float)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(BOOL)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (void)applyToRepCALayer:(id)arg1 withScale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (BOOL)canApplyDirectlyToRepCALayer;
- (BOOL)canApplyToCAShapeLayer;
- (int)cap;
- (id)color;
- (id)colorForCGContext:(struct CGContext { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dashSpacing;
- (void)dealloc;
- (id)description;
- (BOOL)dontClearBackground;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)drawsInOneStep;
- (BOOL)drawsOutsideStrokeBounds;
- (BOOL)empty;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(float)arg6;
- (id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (BOOL)isDash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStroke:(id)arg1;
- (BOOL)isFrame;
- (BOOL)isNearlyWhite;
- (BOOL)isNullStroke;
- (BOOL)isRoundDash;
- (BOOL)isThemeEquivalent:(id)arg1;
- (int)join;
- (float)lineEndInsetAdjustment;
- (SEL)mapThemeAssetSelector;
- (float)miterLimit;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (struct _TSDStrokeOutsets { float x1; float x2; float x3; float x4; })outsets;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(BOOL)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(BOOL)arg4;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (void)paintPathWithNormalClip:(struct CGPath { }*)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(struct CGContext { }*)arg3;
- (id)pathForLineEnd:(id)arg1 wrapPath:(BOOL)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 atAngle:(float)arg4 withScale:(float)arg5;
- (id)pattern;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)saveToArchive:(struct StrokeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Color {} *x3; float x4; int x5; int x6; float x7; struct StrokePatternArchive {} *x8; struct SmartStrokeArchive {} *x9; struct FrameArchive {} *x10; struct PatternedStrokeArchive {} *x11; int x12; unsigned int x13[1]; }*)arg1 archiver:(id)arg2;
- (void)setActualWidth:(float)arg1;
- (void)setCap:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setJoin:(int)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setPattern:(id)arg1;
- (void)setWidth:(float)arg1;
- (BOOL)shouldAntialiasDefeat;
- (BOOL)shouldRender;
- (BOOL)solid;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)strokeLineEnd:(id)arg1;
- (BOOL)supportsColor;
- (BOOL)supportsLineOptions;
- (BOOL)supportsPattern;
- (BOOL)supportsWidth;
- (float)width;

@end
