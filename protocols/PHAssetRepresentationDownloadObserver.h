/* Generated by RuntimeBrowser.
 */

@protocol PHAssetRepresentationDownloadObserver <PHAssetRepresentationObserver>

@required

- (void)downloadStateOfAssetRepresentationDidChange:(PHAssetRepresentation *)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;

@optional

- (void)downloadOfAssetRepresentation:(PHAssetRepresentation *)arg1 didProgress:(double)arg2;

@end
