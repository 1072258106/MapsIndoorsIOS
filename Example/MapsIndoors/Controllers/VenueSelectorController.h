//
//  VenueSelectorController.h
//  MapsIndoors
//
//  Created by Daniel Nielsen on 05/07/16.
//  Copyright © 2016 Daniel Nielsen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapsIndoors/MapsIndoors.h>

typedef void(^mpVenueSelectBlockType)(MPVenue* venue);

@protocol VenueSelectorDelegate

@required
- (void) onVenueSelected: (MPVenue*) venue;

@end

@interface VenueSelectorController : UITableViewController

@property (weak) id venueSelectDelegate;

- (void) venueSelectCallback: (mpVenueSelectBlockType)selectCallbackFn;

@end
