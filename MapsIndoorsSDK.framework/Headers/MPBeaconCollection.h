//
//  MPBeaconCollection.h
//  MapsIndoorSDK
//
//  Created by Daniel Nielsen on 26/02/15.
//  Copyright (c) 2015 MapsPeople A/S. All rights reserved.
//

#import "MPBeacon.h"

@protocol MPBeacon
@end

@interface MPBeaconCollection : JSONModel

@property NSArray<MPBeacon>* list;

@end