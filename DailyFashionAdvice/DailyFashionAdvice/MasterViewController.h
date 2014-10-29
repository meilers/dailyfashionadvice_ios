//
//  MasterViewController.h
//  DailyFashionAdvice
//
//  Created by Michael J. Eilers Smith on 2014-10-28.
//  Copyright (c) 2014 Michael J. Eilers Smith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

