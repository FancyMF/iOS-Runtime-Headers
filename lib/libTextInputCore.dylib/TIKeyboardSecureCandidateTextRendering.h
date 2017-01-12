/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIKeyboardSecureCandidateTextRendering : NSObject

+ (id)_defaultLayoutTraitsForTraits:(id)arg1;
+ (void)_drawLineFromCellAtIndex:(unsigned int)arg1 ofResponse:(id)arg2 atYCoordinate:(float)arg3 inContext:(struct CGContext { }*)arg4 withAvailableWidth:(float)arg5;
+ (BOOL)_drawSingleLineHeaders:(id)arg1 inputs:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(struct __CFArray { }*)arg5 availableWidth:(float)arg6 truncationSentinel:(id)arg7 abortInsteadOfTruncating:(BOOL)arg8;
+ (void)_drawTwoLineCellsWithHeaders:(id)arg1 inputs:(id)arg2 layoutTraits:(id)arg3 renderTraits:(id)arg4 contexts:(struct __CFArray { }*)arg5 availableWidth:(float)arg6 truncationSentinel:(id)arg7;
+ (void)_handleEllipsisTruncationForTextRuns:(id)arg1 textRunResponses:(id)arg2 inAvailableWidth:(float)arg3;
+ (BOOL)_isAllSingleLineStrings:(id)arg1;
+ (struct __CFAttributedString { }*)_newAttributedStringWithText:(id)arg1 font:(struct __CTFont { }*)arg2 color:(struct CGColor { }*)arg3;
+ (struct CGColor { }*)_newCgColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (struct CGColor { }*)_newCgColorWithTraitsColor:(id)arg1 invertColor:(BOOL)arg2;
+ (id)_requestLayoutForSimplifiedTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned int)arg3;
+ (BOOL)_textRunsHaveFixedFontSize:(id)arg1;
+ (float)_totalWidthForCell:(unsigned int)arg1 fromTextRunResponses:(id)arg2;
+ (void)drawHeaders:(id)arg1 inputs:(id)arg2 inContexts:(struct __CFArray { }*)arg3 traits:(id)arg4 truncationSentinel:(id)arg5;
+ (id)requestLayoutForTextRuns:(id)arg1 inWidthGroups:(id)arg2 steps:(unsigned int)arg3;
+ (id)truncatedWidthsForItemWidths:(id)arg1 availableWidth:(double)arg2;

@end