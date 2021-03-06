//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FavoritesItemDB, FavoritesSearchDB, NSMutableArray;

@interface FavoritesSearchMgr : MMObject
{
    FavoritesItemDB *_favItemDB;
    FavoritesSearchDB *_favSearchDB;
    NSMutableArray *_localSearchResult;
    int _searchId;
}

- (void).cxx_destruct;
- (id)syncSearch:(id)arg1 byType:(int)arg2 tags:(id)arg3;
- (void)deleteFirstContent:(id)arg1 inSring:(id)arg2;
- (void)deleteAccountInfo:(id)arg1 inSearchString:(id)arg2;
- (_Bool)checkErrorMatchContentIn:(id)arg1 withFavItem:(id)arg2 bySearchContent:(id)arg3;
- (void)search:(id)arg1 byType:(int)arg2 tags:(id)arg3;
- (_Bool)deleteSearchItemByLocalFavId:(unsigned int)arg1;
- (_Bool)insertOrUpdateSearchItem:(id)arg1;
- (void)broadcastGetSearchResult;
- (void)initSearch;
- (void)initDB:(id)arg1;
- (id)init;

@end

