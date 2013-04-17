//
//  TCMasterViewController.h
//  CoreDataTut
//
//  Created by Thuy Copeland on 4/16/13.
//  Copyright (c) 2013 Thuy Copeland. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class TCDetailViewController;

#import <CoreData/CoreData.h>

@interface TCMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, CLLocationManagerDelegate>{
    
}

@property (strong, nonatomic) TCDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) NSMutableArray *eventsArray;
@property (strong, nonatomic) UIBarButtonItem *addButton;
@property (strong, nonatomic) CLLocationManager *locationManager;

@end
