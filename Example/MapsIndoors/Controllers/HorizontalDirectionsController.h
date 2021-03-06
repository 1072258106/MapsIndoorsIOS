//
//  HorizontalDirectionsController.h
//  MapsIndoorsGenericApp
//
//  Created by Daniel Nielsen on 04/09/15.
//  Copyright (c) 2015 MapsPeople A/S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EasyTableView/EasyTableView.h>
#import <MapsIndoors/MapsIndoors.h>

#import "UIFont+SystemFontOverride.h"

@interface HorizontalDirectionsController : UIViewController<EasyTableViewDelegate>

@property MPRoute* currentRoute;
@property EasyTableView* tableView;
@property (nonatomic, weak) IBOutlet UIView *tableFooter;
@property (nonatomic, weak) IBOutlet UIView *tableHeader;
@property (nonatomic, weak) IBOutlet UILabel *headerTitle;

- (IBAction)closeRouting;

@end
