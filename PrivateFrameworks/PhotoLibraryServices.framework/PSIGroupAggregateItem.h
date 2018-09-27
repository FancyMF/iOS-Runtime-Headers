/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregateItem : NSObject {
    NSArray * _assetIds;
    NSArray * _collectionIds;
    PSIGroup * _group;
    NSValue * _rangeMatchingToken;
    PSIQueryToken * _searchToken;
    NSArray * _tripIds;
}

@property (nonatomic, retain) NSArray *assetIds;
@property (nonatomic, retain) NSArray *collectionIds;
@property (nonatomic, retain) PSIGroup *group;
@property (nonatomic, retain) NSValue *rangeMatchingToken;
@property (nonatomic, retain) PSIQueryToken *searchToken;
@property (nonatomic, retain) NSArray *tripIds;

- (id)assetIds;
- (id)collectionIds;
- (void)dealloc;
- (id)group;
- (id)rangeMatchingToken;
- (void)reset;
- (id)searchToken;
- (void)setAssetIds:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setRangeMatchingToken:(id)arg1;
- (void)setSearchToken:(id)arg1;
- (void)setTripIds:(id)arg1;
- (id)tripIds;

@end