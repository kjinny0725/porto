//
//  DetailViewController.h
//  porto
//
//  Created by 홍 경진 on 13. 11. 3..
//  Copyright (c) 2013년 홍 경진. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
