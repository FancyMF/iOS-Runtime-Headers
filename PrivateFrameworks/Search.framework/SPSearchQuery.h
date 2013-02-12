/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString;

@interface SPSearchQuery : NSObject <NSCopying> {
    double _cancellationTime;
    BOOL _cancelled;
    double _creationTime;
    NSInteger _domainCount;
    char *_domainVector;
    BOOL _finished;
    NSUInteger _queryID;
    NSString *_searchString;
}

@property(readonly) double cancellationTime; /* unknown property attribute: V_cancellationTime */
@property(readonly) double creationTime; /* unknown property attribute: V_creationTime */
@property(readonly) NSString *searchString; /* unknown property attribute: V_searchString */
@property(readonly) NSArray *searchDomains;
@property(readonly) BOOL cancelled;

- (void)cancel;
- (double)cancellationTime;
- (BOOL)cancelled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationTime;
- (void)dealloc;
- (char *)domainsVector;
- (NSInteger)domainsVectorCount;
- (NSUInteger)hash;
- (id)initWithSearchString:(id)arg1 andDomainsVector:(char *)arg2 vectorCount:(NSInteger)arg3;
- (id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)searchDomains;
- (id)searchString;

@end