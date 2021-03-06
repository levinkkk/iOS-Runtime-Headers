/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKCollectionViewDataSourceDelegate>, GKGridLayoutMetrics, GKSectionMetrics, NSHashTable, NSMutableDictionary, NSString;

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource> {
    GKGridLayoutMetrics *_dataSourceMetricsInternal;
    NSString *_defaultSearchKey;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    <GKCollectionViewDataSourceDelegate> *_delegate;
    NSMutableDictionary *_kindsToFactories;
    NSHashTable *_listeners;
    NSMutableDictionary *_sectionsToMetrics;
    NSMutableDictionary *_sectionsToSearchKeys;
}

@property(copy) GKGridLayoutMetrics * dataSourceMetrics;
@property(retain) GKGridLayoutMetrics * dataSourceMetricsInternal;
@property(retain) NSString * defaultSearchKey;
@property(copy) GKSectionMetrics * defaultSectionMetrics;
@property(retain) GKSectionMetrics * defaultSectionMetricsInternal;
@property <GKCollectionViewDataSourceDelegate> * delegate;
@property(readonly) BOOL isRootDataSource;
@property(retain) NSMutableDictionary * kindsToFactories;
@property(retain) NSHashTable * listeners;
@property(retain) NSMutableDictionary * sectionsToMetrics;
@property(retain) NSMutableDictionary * sectionsToSearchKeys;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (BOOL)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (id)dataSourceForSection:(unsigned int)arg1;
- (id)dataSourceMetrics;
- (id)dataSourceMetricsInternal;
- (void)dealloc;
- (id)defaultSearchKey;
- (id)defaultSectionMetrics;
- (id)defaultSectionMetricsInternal;
- (id)delegate;
- (id)description;
- (void)enumerateItemsAndIndexPathsUsingBlock:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (BOOL)isRootDataSource;
- (BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(int)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id)kindsToFactories;
- (id)listeners;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (id)localDescription;
- (id)metricsForSection:(int)arg1;
- (id)metricsForSectionInternal:(int)arg1;
- (void)notifyBatchUpdate:(id)arg1 complete:(id)arg2;
- (void)notifyBatchUpdate:(id)arg1;
- (void)notifyDidReloadData;
- (void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2;
- (void)notifyItemsInsertedAtIndexPaths:(id)arg1;
- (void)notifyItemsRefreshedAtIndexPaths:(id)arg1;
- (void)notifyItemsRemovedAtIndexPaths:(id)arg1;
- (void)notifyPlaceholderUpdated:(BOOL)arg1;
- (void)notifySectionMovedFrom:(int)arg1 to:(int)arg2;
- (void)notifySectionsInserted:(id)arg1;
- (void)notifySectionsMovedWithItems;
- (void)notifySectionsRefreshed:(id)arg1;
- (void)notifySectionsRemoved:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)registerSupplementaryViewKind:(id)arg1 withFactory:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)resetViewFactories;
- (id)searchKeyForSection:(int)arg1;
- (unsigned int)sectionForDataSource:(id)arg1;
- (id)sectionsToMetrics;
- (id)sectionsToSearchKeys;
- (void)setDataSourceMetrics:(id)arg1;
- (void)setDataSourceMetricsInternal:(id)arg1;
- (void)setDefaultSearchKey:(id)arg1;
- (void)setDefaultSectionMetrics:(id)arg1;
- (void)setDefaultSectionMetricsInternal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKindsToFactories:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setMetrics:(id)arg1 forSection:(int)arg2;
- (void)setSearchKey:(id)arg1 forSection:(int)arg2;
- (void)setSectionsToMetrics:(id)arg1;
- (void)setSectionsToSearchKeys:(id)arg1;
- (id)supplementaryViewFactoryForKind:(id)arg1 atIndexPath:(id)arg2;
- (int)totalItemCount;

@end
