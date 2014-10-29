//
//  DetailViewController.h
//  DailyFashionAdvice
//
//  Created by Michael J. Eilers Smith on 2014-10-28.
//  Copyright (c) 2014 Michael J. Eilers Smith. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

