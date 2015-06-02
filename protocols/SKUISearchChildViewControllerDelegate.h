/* Generated by RuntimeBrowser.
 */

@protocol SKUISearchChildViewControllerDelegate <NSObject>

@optional

- (void)searchChildViewController:(UIViewController *)arg1 didSelectEditorial:(SKUISearchEditorialResult *)arg2;
- (void)searchChildViewController:(UIViewController *)arg1 didSelectItem:(SKUIItem *)arg2;
- (void)searchChildViewController:(UIViewController *)arg1 didSelectRelatedQuery:(SKUISearchRelatedQuery *)arg2 withMetricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchChildViewController:(UIViewController *)arg1 didSelectSearchTerm:(NSString *)arg2;
- (void)searchChildViewControllerDidChangeFacetSelections:(UIViewController *)arg1 withMetricsEvent:(SSMetricsSearchEvent *)arg2;
- (void)searchChildViewControllerDidSelectRelatedBackButton:(UIViewController *)arg1 withMetricsEvent:(SSMetricsSearchEvent *)arg2;

@end