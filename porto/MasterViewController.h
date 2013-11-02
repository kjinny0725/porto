//
//  MasterViewController.h
//  porto
//
//  Created by 홍 경진 on 13. 11. 3..
//  Copyright (c) 2013년 홍 경진. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
