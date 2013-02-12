/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
    struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
    BOOL baseLineIsNull;
    float baseline;
    CPCharSequence *charSequence;
    NSArray *columnBreaks;
    NSInteger columnNumber;
    BOOL disposed;
    BOOL hasBeenProcessed;
    BOOL hasBeenSplit;
    BOOL hasTabs;
    BOOL irregular;
    BOOL isListItem;
    NSInteger levels;
    NSInteger lineBreak;
    NSInteger lineNumber;
    NSUInteger listSpacerIndex;
    float maximumLetterGap;
    float maximumWordGap;
    BOOL maySplit;
    float minimumOffset;
    NSInteger tabsBefore;
        } x5; } *wordArray;
    NSUInteger wordCount;
    NSArray *xsegments;
}

@property BOOL isListItem;
@property NSUInteger listSpacerIndex;

- (void)accept:(id)arg1;
- (NSInteger)align;
- (struct CGPoint { float x1; float x2; })anchor;
- (void)append:(id)arg1;
- (id)attributes;
- (NSInteger)baseLineAscending:(id)arg1;
- (NSInteger)baseLineDescending:(id)arg1;
- (float)baseline;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfWordAtIndex:(NSUInteger)arg1;
- (BOOL)changesFontAt:(id)arg1;
- (id)charSequence;
- (id)columnBreaks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (void)fitBoundsToChildren;
- (BOOL)hasBeenProcessed;
- (BOOL)hasBeenSplit;
- (BOOL)hasDropCap;
- (BOOL)hasJustifiedAlignment;
- (BOOL)hasTabs;
- (BOOL)hyphenated;
- (id)init;
- (BOOL)irregular;
- (BOOL)isIndivisible;
- (BOOL)isListItem;
- (BOOL)joinFrom:(id)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (NSInteger)levels;
- (NSInteger)lineBreak;
- (NSUInteger)listSpacerIndex;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (float)maximumLetterGap;
- (float)maximumWordGap;
- (float)medianFontSize;
- (id)newTextLineFromWordAt:(NSUInteger)arg1 lengthInWords:(NSUInteger)arg2;
- (BOOL)overlapsHorizontally:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)overlapsWith:(id)arg1;
- (void)prepend:(id)arg1;
- (id)properties;
- (void)recomputeBaseline;
- (void)recomputeLevels;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (void)setBaseline:(float)arg1;
- (void)setBaselineToNull;
- (void)setCharSequence:(id)arg1;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (void)setHasBeenSplit:(BOOL)arg1;
- (void)setHasTabs:(BOOL)arg1;
- (void)setIrregular:(BOOL)arg1;
- (void)setIsListItem:(BOOL)arg1;
- (void)setLevels:(NSInteger)arg1;
- (void)setLineBreak:(NSInteger)arg1;
- (void)setListSpacerIndex:(NSUInteger)arg1;
- (void)setMaximumLetterGap:(float)arg1;
- (void)setMaximumWordGap:(float)arg1;
- (void)setTabsBefore:(NSInteger)arg1;
- (BOOL)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (NSInteger)tabsBefore;
- (NSInteger)topIsAbove:(id)arg1;
- (void)translateObjectYBy:(float)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(NSUInteger)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(NSUInteger)arg1;
- (NSUInteger)wordCount;
- (long)zOrder;

@end