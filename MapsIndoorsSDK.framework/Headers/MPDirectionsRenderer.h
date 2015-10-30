//
//  MPDirectionsRenderer.h
//  MapsIndoorSDK
//
//  Created by Daniel Nielsen on 01/10/15.
//  Copyright © 2015 MapsPeople A/S. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMaps/GoogleMaps.h>
#import "MPRoute.h"

@protocol MPDirectionsRendererDelegate <NSObject>
/**
 * Floor change event.
 * @param RoutingCollection The Routing data collection.
 */
@optional
- (void) floorDidChange: (NSNumber*)floor;
@end



@interface MPDirectionsRenderer : NSObject

@property (weak) id <MPDirectionsRendererDelegate> delegate;

@property (nonatomic, strong) GMSMapView* map;
@property (nonatomic, strong) MPRoute* route;
@property (nonatomic, strong) UIButton* nextRouteLegButton;
@property (nonatomic, strong) UIButton* previousRouteLegButton;
@property (nonatomic) NSInteger routeLegIndex;

@property (nonatomic, strong) UIColor* solidColor;
@property (nonatomic, strong) UIColor* backgroundColor;
@property (nonatomic) BOOL fitBounds;

- (void)animate:(NSTimeInterval)duration;


@end
