//
//  OAQuickSearchListItem.h
//  OsmAnd
//
//  Created by Alexey Kulish on 28/01/2017.
//  Copyright © 2017 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OADistanceDirection.h"
#import "OACity.h"

@class OASearchResult;

@interface OAQuickSearchListItem : NSObject

- (instancetype)initWithSearchResult:(OASearchResult *)searchResult;

- (OASearchResult *) getSearchResult;
+ (NSString *) getCityTypeStr:(EOACitySubType)type;
- (NSString *) getName;
+ (NSString *) getName:(OASearchResult *)searchResult;
+ (NSString *) getTypeName:(OASearchResult *)searchResult;

- (OADistanceDirection *) getEvaluatedDistanceDirection;
- (void) setMapCenterCoordinate:(CLLocationCoordinate2D)mapCenterCoordinate;
- (void) resetMapCenterSearch;

@end