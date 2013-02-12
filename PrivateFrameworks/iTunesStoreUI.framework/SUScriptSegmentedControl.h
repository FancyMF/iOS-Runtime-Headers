/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSNumber, NSString, SUStorePageViewController, UISegmentedControl;

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray *_segments;
    int _selectedIndex;
    int _style;
}

@property(readonly) UISegmentedControl * activeSegmentedControl;
@property(readonly) UISegmentedControl * nativeSegmentedControl;
@property(readonly) int nativeSelectedIndex;
@property(readonly) NSNumber * noSegmentIndex;
@property(readonly) NSArray * rawSegments;
@property(retain) id segments;
@property(retain) NSNumber * selectedIndex;
@property(readonly) SUStorePageViewController * storePageViewController;
@property(retain) NSString * style;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copySegments;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (int)_sectionsStyleForString:(id)arg1;
- (int)_selectedIndex;
- (void)_setRawSegments:(id)arg1;
- (void)_setSegments:(id)arg1;
- (void)_setSelectedIndex:(int)arg1;
- (void)_setStyle:(int)arg1;
- (int)_style;
- (id)activeSegmentedControl;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)nativeSegmentedControl;
- (int)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)noSegmentIndex;
- (id)rawSegments;
- (id)scriptAttributeKeys;
- (id)segments;
- (id)selectedIndex;
- (void)setNoSegmentIndex:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)storePageViewController;
- (id)style;

@end